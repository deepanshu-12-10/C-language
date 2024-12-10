//C program to find first and last digit of a number
#include <stdio.h>

int main() {
    int num, first, last;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    first = num;
    while (first >= 10) {
        first /= 10;
    }
    last = num % 10;
    
    printf("First digit: %d\n", first);
    printf("Last digit: %d\n", last);
    
    return 0;
}
