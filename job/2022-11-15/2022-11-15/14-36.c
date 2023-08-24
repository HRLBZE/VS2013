#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//用的VS2013
{
	int a, b[10];
	FILE *fp;
	FILE *fq;
	int i, j, c;
	fp = fopen("C:\\Users\\YE\\Desktop\\text.txt", "r");
	fq = fopen("C:\\Users\\YE\\Desktop\\text2.txt", "w");
	for (a = 1; a <= 10; a++)
		fscanf(fp, "%d", &b[a - 1]);

	if (fp == NULL)
	{
		puts("不能打开文件！");
		return 0;
	}

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		if (b[i] > b[j])
		{
			c = b[i];
			b[i] = b[j];
			b[j] = c;
		}
	}
	for (c = 0; c <= 9; c++)
		printf("%4d", b[c]);

	for (a = 1; a <= 10; a++)
		fprintf(fq, "%4d", b[a - 1]);
	fclose(fp, fq);
	return 0;
}
