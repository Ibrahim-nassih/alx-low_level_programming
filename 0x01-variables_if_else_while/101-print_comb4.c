#include <stdio.h>

int main() {
    for (int hundreds = 0; hundreds < 10; hundreds++) {
        for (int tens = hundreds + 1; tens < 10; tens++) {
            for (int ones = tens + 1; ones < 10; ones++) {
                putchar(hundreds + '0');
                putchar(tens + '0');
                putchar(ones + '0');
                
                if (hundreds != 7 || tens != 8 || ones != 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

