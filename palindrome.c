//C Program to check if a given string is a palindrome or not
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length/2; i++) {
        if (str[i] != str[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
