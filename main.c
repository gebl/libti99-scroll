#include <kscan.h>
#include <vdp.h>
#include <conio.h>
#include <speech.h>
#include <system.h>
#include <string.h>

#include "game.h"
#include "vdp_scroll.h"

#define SIT1 0x01
#define SIT2 0x03

#define SCREENW 32
#define SCREENH 24

#define BSTART 239
#define WRAP ((MAPCOLS - 32) * 8)

typedef struct viz
{
  unsigned x0:1;
  unsigned x1:1;
  unsigned x2:1;
} viz;

void initPat()
{
  int frame = 0;
  int pataddr = gPattern;

  vdpmemcpy(PDT_OFFSET * frame, pat0, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat1, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat2, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat3, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat4, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat5, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat6, PATLEN);
  frame++;

  vdpmemcpy(PDT_OFFSET * frame, pat7, PATLEN);
  frame++;
}

inline void initCT()
{
  vdpmemset(gColor, 0, 32);
  vdpmemcpy(gColor, ct, CTLEN);
}

inline void fillSit(int sitreg, int col, int row)
{
  int sitaddr = sitreg * SIT_OFFSET;

  vdpmemcpy(sitaddr + (row * 32), &(map[row][col]), 32);
  row++;
  vdpmemcpy(sitaddr + (row * 32), &(map[row][col]), 32);
  row++;
  vdpmemcpy(sitaddr + (row * 32), &(map[row][col]), 32);
}

inline void setSpritePosition(int n, int y, int x)
{
  unsigned int adr = gSprite + (n << 2);
  VDP_SET_ADDRESS_WRITE(adr);
  VDPWD = y;
  VDPWD = x;
}

void splash() {
  set_text();

  bgcolor(COLOR_BLACK);
  textcolor(COLOR_GRAY);
  clrscr();
  cursor(1);
  gotoxy(0,0);
  cputs("Hello world!");

  if (detect_speech()) {
    say_vocab(0x3f08); // let
    speech_wait();
    say_vocab(0x69b6); // the 
    speech_wait();
    say_vocab(0x2e28); // games 
    speech_wait();
    say_vocab(0x637c); // start 
    speech_wait();
  }
  
  while (!kbhit()) {
  }

}

void scoresplash(unsigned int score) {
  set_text();
  charsetlc();

  bgcolor(COLOR_BLACK);
  textcolor(COLOR_GRAY);
  clrscr();
  cursor(1);
  gotoxy(0,0);
  cputs("Your score: ");
  cputs(uint2str(score));
  while (!kbhit()) {
  }

}

unsigned int game()
{
  unsigned int score2;
  unsigned int score;
  int frame, bbsit, f;
  unsigned char y, key,lastkey,lastjump,lives,x0,x1,x2,i,col;
  char yv;
  viz viz;

  lives=3;
  score=0;
  score2=0;
  x0 = BSTART;
  x1 = BSTART;
  x2 = BSTART;
  y = 111;
  yv = 0;
  viz.x0=1;
  

  set_graphics(VDP_SPR_8x8MAG);

  VDP_SET_REGISTER(VDP_REG_CT, 0xff); // Color Table 0x3fc0 : (Register 3) * 40 (Hex)
  gColor = 0xff * CT_OFFSET;
  VDP_SET_REGISTER(VDP_REG_PDT, 0x0000); //Pattern table begins at 0x0000: (Register 4) * 800 (Hex)
  VDP_SET_REGISTER(VDP_REG_SDT, 0x0000); //Pattern table begins at 0x0000: (Register 4) * 800 (Hex)
  gPattern = 0x00 * PDT_OFFSET;
  VDP_SET_REGISTER(VDP_REG_SIT, SIT1); //Name Table (Register 2) * 400 (Hex)
  gImage = SIT1 * SIT_OFFSET;
  bbsit = SIT2;
  VDP_SET_REGISTER(VDP_REG_COL, 0x00); //Color - black
  VDP_SET_REGISTER(VDP_REG_SAL, 0x27);
  gSprite = 0x27 * 0x80;

  vdpmemset(0, 0, m16k);
  initPat();
  initCT();
  for (f = 0; f < 8; f++)
  {
    fillSit(SIT1, 0, f * 3);
    fillSit(SIT2, 1, f * 3);
  }


  sprite(0, DINOBODY, COLOR_WHITE, 100, 10);
  sprite(1, DINOHEADRIGHT, COLOR_WHITE, 100, 2);
  sprite(2, DINOHEADLEFT, COLOR_WHITE, 100, 2);

  sprite(3, BARREL, COLOR_GRAY, BSTART, BSTART);
  sprite(4, BARREL, COLOR_GRAY, BSTART, BSTART);
  sprite(5, BARREL, COLOR_GRAY, BSTART, BSTART);

  int pAddr = gImage+(1<<5)+20;
  vdpchar(pAddr,DINOHEADRIGHT);
  frame = 0;
  while (lives>0) {
    VDP_WAIT_VBLANK_CRU;

    y = y + (yv/5);
    if (y<20) {
      y=20;
    }

    if (y < 111) {
       yv = yv + 1;
    } else {
      y = 111;
      yv=0;
      lastjump=0;
    }

    key=kscan(5);

    if (key==0x20 && key!=lastkey) {
      if (yv==0) {
        yv=-20;
      } else if (lastjump<2 && yv<0) {
        lastjump++;
        yv=yv-8;
      } else if (lastjump<2) {
        lastjump++;
        yv=yv-20;
      }
    } 
    lastkey=key;

    frame++;
    score++;
    if (frame == WRAP)
    {
      frame = 0;
    }
    f = frame % 8;
    col = frame >> 3; //divide frame by 8 floor.

    if (f == 0)
    {
      VDP_SET_REGISTER(VDP_REG_SIT, bbsit); //Name Table (Register 2) * 400 (Hex)
      gImage = bbsit * SIT_OFFSET;
      pAddr = gImage+(1<<5)+20;

      for(i=0; i<lives; i++) {
        vdpchar(pAddr+(2*(lives-i)),DINOHEADLEFT);
        vdpchar(pAddr+(2*(lives-i)+1),DINOHEADRIGHT);
      }
      bbsit = (bbsit == SIT1) ? SIT2 : SIT1;
    }

    VDP_SET_REGISTER(VDP_REG_PDT, f); //Pattern table begins at 0x0000: (Register 4) * 800 (Hex)
    VDP_SET_REGISTER(VDP_REG_SDT, f); //Pattern table begins at 0x0000: (Register 4) * 800 (Hex)
    gPattern = frame * PDT_OFFSET;

    fillSit(bbsit, col++, f * 3);

    if (viz.x0) {
      x0 = x0 - 3;
      if (x0 > 70 && x0 < 80 && y>85)
      {
        lives--;
        
        x0 = BSTART;
      }
      if (x0<5) {
        x0 = BSTART;
        score2=score2+2;
      }
      setSpritePosition(3, 111, x0);
    }
    if (viz.x1) {
      x1 = x1 - 3;
      if (x1 > 70 && x1 < 80 && y>85)
      {
        viz.x1=0;
        lives--;
        x1 = BSTART;
        setSpritePosition(4, 111, 0xff);
      } else if (x1<5) {
        viz.x1=0;
        x1 = BSTART;
        setSpritePosition(4, 111, 0xff);
        score2=score2+20;
      } else {
        setSpritePosition(4, 111, x1);
      }
    } else {
      if (score % 500==0) {
        viz.x1=1;
      }
    }
    if (viz.x2) {
      x2 = x2 - 4;
      if (x2 > 70 && x2 < 80 && y>85)
      {
        viz.x2=0;
        lives--;
        x2 = BSTART;
        setSpritePosition(5, 111, 0xff);
      } else if (x2<5) {
        viz.x2=0;
        x2 = BSTART;
        setSpritePosition(5, 111, 0xff);
        score2=score2+10;
      } else {
        setSpritePosition(5, 111, x2);
      }
    } else {
      if (score % 350==0) {
        viz.x2=1;
     }
    }

    setSpritePosition(0, y, 80);
    setSpritePosition(1, y-16, 96);
    setSpritePosition(2, y-16, 80);
  }
  return score2;
}

int main() {
  unsigned int score;
  splash();
  while (1) {
  score=game();
  cgetc();
  scoresplash(score);
  }
}
