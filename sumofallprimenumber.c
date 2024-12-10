// C program to find sum of all prime numbers between 1 to n
#include <stdio.h>
int main() {
    int n, i, j, is_prime, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        
        is_prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            sum += i;
        }
    }
    printf("The sum of all prime numbers between 1 and %d is %d\n", n, sum);
    return 0;
}
