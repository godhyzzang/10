//6�� �ǽ�
#include <stdio.h>

int  main(void) {
	FILE* fp = NULL;
	char c;
	fp = fopen_s(&fp, "sample.txt", "r");
	//FILE** �� FILE*�� �ٸ�

	if (fp == NULL)
		printf("������ ������\n");
	while ((c = fgetc(fp)) != EOF) //�ѱ��� ������ �������� �ƴϸ�
		putchar(c); //�ѱ��� ��� 

	fclose(fp);
	return 0;
}