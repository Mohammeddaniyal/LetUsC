#include <stdio.h>
#include <string.h>

char mostFrequentChar(char str[]) {
    int freq[256] = {0};  // Array to store character frequency
    int maxFreq = 0;
    char mostFrequent = '\0';

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > maxFreq) {
            maxFreq = freq[(unsigned char)str[i]];
            mostFrequent = str[i];
        }
    }

    return mostFrequent;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = mostFrequentChar(str);

    if (result != '\0')
        printf("Most frequent character: %c\n", result);
    else
        printf("No character found.\n");

    return 0;
}
