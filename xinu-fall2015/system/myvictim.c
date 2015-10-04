#include <xinu.h>
#include <stdio.h>

void myvictim(void){
	int u = 9;
	int p = u * 4;
	u++;
	dostuff();
	
}

void dostuff(void){
	int x = 3; 
	int y = x * 2;
	x++;
	sleep2ms();
}
void sleep2ms(void){
	int x = 43 - 2;
	int y = 90;
	x = x + y;
	y++;
	
	//stacktrace(currpid);
	sleepms(2000);
}