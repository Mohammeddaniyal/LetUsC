#include <stdio.h>

// Function to count set bits
int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1); // Clears the lowest set bit
        count++;
    }
    return count;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits in %d: %d\n", num, countSetBits(num));

    return 0;
}
