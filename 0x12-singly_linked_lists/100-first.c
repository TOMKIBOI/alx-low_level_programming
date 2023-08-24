#include <stdio.h>


void printMessage(void) __attribute__ ((constructor));

/**
 * printMessage - prints the output message before the main
 * function is xecuted
 */

void printMessage(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
