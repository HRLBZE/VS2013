#define _CRT_SECURE_NO_WARNINGS


//int main()
//{
//	int b = 0;
//	static double a[10];
//	for (b = 0; b < 10; b++)
//	{
//		printf("%4d", a[b]);
//	}
//	return 0;
//}

//int x = 1;
//int main()
//{
//	void P();
//	void P();
//	return 0;
//}


//void P()
//{
//	static int a;
//	auto int b;
//	printf("%d",a++);
//	printf("%d", b++);
//}


//#define NUMBER 10
//void COMPARE();
//int main()
//{
//	int a[NUMBER];
//	int b;
//	int c[10];
//	puts("输入10个数");
//	for (b = 0; b < NUMBER; b++)
//	{
//		scanf("%d", &a[b]);
//	}
//
//	COMPARE(a,c);
//	puts("顺序排列为:");
//	for (b = 0; b < NUMBER; b++)
//	{
//		printf("%d", a[b]);
//	}
//	return 0;
//}
//
//void COMPARE(int a[], int b[])
//{
//	int c;
//	int i,j;
//	for (i = 0; i < NUMBER; i++)
//	{
//		for (j =i+1; j < NUMBER;j++)
//		if (a[i]>a[j])
//		{
//			c = a[j];
//			a[j] = a[i];
//			a[i] = c;
//		}
//	}
//	for (c = 0; c < NUMBER; c++)
//	{
//		b[c] = a[c];
//	}
//}
//

//int COMPARE();
//int main()
//{
//	int b = 0;
//	int a[10];
//	int c[10] = { 0 };
//	puts("输入10个数");
//	for (; b < 10; b++)
//		scanf("%d", &a[b]);
//	COMPARE(a, c,b);
//
//	puts("重排后的结果为：\n");
//	for (; b < 10; b++)
//		printf("%4d", a[b]);
//}
//
//int COMPARE(int a[],int b[], int c)
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (a[i]>a[j])
//			{
//				c = a[j];
//				a[j] = a[i];
//				a[i] = c;
//			}
//		}
//	}
//	for (i = 0; j < 10; j++)
//	{
//		b[i] = a[i];
//	}
//
//}

//int A(int a, int b)
//{
//	int c = 0;
//	c = a + b;
//	return c;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	for (; a + b > 0; c = b, b = A(a, b), a = c)
//	printf("%4d\n", a);
//
//	return 0;
//}

//int change(int a, int b)
//{
//	a = b;
//	return a;
//}
//
//int main()
//{
//	int a, b;
//	puts("输入两个数a，b：");
//	scanf("%d%d", &a, &b);
//	puts("交换后");
//	printf("a=%d\nb=%d\n", change(a, b),change(b,a));
//}

//int MAX(int a, int b, int c)   
//{
//	int max = a;
//	if (b > max)
//		max = b;
//	if (c > max)
//		max = c;
//	return max;
//}
//int main()
//{
//	int a, b, c;
//	puts("输入三个数");
//	scanf("%4d %4d %4d", &a, &b, &c);
//	printf("其中最大的是%d", MAX(a, b, c));
//	return 0;
//}