#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	FILE* fp;
	char c;

	fp = fopen("sample.txt", "r"); //�� ���� �Է��� �־����. ��� 
	if (fp == NULL)
	(
	
		printf("failed to open\n");
		return 0;		
	)
	
	
	while( (c=fetc(fp)) != EOF)
	(
		putchar(c); //�ѱ��� ��� 
	
	)
	
	fclose(fp);
	
	system("PAUSE");
	return 0;
}
