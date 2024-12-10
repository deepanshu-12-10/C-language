//C program to swap first and last digit of a number
#include <stdio.h>

int main() {
    int num, temp, digits, first, last, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);
    digits = 0;
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    first = num / (int) pow(10, digits - 1);
    last = num % 10;
    swapped = last * (int) pow(10, digits - 1) + num % ((int) pow(10, digits - 1));
    swapped /= 10;
    swapped = swapped * 10 + first;
    
    printf("Number with first and last digits swapped: %d\n", swapped);
    
    return 0;
}
