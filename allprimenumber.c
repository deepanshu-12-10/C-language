//C program to print all prime numbers between 1 to n
#include <stdio.h>
int main() {
    int n, i, j, is_prime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("All prime numbers between 1 and %d:\n", n);
    for (i = 2; i <= n; i++) {
        // Check if i is prime
        is_prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
