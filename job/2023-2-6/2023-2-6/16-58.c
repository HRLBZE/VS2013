#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void A(int *a,int n)
{
	int h = 0;
	for (h = 0; h < n; h++)
	{
		a[h] = h;
	}
	for (h = 0; h < n; h++)
		printf("%d", *(h + a));
	putchar('\n');
}
int main()
{
	int a[8] = {0,2,1,5,6,8,4,5};
	A(a, 8);
	printf("%u", sizeof(a));
	return 0;
}
//#include<stdio.h>
//int main()
//{
//
//	int A[5] = {1,2,3,5,6};
//	int *p = &A[3];
//	printf("%p,%d", A, p[1]);
//	return 0;
//	
//
//}
//#include <stdio.h>
//void sort1(int *a, int *b)
//{
//	int d;
//	if (*a > *b)
//	{
//		d = *a;
//		*a = *b;
//		*b = d;
//	}
//}
//void sort2(int *a, int *b, int *c)
//{
//	sort1(a, b);
//	sort1(b, c);
//	sort1(a, b);
//}
//
//void print(int a, int b, int c)
//{
//	printf("%3d%3d%3d", a, b, c);
//}
//int main()
//{
//	int a, b, c;
//	puts("three numbers you want to input");
//	scanf("%d%d%d", &a, &b, &c);
//	sort2(&a, &b, &c);
//	print(a, b, c);
//	return 0;
//
//}

//#include <stdio.h>
//#define Number 8
//void F(double *A)
//{
//	if (*A <= 0)
//		*A = 0;
//	else
//	{
//		if (*A >= 100)
//			*A = 100;
//	}
//		
//
//}
//int main()
//{
//
//	double c = 0;
//	puts("the number you want to input");
//	scanf("%lf", &c);
//	F(&c);
//	printf("%f", c);
//	/*int x = 7;
//	printf("%d", x);*/
//
//	//int a;
//	//double b;
//	//b = a = 1.5;
//	//printf("%d,%f", a, b);
//
//	//int i;
//	//int b = 0;
//	//int A[Number];
//	//for (i = 0; i < 8; i++)
//	//{
//	//	printf("input A[%d]'s number\n", i);
//	//	scanf("%d", &A[i]);
//	//}
//	//for (i=0; i < 4;i++)
//	//{
//	//	b = A[i];
//	//	A[i] = A[7 - i];
//	//	A[7 - i] = b;
//	//}
//	//puts("µ¹ÐòÅÅÁÐºó");
//	//for (i = 0; i < 8; i++)
//	//{
//	//	printf("%d", A[i]);
//	//}
//	return 0;
//
//}
