#include <stdio.h>

int main() {
    // Print the lowercase alphabet using putchar
    char lowercase = 'a';
    
    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }
    
    // Print the uppercase alphabet using putchar
    char uppercase = 'A';
    
    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }
    
    putchar('\n');  // Print a new line
    
    return 0;
}

