#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum_return(int n1, int n2, int sum, int diff)
{
	sum = n1 + n2;
	diff = (n1 > n2) ? n1 - n2 : n2 - n1;
	printf("%3d%3d\n", sum, diff);
	printf("%p\n", &sum);
}

int main()
{
	int sum = 0;
	int diff = 0;
	int n1, n2;
	puts("input two numbers");
	scanf("%d", &n1);
	scanf("%d", &n2);
	sum_return(n1, n2, sum, diff);
	printf("%p\n", &sum);
	return 0;
}
