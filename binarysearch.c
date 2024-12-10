//C Program to search a number in an array using binary search
#include <stdio.h>
int main() {
    int n, i, num, found = 0, low, high, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array (in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &num);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == num) {
            found = 1;
            printf("%d found at position %d\n", num, mid + 1);
            break;
        }
        else if (arr[mid] < num) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("%d not found in the array\n", num);
    }
    return 0;
}
