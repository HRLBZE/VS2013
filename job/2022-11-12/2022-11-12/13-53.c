#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,c;
	puts("input a number");
	scanf("%d", &a);
	for (b = 1, c = 0; c < a; b++, c++)
		/*printf("%d", b);*/
		if (b <= 9)
		printf("%d", b);
	else
		printf("%d", b -= 10);
	return 0;
}