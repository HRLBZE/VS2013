#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", ++a*++a);
	
	if (a=1)
	{a = 0; };
	else




	return 0;
}
//int main()
//{
//
//	int a;
//	float b=0;
//	for (a = 1; a <= 100; a++)
//	{
//		b += a / 100.0;
//	}
//	printf("%f", b);
//	return 0;
	/*float a;
	float b = 0;
	for (a = 0.0; a <= 1.0; a += 0.01)
		b += a;
		printf("%f\n", b);
	return 0;*/
//}
//int measure(unsigned a)
//{
//	int b=0;
//	for (; a > 0; a>>=1)
//	{
//		if (a & 1U == 1)
//			b++;
//	}
//	return b;
//}
//
//int assume()
//{
//	return measure(~0U);
//}
//
//
//void print(unsigned x, unsigned y, int n)
//{
//	int c=0;
//	int b = 1U;
//	for (; c < n; c++)
//	{
//		x = x ^ (b << (y - 1 - c));
//	}
//	printf("%u", x);
//}
//	
//	/*int i = 0;*/
//	/*for ((i = assume(x) - 1); i >= 0; i--)
//	{
//		putchar((x>>i & 1U) ? '1' : '0');
//
//	}*/
//
////int main()
////{
////	int unsigned x;
////	scanf("%u", &x);
////	printf("%u", x);
////		return 0;
////}
//
//int main()
//{
//		int a,b,c;
//		puts("input a number");
//		scanf("%u", &a);
//		puts("input the number you want to try");
//		scanf("%u", &b);
//		puts("how long the number");
//		scanf("%u", &c);
//		printf("a=");
//		print(a,b,c);
//		return 0;
//}
////int A(unsigned a)
////{
////	int b = 0;
////	while (a)
////	{
////		if (a & 1U)
////			b++;
////		a >>= 1;
////	}
////	return b;
////}
////
////int B()
////{
////	return A(~0U);
////}
////
////void Print(unsigned x)
////{
////	int i;
////	for (i = B(x) - 1; i > 0; i--)
////		putchar(((x >> i) & 1U) ? '1' : '0');
////}
////
////
////
////int main()
////{
////	unsigned a;
////	puts("input a number");
////	scanf("%u", &a);
////	printf("a:"); Print(a);
////	return 0;
////}