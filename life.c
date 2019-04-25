//life_driver.c
//
//Life Driver program
//Roger Priebe 9/5/2018
//EE 312


/* Student information for project:
 *
 * Replace Mrugank with your name.
 *
 * On my honor, Mrugank, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Mrugank Parab
 * email address: parab.mrugank@gmail.com
 * UTEID: mp44675
 * Section 5 digit ID: 15975
 *
 */

//This file is a driver program for the life.c module.
//This program must work with your implementations life.h and life.c
//Do not change the function definitions for populateWorld, showWorld or
//iterateGeneration.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "life.h"

void populateWorld(char fname[], char *grid[], int *numRows, int *numCols){
	char f[BUFSIZ];
	int counter = 0, rowsNum = 0;
	FILE *fp = fopen("world.txt","r");
	if(fp == NULL){
		printf("nah b\n");
		exit(-1);
	}else{
		while(fgets(f, sizeof(f), fp)){
			grid[rowsNum] = (char *) malloc(strlen(f));
			*(grid+rowsNum) = strcpy(*(grid+rowsNum),f);
			rowsNum++;
		}
	*numCols = strlen(f) - 1;
	*numRows = rowsNum;
	}			
}

void showWorld(char *grid[], int numRows, int numCols){
	for(int i = 0; i < numRows; i++){
		for(int j = 0; j < numCols; j++){
			if(*(grid[i] + j) == 0x31){
				printf("*");
			}
			if(*(grid[i] + j) == 0x30){
				printf(".");
			}
		}
		printf("\n");
	}
}

void iterateGeneration(char *grid[], int numRows, int numCols){


}
