//5번 실습

#include <stdio.h>
#include <string.h>
//#include <stdlib.h>     // for _countof

int main(void) {

	FILE* fp;
	char str[100];
	//1. open file
	fp = fopen_s(fp, "sample.txt", "w");
	//2. write file

	for (int i = 0; i < 3; i++) {

		printf("input a world");
		scanf_s("%c", str);//문자배열의 이름은 그 자체가 포인터.

		//파일 내용 쓰기 
		fprintf(fp, "%s\n", str);
	}





	//3. close file
	fclose(fp);

}