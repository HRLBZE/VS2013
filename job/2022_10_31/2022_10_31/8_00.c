#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()

{
	int a, b, c,min;

	puts("��������������");

	printf("����a:\n����b:\n����c:\n");

	scanf("%d%d%d", &a, &b, &c);

	min = a;

	if ((b<min) ? b : min)

		min = b;
	if ((c <min)?c:min)
		min = c;

	printf("%d", min);
	
	/*int a;

	puts("����һ������");

	scanf("%d", &a);
	
	if (a >= 0)

		printf("%d", a);

	else

		printf("%d",-a);*/
	
	/*printf("��������������\n");

	scanf("%d%d", &a, &b);

	if (a >= b)

		puts("a����b");

	else
	if (a == b)

		puts("a=b");

	else

		puts("a<b");*/
	
	
	
	
	
	
	/*if (a%b)

		puts("b����a��Լ��");

	else
		puts("b��a��Լ��");
*/
	return 0;

}