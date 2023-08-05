#include <stdio.h>

int get_endianness() {
    unsigned int num = 1;
    // Create a pointer to the first byte of num
    unsigned char *bytePtr = (unsigned char *)&num;
    
    // If the first byte (lowest address) is 1, it's little endian
    if (*bytePtr == 1) {
        return 1; // Little endian
    } else {
        return 0; // Big endian
    }
}
