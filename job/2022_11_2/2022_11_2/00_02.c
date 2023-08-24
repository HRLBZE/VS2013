#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,c;
	int b = 0;
	puts("输入一个整数值");
	scanf("%d", &a);
	if (a > 0)
	
		while (b <= a)
		{
			putchar('+');
			c = ++b;
			if (c > b)
			{
				putchar('-');
				b = b + 2;
			}
		}
	else
	if (a == 0)
		putchar('\n');
	
	return 0;

	

}