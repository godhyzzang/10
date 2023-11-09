#include <stdio.h>
#include <string.h>
#include <stdlib.h>     // for _countof

int main(void) {
	
	char src[] = "The worst things to eat before you sleep";
	char dst[100];


		strcpy_s(dst, _countof(dst),src); //strcpy_s instead of strcpy

		printf("copied string :%s", dst);
}