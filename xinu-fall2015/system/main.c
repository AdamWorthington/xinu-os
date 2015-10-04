/*  main.c  - main */

#include <xinu.h>
#include <stdio.h>

int myvictimglobal = 0;


process	main(void)
{


	int victim = create((void *)myvictim, 4096, 20, "myvictim", 0, NULL);
	int attacker = create((void *)myattacker, 4096, 20, "myattacker", 0, NULL);
	resume(victim);
	resume(attacker);

	

	recvclr();
	resume(create(shell, 8192, 50, "shell", 1, CONSOLE));
	while (TRUE) {
		receive();
		sleepms(200);
		kprintf("\n\nMain process recreating shell\n\n");
		resume(create(shell, 4096, 20, "shell", 1, CONSOLE));
	}
	return OK;




		/*
	//
	//sleepms(200);
	//resume (create((void *)stackdepth, 65536, 20, "stackdepth", 0, NULL));
	//stackdepth();
	//sleepms(200);
	//long p = 20; 
	//printf("%08X\n", p);
	//printf("%08X\n", host2netl(p));
	//printsegaddress();
	//stackdepth();

	int A = create((void *)printnoloop, 1024, 24, "A", 1, 'A');
	int B = create((void *)printnoloop, 1024, 23, "B", 1, 'B');
	int C = create((void *)printnoloop, 1024, 22, "C", 1, 'C');
	int D = create((void *)printnoloop, 1024, 21, "D", 1, 'D');

	//kprintf("\n______________________\n\n");
	//sleepms(200);
	resume(A);
	//sleepms(200);
	//printsegaddress();
	//sleepms(200);
	//kprintf("\n______________________\n\n");
	//sleepms(200);
	resume(B);
	//sleepms(200);
	//printsegaddress();
	//sleepms(200);
	//kprintf("\n______________________\n\n");
	//sleepms(200);
	resume(C);
	//sleepms(200);
	//printsegaddress();
	//sleepms(200);
	//kprintf("\n______________________\n\n");
	//sleepms(200);
	resume(D);
	//sleepms(200);
	//printsegaddress();
	//sleepms(200);
	//kprintf("\n______________________\n\n");
	stackdepth();
	//sleepms(200);
	//kprintf("\n______________________\n\n");
	//sleepms(200);
	printsegaddress();
	sleepms(10000);
	*/
	/* Wait for shell to exit and recreate it */
}
