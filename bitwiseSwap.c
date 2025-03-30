#include <stdio.h>

int main() {
    int a = 5, b = 7; // Example values

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // XOR swapping
    a = a ^ b; // Step 1: a now holds (a ^ b)
    b = a ^ b; // Step 2: b becomes (a ^ b) ^ b = a
    a = a ^ b; // Step 3: a becomes (a ^ b) ^ a = b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
