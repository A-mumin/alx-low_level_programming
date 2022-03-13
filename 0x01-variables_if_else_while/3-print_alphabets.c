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

for (A = 'a'; A <= 'z'; A++)
{
	putchar(A);
}
for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);
}
putchar('\n');

return (0);
}
