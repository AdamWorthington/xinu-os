#include <xinu.h>
#include <stdio.h>
#include <stdlib.h>

void printsegaddress()
{
	printf("\ntext start: 0x%X\ntext end: 0x%X\ntext length: %d\ndata start: 0x%X\ndata end: 0x%X\ndata length: %d\nbss start: 0x%X\nbss end: 0x%X\nbss length: %d\n", &text, &etext, (&etext - &text), &data, &edata, (&edata - &data), &bss, &ebss, (&ebss - &bss));
	printf("\ntext val: 0x%08x\ndata val: 0x%08x\nbss val: 0x%08x\n", etext, edata, ebss);
}