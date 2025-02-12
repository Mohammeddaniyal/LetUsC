#include <stdio.h>

void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append the second string to the first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string
}

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
