#include <xinu.h>

void cpuintensive(){

	int LOOP1 = 10;
	int LOOP2 = 10;
	int i = 0;
	int j = 0;
	struct	procent	*prptr = &proctab[currpid];
	for (i=0; i<LOOP1; i++) {
		for (j=0; j<LOOP2; j++) {
    // Insert code that performs memory copy (slow) and/or
    // ALU operations (fast).
    // Note: this loop consumes significant CPU cycles.
		}
		
		kprintf("%d %d %d %d\n", currpid, i, prptr->prcpuused, preempt);
  // Using kprintf print the pid followed the outer loop count i,
  // the process's priority and remaining time slice (preempt).
	}
	kprintf("%d %d\n", currpid, prptr->prcpuused);
// Print the CPU time consumed by the process that is recorded in the
// prcpuused field of the current process's process table entry.

}