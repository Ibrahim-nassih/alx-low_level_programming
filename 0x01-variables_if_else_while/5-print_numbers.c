#include <stdio.h>

int main() {
    // Print single digit numbers from 0 to 9 using putchar
    char digit = '0';
    
    while (digit <= '9') {
        putchar(digit);
        digit++;
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

