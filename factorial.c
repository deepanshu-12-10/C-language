//C program to find factorial of a given number
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("The factorial of %d is %llu\n", n, factorial);
    
    return 0;
}
