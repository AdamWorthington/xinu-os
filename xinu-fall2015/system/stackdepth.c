#include <xinu.h>
#include <stdlib.h>

static unsigned long *top_esp;
static unsigned long *top_ebp; 

int stackdepth(){

	int count = 0;
	struct procent	*proc = &proctab[currpid];
	asm("movl %esp, top_esp");
	asm("movl %ebp, top_ebp");
	unsigned long *sp = top_esp;
	unsigned long *fp = top_ebp;

	//need to print: count value, base pointer, stack pointer, difference between the base and stack pointer, and after the while loop breaks print the current address and the final count.

	while (sp < (unsigned long *)proc->prstkbase) { //loop breaks when stack pointer is equal to the inital stack base pointer

		count++;

		kprintf("Count: %d\n", count); //prints required information
		kprintf("Base Pointer: 0x%X\n", fp);
		kprintf("Stack Pointer: 0x%X\n", sp);
		kprintf("Current stack frame size: %d\n\n", (unsigned long)(fp - sp));

		sp = fp; //sets the stack pointer to skip the middle of the stack frame

		if (*sp == STACKMAGIC){ //same as prstkbase, because they need to print the data but do not want to complete the loop
			break; 
		}

		fp = (unsigned long *) *sp++; //reassigns frame pointer to the return address of the bottom of the current stack frame, moves sp to the end of the next stack frame
	}

	kprintf("Final Address value: 0x%X, final count: %d\n\n", sp, count);

	return count;

}