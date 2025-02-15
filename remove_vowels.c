#include <stdio.h>
#include <ctype.h>

void removeVowels(char str[]) {
    int i, j = 0;
    char result[100];

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; // Null-terminate the new string

    // Copy the result back to the original string
    for (i = 0; result[i] != '\0'; i++) {
        str[i] = result[i];
    }
    str[i] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
