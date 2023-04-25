#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char str[] = "_putchar\n";
	int len = sizeof(str) / sizeof(str[0]) - 1;

	write(1, str, len);
	write(1, "\n", 1);
	return (0);
}
