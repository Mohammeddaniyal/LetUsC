#include <stdio.h>

// Function to get the value of a bit at a given position
int getBit(int num, int pos) {
    return (num >> pos) & 1;
}

// Function to set a bit at a given position
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit at a given position
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Function to toggle a bit at a given position
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    int num = 42;  // Binary: 101010
    int pos = 3;   // We will manipulate the 3rd bit (counting from 0)

    printf("Original number: %d (Binary: 101010)\n", num);
    printf("Bit at position %d: %d\n", pos, getBit(num, pos));

    num = setBit(num, pos);
    printf("After setting bit %d: %d\n", pos, num);

    num = clearBit(num, pos);
    printf("After clearing bit %d: %d\n", pos, num);

    num = toggleBit(num, pos);
    printf("After toggling bit %d: %d\n", pos, num);

    return 0;
} 
