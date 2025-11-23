#include <stdio.h>
#include <stdint.h> // For uint16_t (16-bit integer)

struct PackedData
{
    // First 16-bit word:
    uint16_t a : 6; // 'a' uses 6 bits
    uint16_t : 0;   // Force 'b' to the next word!

    // Second 16-bit word:
    uint16_t b : 6; // 'b' uses 6 bits
    uint16_t : 10;  // 10 unused bits (padding)

    // Third 16-bit word (may span into a fourth word):
    uint16_t c : 9; // 'c' uses 9 bits
    uint16_t d : 7; // 'd' uses 7 bits
};

int main()
{
    printf("Size of struct: %zu bytes\n", sizeof(struct PackedData));
    return 0;
}