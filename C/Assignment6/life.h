/*
 * life.h
 *
 *  Created on: Spt 26, 2020
 *      Author: Jhonatan Roopnarine
 */

#ifndef LIFE_H_
#define LIFE_H_

#define ALIVE 1
#define DEAD 0
#define BUFSIZE 512

//Have the board start with alll dead cells
void initBoard(int XSIZE, int YSIZE, int a[][YSIZE]);

//Playy a round and update the cells as you go
void playRound(int XSIZE, int YSIZE, int a[][YSIZE]);

//Print board after completion 
void printBoard(int XSIZE, int YSIZE, int a[][YSIZE]);

//Find the amount of neighbors 
int neighbors(int XSIZE, int YSIZE, int a[][YSIZE], int x, int y);

/* Conclude if the cells are within bounds
 * Return 0 if the cell is out of bounds; 
 * Return 1 if the cell is in bounds
 */
int onBoard(int x, int y, int XSIZE, int YSIZE);

#endif /* LIFE_H_ */