#include <stdio.h>

int main() {
    // Print the alphabet using putchar
    char letter = 'a';
    
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

