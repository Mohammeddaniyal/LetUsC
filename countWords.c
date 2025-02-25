#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char str[]) {
    int count = 0, inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;  // Outside a word
        } else if (inWord == 0) {
            inWord = 1;  // Start of a new word
            count++;
        }
    }
    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // Reads full line including spaces

    printf("Number of words: %d\n", countWords(str));

    return 0;
}
