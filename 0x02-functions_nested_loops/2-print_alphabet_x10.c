#include <stdio.h>

int _putchar(char c)
{
    return write(1, &c, 1); // Assuming you're on a Unix-like system
}

void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++)
    {
        char letter = 'a';
        
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        
        _putchar('\n');
    }
}

int main(void)
{
    print_alphabet_x10();
    return 0;
}

