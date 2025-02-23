#include <stdio.h>
#include <string.h>

void swapFirstLast(char str[]) {
    int length = strlen(str);
    if (length > 1) { // Ensure the string has at least two characters
        char temp = str[0];
        str[0] = str[length - 1];
        str[length - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    swapFirstLast(str);

    printf("String after swapping first and last character: %s\n", str);

    return 0;
}
