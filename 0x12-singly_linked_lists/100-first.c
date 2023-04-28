#include <stdio.h>
/**
 *mystartupFun -Uses the gcc constructor attribute
 *allows it to be executed befor the manin ()
 *
 *
 */
void mystartupFun(void) __attribute__((constructor));

void mystartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
