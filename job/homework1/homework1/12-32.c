#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a,b,c,e,f;//aԭ����b������c��ֵ��d����
	int d = 0;
	int H[4];
	puts("������һ��������5λ��������");
	do
	{
		scanf("%d", &a);
		if (a<0 || a>=10000)
		{
			puts("���������������Ҫ��\n����������");
		}
	} while (a<0||a>=10000);

	for (b = 1; b <= a; b*=10)
	{
		d++;
	}
	printf("���������%dλ��\n", d);

	for (b = 1,e=0; b <= a;a/=10,e++)
	{

		H[e] =a%10 ;
	}

	c = d;
	for (; d>0; d--)
	{
		printf("%4d", H[d - 1]);
	}
	putchar('\n');

	for (b = 0; b < c;b++)
	{
		printf("%d", H[b]);
	}
	
		return 0;
}

//
//int main()
//{
//	int a, b;
//	puts("����һ���ɼ�");
//	scanf("%d", &a);
//	switch (a /10)
//	{
//	case 10:printf("A\n");
//	case 9:
//		break;
//	case 8:printf("B\n");
//		break;
//	case 7:printf("C\n");
//		break;
//	case 6:printf("D\n");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:printf("E\n");
//		break;
//
//	}
//	return 0;
//}



	//	int x, y;
	//	printf("enter x:");
	//	scanf("%d", &x);
	//	y = 0;
	//	if (x >= 0)
	//	if (x > 0) y = 1;
	//	else y = -1;
	//	printf("x=%d,y=%d\n", x, y);
	//	return 0;
	//}


//	printf("enter x:");
//	scanf("%d", &x);
//	y = -1;
//	if (x != 0)
//	if (x > 0)
//		y = 1;
//	else
//		y = 0;
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}









//int main()
//{
//	int a, b, c;
//	puts("����һ����");
//	scanf("%d", &a);
//	if (a < 1)
//	{
//		b = a;
//		printf("y=%d", b);
//	}
//	else if (a >= 1 && a < 10)
//	{
//		b = 2*a - 1;
//		printf("y=%d", b);
//
//	}
//	else
//	{
//		b = 3 * a - 11;
//		printf("y=%d", b);
//	}
//	return 0;
//}













//{
//
//	double a;
//	int b = 0;
//	do{
//		puts("����һ��һǧ���ڵ�����");
//		scanf("%lf", &a);
//		if (a > 1000 || a<0)
//		{
//			puts("����Ĳ���1000���ڵ�����");
//		}
//
//	} while (a > 1000||a<0);
//
//	b = sqrt(a);
//
//	printf("%f��ƽ����(ȡ����)Ϊ%d��%d \n",a,b,-b);
//	return 0;
//}
//
//	int a;
//	int retry;
//	do
//	{	
//		puts("input a number");
//		scanf("%d", &a);
//		retry = a*a*a;
//		if (retry>1000)
//	} while (retry > 1000)
//
//
//}