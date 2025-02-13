#include <stdio.h>
#include <ctype.h>

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    toUppercase(str);

    printf("String in uppercase: %s\n", str);

    return 0;
}
