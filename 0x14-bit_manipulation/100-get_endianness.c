#include <stdio.h>

int get_endianness() {
    unsigned int num = 1;
    
    unsigned char *bytePtr = (unsigned char *)&num;
    
    if (*bytePtr == 1) {
        return 1; // Little endian
    } else {
        return 0; // Big endian
    }
}
