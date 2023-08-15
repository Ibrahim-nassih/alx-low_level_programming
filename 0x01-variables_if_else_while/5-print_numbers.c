#include <stdio.h>
/**
 * main - Print single digit numbers from 0 to 9 using putchar
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
/* Print single digit numbers from 0 to 9 using putchar*/
char digit;
digit = '0';    
while (digit <= '9')
{
putchar(digit);
digit++;
}
putchar('\n');
return (0);
}

