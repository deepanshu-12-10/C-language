//C program to find HCF (GCD) of two numbers
#include <stdio.h>

int main() {
    int num1, num2, i, gcd;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    
    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, gcd);
    
    return 0;
}
