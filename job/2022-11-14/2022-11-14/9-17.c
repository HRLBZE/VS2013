#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUMBER 6
int main()
{
	double a;
	int b;
	a = b = 1.5;
	printf("%f        %d", a, b);
	return 0;
}















//{
//	int a[NUMBER];
//	int b, c;
//	printf("输入%d个整数\n", NUMBER);
//	for (b = 0; b < NUMBER; b++)
//	{
//		printf("对a[%d]输入数值：\n", b);
//		scanf("%d", &a[b]);
//	}
//	
//	puts("倒序排列");
//	
//	if (NUMBER % 2 == 0)
//	{
//		for (b = 1; b <(NUMBER / 2); b++)
//		{
//			c = a[b - 1];
//			a[b - 1] = a[NUMBER - b];
//			a[NUMBER - b] = c;
//		}
//		}
//	else
//	{
//		for (b = 1; b <= (((NUMBER - 1) / 2)); b++)
//		{
//			c = a[b - 1];
//			a[b - 1] = a[NUMBER - b];
//			a[NUMBER - b] = c;
//		}
//	}
//		for (c = 0; c < NUMBER; c++)
//			printf("a[%d]是%d\n", c, a[c]);
//		return 0;
//	}


	





















//{
//	int a[3],b[3],c, d;
//	for (c = 0; c < 3; c++)
//		a[c] = c;
//	/*for (c = 0; c < 3; c++)
//		printf("%d", a[c]);*/
//
//	for (c = 0; c < 3; c++)
//		b[2-c] = a[c];
//	for (c = 0; c < 3; c++)
//		printf("%4d %4d\n", a[c], b[c]);
//	return 0;
//}
//


























//{
//	int b;
//	int a[4];
//	for (b = 0; b < 4; b++)
//		a[b] = 4-b;
//	for (b = 0; b < 4; b++)
//		printf("a[%d] is %d\n", b, a[b]);
//	return 0;
//
//}














//	int a, b, c, d;
//	puts("让我们画一个倒金字塔");
//	puts("金字塔的层数为");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		for (c = 1; c < b; c++)
//			putchar(' ');
//		for (d = 1; d <= (a - b) * 2 + 1; d++)
//			printf("%d", b % 10);
//		putchar('\n');
//	}
//	return 0;
//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= (a-b); c++)
			putchar(' ');
		for (d = 1; d <= (b - 1) * 2 + 1; d++)
			putchar('*');
		putchar('\n');

	}
	return 0;
}*/

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//	int a, b, c, d;
//	puts("直角边在右上方的等边三角形");
//	puts("边长为");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		for (c = 1; c < b; c++)
//			putchar(' ');
//			for (d = a - b + 1; 0 < d; d--)
//				putchar('*');
//			putchar('\n');
//		
//	}
//	return 0;
//}















//{
//	int a, b, c, d;
//	puts("输入边长为n的正方形");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		for (c = 1; c <= a; c++)
//			putchar('*');
//		putchar('\n');
//	}
//	return 0;
//}

















//{
//	int a, b, c, d;
//	puts("input 长 高");
//	scanf("%d%d", &a, &b);
//	for (c = 1; c <= b; c++)
//	{
//		putchar('*');
//		for (d = 2; d <= a; d++)
//			putchar('*');
//		putchar('\n');
//	}
//	return 0;
//}

	
	
	
	/*printf(" |");
	for (a = 1; a <= 9; a++)
	printf("%5d", a);
	printf("\n");
	for (a = 1; a <= 9; a++)
		printf("-----");
	putchar('\n');
	
	for (a = 1; a <= 9; a++)
	{
		printf("%d|", a);
		for (b = 1; b <= 9; b++)
			printf("%4d ", a*b);
		printf("\n");
	}
	return 0;


}*/


//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	printf(" |");
//	for (i = 1; i < 10; i++) {
//		printf("%3d", i);
//	}
//	putchar('\n');
//	for (i = 1; i < 30; i++) {
//		putchar('-');
//	}
//	putchar('\n');
//
//
//	for (i = 1; i <= 9; i++) {
//		printf("%d|", i);
//		for (j = 1; j <= 9; j++)
//			printf("%3d", i * j);
//		putchar('\n');
//
//
//	}
//}








//{
//	int a, b, c;
//	puts("input your number");
//	scanf("%d", &a);
//	for (b = 1, c = 0; b <= a; b++)
//	{
//		if (a%b == 0)
//			++c;
//	
//	}
//	printf("%d", c);
//	return 0;
//}
	
	
	
	
	
	
	
	
	
	
	
	
	
	//
	//	int a, b, c;
	//	puts("input a number");
	//	scanf("%d", &a);
	//	for (b = 1, c = 0; c < a; b++, c++)
	//		/*printf("%d", b);*/
	//	if (b <= 9)
	//		printf("%d", b);
	//	else
	//		printf("%d", b -= 10);
	//	return 0;
	//}








//{
//	int a, b, c;
//	puts("a number");
//	scanf("%d", &a);
//	for (b = 1,c=1; b <=a; b++,c++)
//	{
//		if (c <= 5)
//			putchar('*');
//		else
//			printf("\n*", c -= 5);
//	}
//	return 0;
//}