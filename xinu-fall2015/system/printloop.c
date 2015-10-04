#include <xinu.h>
#include <stdio.h>

void printloop(char val){

	int INNERB = 1000000;
	int OUTERB = 5;
	int i, j;

	for(i = 0; i < OUTERB; i++){
		printf("%c", val);
		for(j = 0; j < INNERB; j++){

		}
	}

}