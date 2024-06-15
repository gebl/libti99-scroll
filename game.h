#ifndef _MAP_H
#define _MAP_H

#define MAPCOLS 159
#define MAPROWS 24

/**
* 0 12:5
* 0   0  0x0 sky:sky
* 0   1  0x1 weed1:weed1
* 0   2  0x2 weed1:sky
* 0   3  0x3 sky:stem
* 0   4  0x4 stem:weed1
* 0   5  0x5 sky:weed1
* 0   6  0x6 weed1:stem
* 0   7  0x7 stem:sky
* 1   8  0x8 weed1:weed2
* 1   9  0x9 weed2:weed1
* 1   10  0xa sky:weed2
* 1   11  0xb weed2:sky
* 1   12  0xc weed2:weed2
* 1   13  0xd weed2:stem
* 1   14  0xe stem:weed2
* 1   15 blank
* 2 6:12
* 2   16  0x10 groundcap:groundcap
* 2   17 blank
* 2   18 blank
* 2   19 blank
* 2   20 blank
* 2   21 blank
* 2   22 blank
* 2   23 blank
* 3 3:12
* 3   24  0x18 groundspec:groundspec
* 3   25  0x19 groundspec:ground
* 3   26  0x1a ground:ground
* 3   27  0x1b ground:groundspec
* 3   28 blank
* 3   29 blank
* 3   30 blank
* 3   31 blank
* -   32  0x20 DINOHEADLEFT
* -   33  0x21 DINOHEADRIGHT
* -   34  0x22 DINOBODY
* -   35  0x23 BARREL
**/


#define CTLEN 5
#define DINOHEADLEFT 32
#define DINOHEADRIGHT 33
#define DINOBODY 34
#define BARREL 35

unsigned const char ct[CTLEN] = {
0xc5,
0xc5,
0x6c,
0x3c,
0xc5
};

unsigned const char map[24][159] = {
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},
{ 0x1,0x1,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3,0x4,0x2,0x0,0x5,0x1,0x6,0x7,0x5,0x8,0x9,0x2,0xa,0xb,0x0,0x0,0x5,0x2,0x3,0x7,0x5,0x8,0x9,0x1,0x2,0x3,0x7,0xa,0xc,0x9,0x6,0x4,0x8,0xb,0xa,0xb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xa,0xd,0x7,0x0,0x0,0x0,0xa,0x9,0x2,0x5,0x2,0x0,0xa,0xb,0x0,0x0,0x3,0x7,0x3,0x7,0xa,0xb,0x5,0x2,0x5,0x1,0x6,0x7,0x5,0x8,0xb,0x5,0x2,0x5,0x1,0x6,0x4,0x8,0xc,0xb,0xa,0xb,0x5,0x1,0x8,0xb,0xa,0x9,0x2,0x5,0x2,0xa,0x9,0x1,0x6,0x4,0x2,0xa,0xb,0x0,0x0,0xa,0xb,0x0,0x0,0x0,0x0,0xa,0xb,0xa,0xb,0x3,0xe,0xb,0x3,0x7,0x0,0xa,0xc,0xc,0x9,0x6,0x7,0x3,0xe,0x9,0x2,0x0,0x5,0x2,0xa,0xb,0x0,0x0,0x0,0xa,0xb,0x5,0x2,0xa,0xb,0x0,0x3,0x7},
{ 0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10},
{ 0x18,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1a,0x1b,0x19,0x1b,0x19,0x1a,0x1b,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19},
{ 0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1a,0x1b},
{ 0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1a,0x1a,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1a,0x1b,0x19,0x1b,0x18},
{ 0x19,0x1b,0x19,0x1b,0x19,0x1a,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1a,0x1a,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18},
{ 0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1b,0x19,0x1a,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1a,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1a,0x1b,0x19,0x1b,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1b},
{ 0x18,0x18,0x18,0x19,0x1a,0x1a,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x19,0x1a,0x1a,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1a,0x1a,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19},
{ 0x18,0x18,0x18,0x18,0x19,0x1b,0x19,0x1b,0x19,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x19,0x1b,0x18,0x19,0x1b,0x19,0x1b,0x18,0x19,0x1a,0x1b,0x19,0x1a,0x1b,0x19,0x1a,0x1a,0x1b,0x18,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1a,0x1b,0x18,0x19,0x1a,0x1b,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x19,0x1b,0x18,0x19,0x1a,0x1a,0x1a,0x1b,0x19,0x1a,0x1b,0x18,0x18,0x19,0x1b,0x18,0x18,0x18,0x18,0x18,0x18,0x19}
};

#define PATLEN 288

unsigned const char pat0[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x18,0x5a,0x5e,0x7e,0x38,0x18,0x18,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x18,0x18,0x5a,0x5e,0x7e,0x38,0x18,0x18,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x0,0x0,0x20,0x30,0x12,0x52,0x54,0x94,
0x18,0x18,0x5a,0x5e,0x7e,0x38,0x18,0x18,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xef,0xe5,0xa1,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x6,0x0,0x0,0x60,0x3,0x0,
0x0,0x0,0x6,0x0,0x0,0x60,0x3,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0x80,0xe0,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x24,0x36,
0x3c,0x7e,0xff,0xff,0xbf,0xdf,0x6e,0x3c
};

unsigned const char pat1[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x29,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x28,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x30,0x30,0xb4,0xbc,0xfc,0x70,0x30,0x31,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x28,
0x30,0x30,0xb4,0xbc,0xfc,0x70,0x30,0x30,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x29,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x29,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x28,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x29,
0x0,0x0,0x40,0x60,0x24,0xa4,0xa8,0x28,
0x30,0x30,0xb4,0xbc,0xfc,0x70,0x30,0x31,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xdf,0xcb,0x43,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0xc,0x0,0x0,0xc0,0x6,0x0,
0x0,0x0,0xc,0x0,0x0,0xc0,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0x80,0xe0,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x24,0x36,
0x3c,0x7e,0xff,0xff,0xbf,0xdf,0x6e,0x3c
};

unsigned const char pat2[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x80,0xc0,0x48,0x49,0x51,0x52,
0x0,0x0,0x80,0xc0,0x48,0x48,0x50,0x50,
0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,
0x60,0x60,0x68,0x78,0xf8,0xe1,0x61,0x62,
0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x2,
0x0,0x0,0x81,0xc1,0x49,0x48,0x50,0x50,
0x60,0x60,0x68,0x78,0xf8,0xe0,0x60,0x60,
0x0,0x0,0x80,0xc0,0x48,0x49,0x51,0x52,
0x0,0x0,0x80,0xc0,0x48,0x49,0x51,0x52,
0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x2,
0x0,0x0,0x80,0xc0,0x48,0x48,0x50,0x50,
0x0,0x0,0x80,0xc0,0x48,0x49,0x51,0x52,
0x0,0x0,0x81,0xc1,0x49,0x48,0x50,0x50,
0x60,0x60,0x68,0x78,0xf8,0xe1,0x61,0x62,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xbf,0x97,0x86,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x18,0x0,0x0,0x81,0xc,0x0,
0x0,0x0,0x18,0x0,0x0,0x80,0xc,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0x80,0xe0,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x24,0x36,
0x3c,0x7e,0xff,0xff,0xfd,0xfb,0x76,0x3c
};

unsigned const char pat3[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x81,0x90,0x92,0xa2,0xa4,
0x0,0x0,0x0,0x80,0x90,0x90,0xa0,0xa0,
0x0,0x0,0x2,0x2,0x3,0x1,0x0,0x0,
0xc0,0xc0,0xd1,0xf1,0xf0,0xc2,0xc2,0xc4,
0x0,0x0,0x1,0x1,0x0,0x2,0x2,0x4,
0x0,0x0,0x2,0x82,0x93,0x91,0xa0,0xa0,
0xc0,0xc0,0xd0,0xf0,0xf0,0xc0,0xc0,0xc0,
0x0,0x0,0x1,0x81,0x90,0x92,0xa2,0xa4,
0x0,0x0,0x1,0x81,0x90,0x92,0xa2,0xa4,
0x0,0x0,0x1,0x1,0x0,0x2,0x2,0x4,
0x0,0x0,0x0,0x80,0x90,0x90,0xa0,0xa0,
0x0,0x0,0x1,0x81,0x90,0x92,0xa2,0xa4,
0x0,0x0,0x2,0x82,0x93,0x91,0xa0,0xa0,
0xc0,0xc0,0xd1,0xf1,0xf0,0xc2,0xc2,0xc4,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0x7f,0x2f,0xd,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x30,0x0,0x0,0x3,0x18,0x0,
0x0,0x0,0x30,0x0,0x0,0x0,0x18,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x3,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0x80,0xe0,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x46,0x80,
0x3c,0x7e,0xff,0xff,0xfd,0xfb,0x76,0x3c
};

unsigned const char pat4[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x2,0x3,0x21,0x25,0x45,0x49,
0x0,0x0,0x0,0x0,0x20,0x20,0x40,0x40,
0x1,0x1,0x5,0x5,0x7,0x3,0x1,0x1,
0x80,0x80,0xa2,0xe3,0xe1,0x85,0x85,0x89,
0x0,0x0,0x2,0x3,0x1,0x5,0x5,0x9,
0x1,0x1,0x5,0x5,0x27,0x23,0x41,0x41,
0x80,0x80,0xa0,0xe0,0xe0,0x80,0x80,0x80,
0x0,0x0,0x2,0x3,0x21,0x25,0x45,0x49,
0x0,0x0,0x2,0x3,0x21,0x25,0x45,0x49,
0x0,0x0,0x2,0x3,0x1,0x5,0x5,0x9,
0x0,0x0,0x0,0x0,0x20,0x20,0x40,0x40,
0x0,0x0,0x2,0x3,0x21,0x25,0x45,0x49,
0x1,0x1,0x5,0x5,0x27,0x23,0x41,0x41,
0x80,0x80,0xa2,0xe3,0xe1,0x85,0x85,0x89,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xfe,0x5e,0x1a,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x60,0x0,0x0,0x6,0x30,0x0,
0x0,0x0,0x60,0x0,0x0,0x0,0x30,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x6,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0xe0,0x80,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x46,0x80,
0x3c,0x76,0xfb,0xfd,0xff,0xff,0x7e,0x3c
};

unsigned const char pat5[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x4,0x6,0x42,0x4a,0x8a,0x92,
0x0,0x0,0x0,0x0,0x40,0x40,0x80,0x80,
0x3,0x3,0xb,0xb,0xf,0x7,0x3,0x3,
0x0,0x0,0x44,0xc6,0xc2,0xa,0xa,0x12,
0x0,0x0,0x4,0x6,0x2,0xa,0xa,0x12,
0x3,0x3,0xb,0xb,0x4f,0x47,0x83,0x83,
0x0,0x0,0x40,0xc0,0xc0,0x0,0x0,0x0,
0x0,0x0,0x4,0x6,0x42,0x4a,0x8a,0x92,
0x0,0x0,0x4,0x6,0x42,0x4a,0x8a,0x92,
0x0,0x0,0x4,0x6,0x2,0xa,0xa,0x12,
0x0,0x0,0x0,0x0,0x40,0x40,0x80,0x80,
0x0,0x0,0x4,0x6,0x42,0x4a,0x8a,0x92,
0x3,0x3,0xb,0xb,0x4f,0x47,0x83,0x83,
0x0,0x0,0x44,0xc6,0xc2,0xa,0xa,0x12,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xfd,0xbc,0x34,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0xc0,0x0,0x0,0xc,0x60,0x0,
0x0,0x0,0xc0,0x0,0x0,0x0,0x60,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xc,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0xe0,0x80,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x46,0x80,
0x3c,0x76,0xfb,0xfd,0xff,0xff,0x7e,0x3c
};

unsigned const char pat6[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0xc,0x84,0x94,0x15,0x25,
0x0,0x0,0x0,0x0,0x80,0x80,0x0,0x0,
0x6,0x6,0x16,0x17,0x1f,0xe,0x6,0x6,
0x0,0x0,0x88,0x8c,0x84,0x14,0x15,0x25,
0x0,0x0,0x8,0xc,0x4,0x14,0x15,0x25,
0x6,0x6,0x16,0x17,0x9f,0x8e,0x6,0x6,
0x0,0x0,0x80,0x80,0x80,0x0,0x0,0x0,
0x0,0x0,0x8,0xc,0x84,0x94,0x15,0x25,
0x0,0x0,0x8,0xc,0x84,0x94,0x15,0x25,
0x0,0x0,0x8,0xc,0x4,0x14,0x15,0x25,
0x0,0x0,0x0,0x0,0x80,0x80,0x0,0x0,
0x0,0x0,0x8,0xc,0x84,0x94,0x15,0x25,
0x6,0x6,0x16,0x17,0x9f,0x8e,0x6,0x6,
0x0,0x0,0x88,0x8c,0x84,0x14,0x15,0x25,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xfb,0x79,0x68,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x81,0x0,0x0,0x18,0xc0,0x0,
0x0,0x0,0x80,0x0,0x0,0x0,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x0,0x18,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0xe0,0x80,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x14,0xe,
0x3c,0x6e,0xdf,0xbf,0xff,0xff,0x7e,0x3c
};

unsigned const char pat7[288] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0xc,0x2d,0x2f,0x3f,0x1c,0xc,0xc,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0xc,0xc,0x2d,0x2f,0x3f,0x1c,0xc,0xc,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0xc,0xc,0x2d,0x2f,0x3f,0x1c,0xc,0xc,
0x0,0x0,0x10,0x18,0x9,0x29,0x2a,0x4a,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0xff,0xff,0xff,0xf7,0xf2,0xd0,0x0,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x3,0x0,0x0,0x30,0x81,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x80,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x3,0x0,0x0,0x30,0x1,0x0,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
0x0,0x0,0x0,0x3,0x6,0x7,0x7,0x7,
0x0,0x0,0x0,0xe0,0xf0,0xf0,0xe0,0x80,
0x87,0x8f,0xff,0xff,0x7e,0x3c,0x14,0xe,
0x3c,0x6e,0xdf,0xbf,0xff,0xff,0x7e,0x3c
};

#endif
