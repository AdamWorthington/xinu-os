#include <xinu.h>
#include <stdio.h>

void lab0app2(){
	kprintf("\n3782 times 751 = %ul\n", (3782 * 751));
	kprintf("Process ID: %d\n", getpid());
}