//C Program to convert a string from lower case to upper case without using predefined function.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("The converted string is: %s\n", str);

    return 0;
}
