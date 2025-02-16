#include <stdio.h>
#include <string.h>

void countFrequency(char str[]) {
    int frequency[256] = {0}; // Initialize frequency array for all ASCII characters

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    // Display the frequencies
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    countFrequency(str);

    return 0;
}
