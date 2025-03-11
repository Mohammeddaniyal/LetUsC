#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char str[]) {
    int newWord = 1; // Flag to check if we are at the start of a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            newWord = 1; // Next character will be the start of a word
        } else if (newWord) {
            str[i] = toupper(str[i]); // Capitalize the first letter
            newWord = 0; // Reset the flag
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reads a full line including spaces

    capitalizeWords(str);

    printf("Capitalized string: %s\n", str);

    return 0;
}
