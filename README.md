# Endian
About Big-Endian and Little-Endian
## Functions
```
uint16_t bigEndian16(uint16_t buffer);
uint32_t bigEndian32(uint32_t buffer);
uint64_t bigEndian64(uint64_t buffer);

uint16_t littleEndian16(uint16_t buffer);
uint32_t littleEndian32(uint32_t buffer);
uint64_t littleEndian64(uint64_t buffer);
```
Functions bigEndianXX() can convert a host endian integer to a Big-Endian integer.  
Functions bigEndianXX() can convert a Big-Endian integer to a host endian integer.  
Functions littleEndianXX() can convert a host endian integer to a Little-Endian integer.  
Functions littleEndianXX() can convert a Little-Endian integer to a host endian integer.  

## Macro
```
#define bigEndian( X )  (                                      \
                        sizeof( X ) == 2 ? bigEndian16( X ) :  \
                        sizeof( X ) == 4 ? bigEndian32( X ) :  \
                        sizeof( X ) == 8 ? bigEndian64( X ) :  \
                        X )


#define littleEndian( X )  (                                      \
                        sizeof( X ) == 2 ? littleEndian16( X ) :  \
                        sizeof( X ) == 4 ? littleEndian32( X ) :  \
                        sizeof( X ) == 8 ? littleEndian64( X ) :  \
                        X )
```
These two macro get uint16_t uint32_t or uint64_t parameter and return uint64_t.

## Example
```
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
```
In a Little-Endian computer, this code will print:
```
   big : 0x78563412
little : 0x12345678
   big : 0x12345678
little : 0x12345678
```
In a End-Endian computer, this code will print:
```
   big : 0x12345678
little : 0x78563412
   big : 0x12345678
little : 0x12345678
```