//6번 실습
#include <stdio.h>

int  main(void) {
	FILE* fp = NULL;
	char c;
	fp = fopen_s(&fp, "sample.txt", "r");
	//FILE** 과 FILE*은 다름

	if (fp == NULL)
		printf("파일을 못열음\n");
	while ((c = fgetc(fp)) != EOF) //한글자 읽은게 마지막이 아니면
		putchar(c); //한글자 출력 

	fclose(fp);
	return 0;
}