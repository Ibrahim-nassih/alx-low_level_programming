#include <stdio.h>

int main() {
    for (int tens = 0; tens < 10; tens++) {
        for (int ones = tens + 1; ones < 10; ones++) {
            putchar(tens + '0');
            putchar(ones + '0');
            
            if (tens != 8 || ones != 9) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

