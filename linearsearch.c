// C Program to search a number in an array using linear search
#include <stdio.h>
int main() {
    int n, i, num, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            printf("%d found at position %d\n", num, i + 1);
            break;
        }
    }
    if (!found) {
        printf("%d not found in the array\n", num);
    }
    return 0;
}
