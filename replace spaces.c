#include <stdio.h>

void replaceSpaces(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Reads full line including spaces

    replaceSpaces(str);

    printf("Modified string: %s\n", str);

    return 0;
}
