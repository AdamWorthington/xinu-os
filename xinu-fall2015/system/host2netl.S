/* host2netl.s - host2netl (x86) */

/*------------------------------------------------------------------------
 * host2netl  -  Swaps longs from big indian to little endian
 *------------------------------------------------------------------------
 */

		.text
		.globl	host2netl		
host2netl:
		pushl	%ebp		/* Push ebp onto stack		*/
		movl	%esp, %ebp	/* Record current SP in ebp	*/
		movl	8(%ebp), %eax	/* Gets long value from args and moves into register eax*/
		bswap 	%eax
		leave
		ret