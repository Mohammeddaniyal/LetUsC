#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char str[], int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf("%s", str);

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
