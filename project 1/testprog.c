#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
	long int s = syscall(332);
	printf(¡°System call sys_hello returned %ld\n¡±, s);
	return 0;
}
