//C program to find LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, i, max, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    for (i = max; ; i += max) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i;
            break;
        }
    }
    
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    
    return 0;
}
