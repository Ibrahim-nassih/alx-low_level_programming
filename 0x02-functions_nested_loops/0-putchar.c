#include <stdio.h>

int _putchar(char c)
{
    return write(1, &c, 1); // Assuming you're on a Unix-like system
}

int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return 0;
}

