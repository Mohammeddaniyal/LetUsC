#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] < str2[i]) ? -1 : 1;
        }
        i++;
    }

    // Check if strings are of different lengths
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;  // Strings are equal
    }
    return (str1[i] == '\0') ? -1 : 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = compareStrings(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("The first string is lexicographically smaller.\n");
    else
        printf("The first string is lexicographically greater.\n");

    return 0;
}
