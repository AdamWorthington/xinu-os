#include <xinu.h>
#include <stdio.h>

void printnoloop(char val){

	kprintf("%c\n", val);
	kprintf("Stack depth: %d\n", stackdepth());
	sleepms(10000);

}