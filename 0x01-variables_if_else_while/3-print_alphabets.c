#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (successful)
 */
int main(void)
{
	char A;
	char a;

for (A = 'A'; A <= 'Z'; A++)
{
	putchar(A);
}
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
putchar('\n');

return (0);
}
