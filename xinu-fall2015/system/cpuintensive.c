#include <xinu.h>
#include <stdio.h>
#include <string.h>
struct {
  //char name[40];
  int age;
} person, person_copy;

void cpuintensive(){

	int LOOP1 = 10;
	int LOOP2 = 10;
	int i = 0;
	int j = 0;
	int k = 0;
	struct	procent	*prptr = &proctab[currpid];
	for (i=0; i<LOOP1; i++) {
		for (j=0; j<LOOP2; j++) {
			person.age = 20;
			for(k = 0; k <= 50; k++){
				memcpy ( &person_copy, &person, sizeof(person) );
			}
		}
		
		kprintf("%d %d %d %d\n", currpid, i, prptr->prcpuused, preempt);
  // Using kprintf print the pid followed the outer loop count i,
  // the process's priority and remaining time slice (preempt).
	}
	kprintf("%d %d\n", currpid, prptr->prcpuused);
// Print the CPU time consumed by the process that is recorded in the
// prcpuused field of the current process's process table entry.

}