#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful"
			   "\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 0;

	while (msg[len] != '\0')
		len++;
	if (write(STDERR_FILENO, msg, len) < 0)
		return (1);
	return (1);
}
