#include <stdio.h>

int main() {
    // Print the alphabet excluding 'q' and 'e' using putchar
    char letter = 'a';
    
    while (letter <= 'z') {
        if (letter != 'q' && letter != 'e') {
            putchar(letter);
        }
        letter++;
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

