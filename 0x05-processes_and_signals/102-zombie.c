#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * infinite_while - Run forever and return nothing.
  *
  * Return: 0 in the end
  */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
  * main - Entry point of the program.
  *
  * Return: Always 0 (Success).
  */

int main(void)
{
	int child_pss = 0;
	pid_t pid;

	while (child_pss < 5)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
		child_pss++;
	}

	if (pid != 0)
		infinite_while();

	return (0);
}
