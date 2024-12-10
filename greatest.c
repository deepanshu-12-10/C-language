//C program to find greatest of three numbers
#include <stdio.h>
int main() {
    int num1, num2, num3, greatest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    greatest = num1;
    if (num2 > greatest) {
        greatest = num2;
    }
    
    
    if (num3 > greatest) {
        greatest = num3;
    }
    
    printf("The greatest number is %d", greatest);
    
    return 0;
}
