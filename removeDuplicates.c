#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int hash[256] = {0}; // Array to track character occurrences
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (hash[(unsigned char)str[i]] == 0) { 
            hash[(unsigned char)str[i]] = 1; 
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}
