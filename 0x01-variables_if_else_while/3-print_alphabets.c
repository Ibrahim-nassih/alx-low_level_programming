#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
char uppercase;
/* Print the lowercase alphabet using putchar*/
lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
/* Print the uppercase alphabet using putchar*/
uppercase = 'A';
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}

