#include "Endian.h"         
#include <stdio.h>
#include <stdint.h>
             
int main()
{
    // Store a number by Big-Endian.
    uint16_t big = bigEndian((uint16_t)0x1234);
    // Store a number by Little-Endian.
    uint16_t little = littleEndian((uint16_t)0x1234);
    
    // Print two number by host's Endian
    printf("   big : 0x%x\n",big);
    printf("little : 0x%x\n",little);
    
    // Print two number by correct Endian
    printf("   big : 0x%lx\n",bigEndian(big));
    printf("little : 0x%lx\n",littleEndian(little));
}
