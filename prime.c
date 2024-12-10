//C program to check if number is prime or not

    #include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main() {
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}

bool isPrime(int n) {
    int i;
    
    if (n <= 1) {
        return false;
    }
    
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

