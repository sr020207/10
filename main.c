#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	FILE* fp;
	char c;

	fp = fopen("sample.txt", "r"); //두 가지 입력을 넣어야함. 모드 
	if (fp == NULL)
	(
	
		printf("failed to open\n");
		return 0;		
	)
	
	
	while( (c=fetc(fp)) != EOF)
	(
		putchar(c); //한글자 출력 
	
	)
	
	fclose(fp);
	
	system("PAUSE");
	return 0;
}
