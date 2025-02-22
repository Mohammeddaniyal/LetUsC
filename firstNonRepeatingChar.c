#include <stdio.h>
#include <string.h>

char firstNonRepeating(char str[]) {
    int freq[256] = {0}; // Array to store character frequency

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    return '\0'; // Return null character if no unique character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = firstNonRepeating(str);

    if (result != '\0')
        printf("First non-repeating character: %c\n", result);
    else
        printf("No unique character found.\n");

    return 0;
}
