/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "life.h"

int main(int argc, char *argv[])
{

    FILE *gol;
    int line = 0;
    char input[BUFSIZE];

    //Sets file gol to gol.txt
    gol = fopen("gol.txt", "r");

    int XSIZE, YSIZE, DEFAULTROUNDS;

    while (fgets(input, 512, gol))
    {
        line++;

        switch (line)
        {
        case 1:
            break;
        case 2:
            DEFAULTROUNDS = atoi(input);
            break;
        case 3:
            XSIZE = atoi(input);
            break;
        case 4:
            YSIZE = atoi(input);
            break;
        }
    }

    fclose(gol);

    int board[XSIZE][YSIZE];
    int rounds = DEFAULTROUNDS;

    initBoard(XSIZE, YSIZE, board);
    int count = 0;
    int inputLen = strlen(input);

    while (count < inputLen)
    {
        int tempx, tempy;

        //Give coordinates proper value
        sscanf(input, "%d %d", &tempx, &tempy);
        board[tempx][tempy] = ALIVE;

        //Length of strings where last coordinate was
        char s[32];
        char t[32];
        int lengthx = sprintf(s, "%d", tempx);
        int lengthy = sprintf(t, "%d", tempy);
        int twointlength = lengthx + lengthy + 2;

        //Use the prevoius coordinates and make it into 
        //white space to select the next coordinates
        for (int i = 0; i < twointlength; i++)
        {
            input[count + i] = ' ';
        }

        //Find the lenght by clearing char
        memset(s, 0, 32);
        memset(t, 0, 32);

        count += twointlength;
    }

    printf("Playing %d rounds with a grid size of %d by %d.\n\n", rounds, XSIZE, YSIZE);
    for (int i = 0; i < rounds; i++)
    {
        printf("Round: %d\n", i + 1);
        printBoard(XSIZE, YSIZE, board);
        playRound(XSIZE, YSIZE, board);

        sleep(1);
    }

    return 0;
}

void initBoard(int XSIZE, int YSIZE, int a[][YSIZE])
{
    /* write this function */
    for (int i = 0; i < YSIZE; i++)
    {
        for (int j = 0; j < XSIZE; j++)
        {
            a[i][j] = DEAD;
        }
    }
}

void playRound(int XSIZE, int YSIZE, int a[][YSIZE])
{
    int tmpBoard[XSIZE][YSIZE];
    initBoard(XSIZE, YSIZE, tmpBoard);
    int n;
    // perform the algorithm on vBoard, but update tmpBoard
    // with the new state

    /* write this fragment */
    for (int i = 0; i < YSIZE; i++)
    {
        for (int j = 0; j < XSIZE; j++)
        {
            n = 0;
            n = neighbors(XSIZE, YSIZE, a, i, j);
            if (a[i][j] == ALIVE)
            {
                if (n < 2)
                {
                    tmpBoard[i][j] = DEAD;
                }
                else if (n == 2 || n == 3)
                {
                    tmpBoard[i][j] = ALIVE;
                }
                else if (n > 3)
                {
                    tmpBoard[i][j] = DEAD;
                }
            }
            else if (a[i][j] == DEAD)
            {
                if (n == 3)
                {
                    tmpBoard[i][j] = ALIVE;
                }
            }
        }
    }

    // copy tmpBoard over vBoard
    for (int y = 0; y < YSIZE; y++)
    {
        for (int x = 0; x < XSIZE; x++)
        {
            a[x][y] = tmpBoard[x][y];
        }
    }
}

int onBoard(int x, int y, int XSIZE, int YSIZE)
{
    if (x < 0 || x >= XSIZE)
        return 0;
    else if (y < 0 || y >= YSIZE)
        return 0;
    else
        return 1;
}

int neighbors(int XSIZE, int YSIZE, int a[][YSIZE], int x, int y)
{
    int n = 0;

    int xp1 = x + 1;
    int xm1 = x - 1;
    int yp1 = y + 1;
    int ym1 = y - 1;

    if (onBoard(xm1, y, XSIZE, YSIZE) && a[xm1][y] == ALIVE)
        n++;
    if (onBoard(xm1, yp1, XSIZE, YSIZE) && a[xm1][yp1] == ALIVE)
        n++;
    if (onBoard(x, yp1, XSIZE, YSIZE) && a[x][yp1] == ALIVE)
        n++;
    if (onBoard(xp1, yp1, XSIZE, YSIZE) && a[xp1][yp1] == ALIVE)
        n++;
    if (onBoard(xp1, y, XSIZE, YSIZE) && a[xp1][y] == ALIVE)
        n++;
    if (onBoard(xp1, ym1, XSIZE, YSIZE) && a[xp1][ym1] == ALIVE)
        n++;
    if (onBoard(x, ym1, XSIZE, YSIZE) && a[x][ym1] == ALIVE)
        n++;
    if (onBoard(xm1, ym1, XSIZE, YSIZE) && a[xm1][ym1] == ALIVE)
        n++;

    return n;
}

void printBoard(int XSIZE, int YSIZE, int a[][YSIZE])
{
    /* write this fragment */
    for (int i = 0; i < YSIZE; i++)
    {
        for (int j = 0; j < XSIZE; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}