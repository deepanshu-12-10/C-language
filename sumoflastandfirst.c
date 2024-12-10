// C program to find sum of first and last digit of a number
#include <stdio.h>

int main() {
    int num, first, last, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    first = num;
    while (first >= 10) {
        first /= 10;
    }
    
    last = num % 10;
    
    sum = first + last;
    
    printf("Sum of first and last digit: %d\n", sum);
    
    return 0;
}
