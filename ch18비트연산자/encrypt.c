#include <stdio.h>
#include <stdlib.h>

int encrypt()
{
	int a = 0x12345678;
	int xor = 0x3a287cd9;

	int secret = _rotl(a ^ xor, 13);
	printf("암호화한 값 = %x\n", secret);
	int original = _rotr(secret, 13) ^ xor;
	printf("복원한 값 = %x\n", original);
    return 0;
}