#include <stdio.h>
#include <stdlib.h> 

unsigned int _rotl(unsigned int value, int shift) { 
    if ((shift &= 31) == 0) return value;
    return (value << shift) | (value >> (32 - shift));
 }
unsigned int _rotr(unsigned int value, int shift) {
     if ((shift &= 31) == 0) return value; 
     return (value >> shift) | (value << (32 - shift));
}


int rotate()
{
	unsigned value = 0x12345678;
	printf("value = %x\n", value);
	printf("rot 4 = %x\n", _rotr(value, 4));
	printf("rot 8 = %x\n", _rotr(value, 8));
	printf("rot 16 = %x\n", _rotr(value, 16));
	return 0;
}