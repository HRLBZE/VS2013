#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()

{
	int a, b, c,min;

	puts("请输入三个整数");

	printf("整数a:\n整数b:\n整数c:\n");

	scanf("%d%d%d", &a, &b, &c);

	min = a;

	if ((b<min) ? b : min)

		min = b;
	if ((c <min)?c:min)
		min = c;

	printf("%d", min);
	
	/*int a;

	puts("输入一个整数");

	scanf("%d", &a);
	
	if (a >= 0)

		printf("%d", a);

	else

		printf("%d",-a);*/
	
	/*printf("请输入两个整数\n");

	scanf("%d%d", &a, &b);

	if (a >= b)

		puts("a大于b");

	else
	if (a == b)

		puts("a=b");

	else

		puts("a<b");*/
	
	
	
	
	
	
	/*if (a%b)

		puts("b不是a的约数");

	else
		puts("b是a的约数");
*/
	return 0;

}