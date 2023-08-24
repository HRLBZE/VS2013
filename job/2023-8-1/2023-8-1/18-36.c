#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void adjust_point(int *a)
{
	if (*a < 100)
		*a = 100;
}

int main()
{
	int a;
	puts("input a number");
	scanf("%d", &a);
	adjust_point(&a);
	puts("adjust the number is");
	printf("%d\n", a);
	return 0;
}