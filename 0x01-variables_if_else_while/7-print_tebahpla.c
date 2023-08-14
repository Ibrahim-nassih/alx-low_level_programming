#include <stdio.h>

int main() {
    // Print the lowercase alphabet in reverse using putchar
    char letter = 'z';
    
    while (letter >= 'a') {
        putchar(letter);
        letter--;
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

