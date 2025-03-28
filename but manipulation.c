#include <stdio.h>

int main() {
    unsigned int num = 0b00001100; // 12 in decimal (binary: 00001100)
    unsigned int mask = 0b00000010; // 2 in decimal (binary: 00000010)

    printf("Initial value: %u (Binary: 00001100)\n", num);

    // Set a bit (turn it ON)
    num |= mask; // 00001100 | 00000010 = 00001110 (14 in decimal)
    printf("After setting bit: %u\n", num);

    // Clear a bit (turn it OFF)
    num &= ~mask; // 00001110 & ~(00000010) = 00001100 (back to 12)
    printf("After clearing bit: %u\n", num);

    // Toggle a bit (flip between 1 and 0)
    num ^= mask; // 00001100 ^ 00000010 = 00001110 (14)
    printf("After toggling bit: %u\n", num);

    // Check if a bit is set
    if (num & mask) {
        printf("The bit is set.\n");
    } else {
        printf("The bit is not set.\n");
    }

    return 0;
}
