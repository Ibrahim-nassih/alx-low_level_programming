#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Determines if number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Print the generated number */
printf("%d ", n);
/* Check whether the number is positive, zero, or negative */
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}

