#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 14
void main()
{
	int i, j, k, n = 0, a[N][N];  /*定义二维数组a[14][14]*/
	while (n <= 0 || n >= 13){  /*控制打印的行数不要太大，过大会造成显示不规范*/
		printf("请输入要打印的行数：");
		scanf("%d", &n);
	}
	printf("%d行杨辉三角如下：\n", n);
	for (i = 1; i <= n; i++)
		a[i][1] = a[i][i] = 1;  /*两边的数令它为1，因为现在循环从1开始，就认为a[i][1]为第一个数*/
	for (i = 3; i <= n; i++)
	for (j = 2; j <= i - 1; j++)
		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];  /*除两边的数外都等于上两顶数之和*/
	for (i = 1; i <= n; i++){
		for (k = 1; k <= n - i; k++)
			printf("   ");  /*这一行主要是在输出数之前打上空格占位，让输出的数更美观*/
		for (j = 1; j <= i; j++)  /*j<=i的原因是不输出其它的数，只输出我们想要的数*/
			printf("%6d", a[i][j]);

		printf("\n");  /*当一行输出完以后换行继续下一行的输出*/
	}
	printf("\n");
}
//void B(int *A)
//{
//	int i, j;
//	for (i = 0; i < 9; i++)
//		
//
//}
//
//int main()
//{
//	int a[9][9] = { 0 };
//}

//int main()
//{
//	int a;
//	FILE *p;
//	FILE *m;
//	p = fopen("C:\\Users\\YE\\Desktop\\1.txt", "r");
//	m = fopen("C:\\Users\\YE\\Desktop\\2.txt", "w");
//	if (p == NULL || m == NULL)
//	{
//		printf("lose");
//	}
//	else
//	{
//		printf("get");
//		while ((a = fgetc(p)) != EOF)
//		{
//			fputc(a, m);
//		}
//		fclose(m);
//		fclose(p);
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	FILE *p;
//	FILE *m;
//	p = fopen("C:\\Users\\YE\\Desktop\\1.txt", "r");
//	m = fopen("C:\\Users\\YE\\Desktop\\2.txt", "w");
//	if (p == NULL||m==NULL)
//		printf("lose");
//	else
//	{
//		printf("got\n");
//		while ((a = fgetc(p)) != EOF)
//		{
//			fputc(a, m);
//		}
//		fclose(p);
//		fclose(m);
//	}
//	return 0;
//}

/*char A[128];
	scanf("%s", A);*/
//char A[128] = { "你是猪" };
//struct text
//	{
//		int h;
//		int a;
//		int b;
//	};
//int main()
//{
//	struct text A = { 1, 2, 3 };
//	FILE *h;
//	h = fopen("C:\\Users\\YE\\Desktop\\1.txt", "w");
//	fprintf(h, "%d,%d,%d", A.h,A.a,A.b);
//	if (h == NULL)
//		printf("lose");
//	else
//	{
//		printf("get");
//		fclose(h);
//	}
//	return 0;
//}
//#define A128
//struct mea
//{
//	int H;
//	double N;
//	long G;
//};
//struct mea L()
//{
//	struct mea A;
//	int a;
//	double b;
//	long c;
//	puts("input");
//	scanf("%d%lf%ld", &a, &b, &c);
//	A.H = a;
//	A.N = b;
//	A.G = c;
//	return A;
//}
//int main()
//{
//	struct mea B = { 3, 2, 1 };
//	B = L();
//	printf("%d,%lf,%ld", B.H, B.N, B.G);
//	return 0;
//}
//#define A 128
//struct students
//{
//	char name[A];
//	double height;
//	int high;
//	long schols;
//	char adres[A];
//};
//int main()
//{
//	struct students YE = { "YE", 15, 25, 156, "EARTH" };
//	printf("%s,%f,%d,%ld,%s", YE.name, YE.height, YE.high, YE.schols,YE.adres);
//	return 0;
//}
//int main()
//{
//	int i;
//	char a[128];
//	scanf("%s", a);
//	for (i = 0; i < 128; i++)
//	{
//		if (a[i] == '1')
//			break;
//		else if (a[i] == '\0')
//			break;
//	}
//	printf("%d", i+1);
//	return 0;
//	
//}
//#define N 3
//int main()
//{
//	int i;
//	int j = 0;
//	char a[N][128];
//	puts("输入数据");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s", a[i]);
//		if (strcmp(a[i], "1") == 0)
//		{
//			break;
//		}
//		j++;
//	}
//	for (i = 0; i < j; i++)
//		printf("%s", a[i]);
//	return 0;
//}
//int main()
//{
//	char A[] = { "\0" };
//	printf("%s", A);
//	return 0;
//}
//int main()
//{
//	int a, b=0;
//	while ((a = getchar()) != '1')
//	{
//		if (a == '\n')
//		b++;
//	}
//	printf("%d", b);
//		return 0;
//}
//int main()
//{
//	int a;
//	do
//	{
//		scanf("%d", &a);
//
//	} while (a == 1);
//		printf("%d", a);
//	return 0;
//}
//enum month { Zero, One, Two };
//void zero()
//{
//	printf("0");
//}
//void one()
//{
//	printf("1");
//}
//void two()
//{
//	printf("2");
//}
//enum month A()
//{
//	int A;
//	puts("shurushuju");
//	scanf("%d", &A);
//	return A;
//}
//int main()
//{
//	enum month a;
//	switch (a = A())
//	{
//	case Zero :zero(); break;
//	case One:one(); break;
//	case Two:two(); break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int A[5];
//	int i,j,k;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (i = 4; i>0; i--)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (A[j]>A[j + 1])
//			{
//				k = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = k;
//			}
//		}
//	}
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d", A[i]);
//		}
//		return 0;
//	}

//unsigned A(unsigned x, int n,int b)
//{
//	int a = 1;
//	for (; b > 0; b--)
//	{
//		a *= 2;
//	}
//	a -= 1;
//	return x|(a<<=n);
//}
//unsigned B(unsigned x, int c)
//{
//	int a = 1;
//	 return x & ~(a <<= c);
//}
//unsigned C(unsigned x, int b)
//{
//	int a = 1;
//	return x ^ (a <<= b);
//}
//int main()
//{
//	unsigned a = 8;
//	printf("%u",  A(a,1,2));
//	return 0;
//}