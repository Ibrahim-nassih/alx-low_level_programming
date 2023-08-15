#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/* Print the alphabet using putchar*/
char letter;
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
/* Print a new line*/
    
return (0);
}

