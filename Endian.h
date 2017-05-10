/*
	Author : PlanC
	E-mail : hubenchang0515@outlook.com
	Blog   : www.kurukurumi.com
	File   : Endian.h
	Date   : 2017-5-10
*/


#ifndef ENDIAN_H
#define ENDIAN_H

#include <stdint.h>

enum EndianEnum
{
    LITTLE_ENDIAN,
    BIG_ENDIAM,
};

#define currentEndian() (littleEndian16(0xabcd) == 0xabcd ? LITTLE_ENDIAN : BIG_ENDIAM)

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

#ifdef __cplusplus
    extern "C"{
#endif

uint16_t bigEndian16(uint16_t buffer);
uint32_t bigEndian32(uint32_t buffer);
uint64_t bigEndian64(uint64_t buffer);

uint16_t littleEndian16(uint16_t buffer);
uint32_t littleEndian32(uint32_t buffer);
uint64_t littleEndian64(uint64_t buffer);

#ifdef __cplusplus
    }
#endif

#endif // ENDIAN_H
