#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;
/* Seed the random number generator with the current time*/
srand(time(NULL));
/* Generate a random number and store it in the variable 'n'*/
n = rand();
/* Get the last digit of the number*/
lastDigit = n % 10;
/* Print the last digit*/
printf("Last digit of %d is %d",n, lastDigit);
/* Check the value of the last digit and print the appropriate message*/
if (lastDigit > 5)
{
printf(" and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}

