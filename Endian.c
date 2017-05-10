/*
	Author : PlanC
	E-mail : hubenchang0515@outlook.com
	Blog   : www.kurukurumi.com
	File   : Endian.c
	Date   : 2017-5-10
*/


#include <stdint.h>
#include "Endian.h"
/* Big-Endlian */
uint16_t bigEndian16(uint16_t buffer)
{
    uint16_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[1] = (uint8_t)( buffer & 0x00ff);
    p[0] = (uint8_t)((buffer & 0xff00) >> 8);
    
    return result;
}

uint32_t bigEndian32(uint32_t buffer)
{
    uint32_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[3] = (uint8_t)( buffer & 0x000000ff);
    p[2] = (uint8_t)((buffer & 0x0000ff00) >> 8);
    p[1] = (uint8_t)((buffer & 0x00ff0000) >> 16);
    p[0] = (uint8_t)((buffer & 0xff000000) >> 24);
    
    return result;
}

uint64_t bigEndian64(uint64_t buffer)
{
    uint64_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[7] = (uint8_t)( buffer & 0x00000000000000ff);
    p[6] = (uint8_t)((buffer & 0x000000000000ff00) >> 8);
    p[5] = (uint8_t)((buffer & 0x0000000000ff0000) >> 16);
    p[4] = (uint8_t)((buffer & 0x00000000ff000000) >> 24);
    p[3] = (uint8_t)((buffer & 0x000000ff00000000) >> 32);
    p[2] = (uint8_t)((buffer & 0x0000ff0000000000) >> 40);
    p[1] = (uint8_t)((buffer & 0x00ff000000000000) >> 48);
    p[0] = (uint8_t)((buffer & 0xff00000000000000) >> 56);
    
    return result;
}



                        



/* Little-Endian */
uint16_t littleEndian16(uint16_t buffer)
{
    uint16_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[0] = (uint8_t)( buffer & 0x00ff);
    p[1] = (uint8_t)((buffer & 0xff00) >> 8);
    
    return result;
}

uint32_t littleEndian32(uint32_t buffer)
{
    uint32_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[0] = (uint8_t)( buffer & 0x000000ff);
    p[1] = (uint8_t)((buffer & 0x0000ff00) >> 8);
    p[2] = (uint8_t)((buffer & 0x00ff0000) >> 16);
    p[3] = (uint8_t)((buffer & 0xff000000) >> 24);
    
    return result;
}

uint64_t littleEndian64(uint64_t buffer)
{
    uint64_t result = 0;
    uint8_t* p = (uint8_t*)& result;
    p[0] = (uint8_t)( buffer & 0x00000000000000ff);
    p[1] = (uint8_t)((buffer & 0x000000000000ff00) >> 8);
    p[2] = (uint8_t)((buffer & 0x0000000000ff0000) >> 16);
    p[3] = (uint8_t)((buffer & 0x00000000ff000000) >> 24);
    p[4] = (uint8_t)((buffer & 0x000000ff00000000) >> 32);
    p[5] = (uint8_t)((buffer & 0x0000ff0000000000) >> 40);
    p[6] = (uint8_t)((buffer & 0x00ff000000000000) >> 48);
    p[7] = (uint8_t)((buffer & 0xff00000000000000) >> 56);
    
    return result;
}



           

