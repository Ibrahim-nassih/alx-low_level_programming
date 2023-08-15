#include <stdio.h>
/**
 * main - Print the alphabet excluding
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Print the alphabet excluding 'q' and 'e' using putchar*/
char letter;    
while (letter <= 'z')
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
letter++;
}   
putchar('\n');
return (0);
}

