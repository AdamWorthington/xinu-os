#include <xinu.h>
#include <stdio.h>

void lab0app1(){
	kprintf("\n\nlab0app1 process created. Woohoo!\n");
	kprintf("Process ID: %d\n", getpid());
}