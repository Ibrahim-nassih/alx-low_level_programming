#include <stdio.h>

int main() {
    // Print numbers of base 16 (hexadecimal) in lowercase using putchar
    for (int i = 0; i < 10; i++) {
        putchar('0' + i);
    }
    
    for (char ch = 'a'; ch <= 'f'; ch++) {
        putchar(ch);
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

