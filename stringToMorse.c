#include <stdio.h>
#include <string.h>

const char *morseCode[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", 
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", 
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

void convertToMorse(char str[]) {
    printf("Morse Code: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%s ", morseCode[str[i] - 'a']);
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%s ", morseCode[str[i] - 'A']);
        } else if (str[i] == ' ') {
            printf("/ "); // Separator for words
        }
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reads full line including spaces

    convertToMorse(str);

    return 0;
}
