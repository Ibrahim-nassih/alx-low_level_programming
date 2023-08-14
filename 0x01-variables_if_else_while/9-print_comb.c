#include <stdio.h>

int main() {
    for (int num = 0; num < 10; num++) {
        putchar(num + '0');
        
        if (num != 9) {
            putchar(',');
            putchar(' ');
        }
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

