void printTwoDigitNumber(int num) {
    putchar('0' + num / 10);
    putchar('0' + num % 10);
}

int main() {
    for (int i = 0; i <= 99; i++) {
        for (int j = i; j <= 99; j++) {
            printTwoDigitNumber(i);
            putchar(' ');
            printTwoDigitNumber(j);
            if (j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    return 0;
}

