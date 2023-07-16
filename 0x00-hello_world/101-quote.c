#include <unistd.h>

/**
 * main - prints a string to the standard error
 * Return: always return 1
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, err, 59);

	return (1);
}
