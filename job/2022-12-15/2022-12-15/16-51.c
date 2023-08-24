#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void change(char*s, int a)
{
	int i, j;
	char c = { '0'};
	if (a == 1 || a == 0)
		s = s;
	for (i = 0, j = a - 1; j > i; i++, j--)
	{
		c = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = c;
	}

	printf("反转后的字符串为:%s\n", s);
}

int main()
{
	int b;
	char a[128] = { '0' };
	puts("输入字符串");
	scanf("%s", a);
	b = strlen(a);
	change(a, b);
	return 0;
}
//#include<string.h>
//int min(int a, int b, int c)
//{
//	int min = a;
//	if (min > b)
//		min = b;
//	if (min > c)
//		min = c;
//	return min;
//}
//int main()
//{
//	char a1[60] = { '\0' };
//	char a2[60] = { '\0 '};
//	long a[70][70];
//	int i, j, n, m;
//	double k = 0.00;
//	int b1, b2;
//	scanf("%s", a1);
//	scanf("%s", a2);
//	b1 = strlen(a1);
//	b2 = strlen(a2);
//	for (i = 0; i <= b1; i++)
//	{
//		a[i][0] = i;
//	}
//	for (j = 0; j <= b2; j++)
//	{
//		a[0][j] = j;
//	}
//	for (i = 1; i <= b1; i++)
//	{
//		for (j = 1; j <= 12; j++)
//		{
//			if (a1[i - 1] == a2[j - 1])
//				m = 0;
//			else
//				m = 1;
//
//		a[i][j] = min(a[i - 1][j] + 1, a[i][j - 1] + 1, a[i - 1][j - 1] + m);
//		if (i == b1&&j == b2)
//		{
//			n = a[i][j] + 1;
//			k = 1.0 / n;
//			printf("相似度：%f", k);
//		}
//		}
//	}
//	return 0;
//}



//#include<math.h>
//int main()
//{
//	int i=0, j=0, k[10],h[10];
//	int l = 0;
//	int A[10][10] =
//	{
//		{ 12, 10, 24, 17, 29, 19, 52, 68, 90, 75 },
//		{ 11, 21, 21, 12, 45, 67, 89, 10, 89, 46 },
//		{ 13, 15, 32, 22, 25, 27, 80, 93, 97, 70 },
//		{ 37, 42, 14, 70, 5, 3, 2, 29, 70, 87 },
//		{ 19, 20, 40, 21, 34, 18, 32, 12, 42, 16 },
//		{ 16, 17, 56, 70, 16, 1, 2, 67, 57, 21 },
//		{ 56, 47, 39, 60, 22, 33, 60, 1, 72, 31 },
//		{ 67, 9, 36, 67, 43, 38, 20, 11, 77, 42 },
//		{ 75, 8, 16, 45, 34, 2, 15, 52, 80, 53 },
//		{ 49, 36, 39, 21, 45, 7, 8, 60, 63, 61 },
//	};
//	int max[10];
//	int min[10];
//	for (i = 0; i < 10; i++)
//	{
//		max[i] = A[i][0];
//		for (j = 0; j <10; j++)
//		{
//			if (max[i] < A[i][j])
//			{
//				max[i] = A[i][j];
//				k[i] = j;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		min[i] = A[0][i];
//		for (j = 0; j < 10;j++)
//		if (min[i]>A[j][i])
//		{
//			min[i] = A[j][i];
//			h[i] = j;
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (max[i] == min[j])
//				printf("存在鞍点%d，坐标为(%d,%d)", max[i], i+1, j+1);
//			l++;
//		}
//	}
//	if (i == 0)
//		puts("不存在鞍点");
//	return 0;
//	
//}
//{
//	int i, j, k,l;
//	int max,min;
//	int a[4][4];
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{  
//			int n=0, m;
//			max = a[i][0];
//			for (j = 1; j < 4; j++)
//			{
//			
//			if (max< a[i][j])
//			{
//				max = a[i][j];
//				m = j;
//			}
//			else if (max == a[i][j])
//			{
//				n++;
//				m = j;
//			}
//		}
//			if (n)
//			{
//				do
//				{
//					int mn = 1;
//					min = a[i][m-n];
//					for (l = 0; l < 4; l++)
//					{
//						if (min>a[l][m-n])
//					}
//				}
//			}
//	}
	
//	int i, j, k;
//	int n;
//	int a[17][17];
//	puts("请输入杨辉三角的行数：");
//	scanf("%d", &n);
//	for (i = 0; i < 17; i++)
//	{
//		a[i][i] = 1;
//		a[i][0] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		putchar('\n');
//	}
//	return 0;
//}
//void sort(int A[])
//{
//	int i, j, k;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 9; j>i; j--)
//		{
//			if (A[j - 1] > A[j])
//			{
//				k = A[j - 1];
//				A[j - 1] = A[j];
//				A[j] = k;
//			}
//		}
//	}
//}
//int main()
//{
//	int a, c;
//	int b = 0;
//	int A[10] = { 0 };
//	puts("输入10个数字");
//	for (a = 0; a < 10; a++)
//		scanf("%d",&A[a]);
//	sort(A);
//	for (a = 0; a < 10; a++)
//	{
//		printf("%4d", A[a]);
//		b += A[a];
//	}
//	putchar('\n');
//	printf("最大值为%d\n", A[9]);
//	printf("最小值为%d\n", A[0]);
//	printf("平均值为%d\n", b / 10);
//	return 0;
//
//}

//void Sort(int A[])
//{
//	int i, j, k;
//	for (i = 0; i < 19; i++)
//	{
//		for (j = 19; j>i; j--)
//		{
//			if (A[j - 1] > A[j])
//			{
//				k = A[j - 1];
//				A[j - 1] = A[j];
//				A[j] = k;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int b = 0;
//	int c;
//	int d;
//	int A[20] = { 0 };
//	FILE*fp;
//	fp = fopen("C:\\Users\\YE\\Desktop\\TWOMM.DAT.txt", "r");
//	for (c = 0; c < 20; c++)
//	{
//		fscanf(fp, "%d", &A[c]);
//	}
//	if (fp == NULL)
//	{
//		puts("不能打开文件！");
//		
//	}
//	Sort(A);
//	printf("最大的两个值为:%3d%3d\n", A[19], A[18]);
//	printf("最小的两个值为：%3d%3d\n", A[0], A[1]);
//	fclose(fp);
//	return 0;
//}

//void H(int x)
//{
//	switch (x / 10)
//	{
//	case 10:
//	case 9:putchar('A'); break;
//	case 8:putchar('B'); break;
//	case 7:putchar('C'); break;
//	case 6:putchar('D'); break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:putchar('F'); break;
//	}
//}


//{
//	int a = 1;
//	double n;
//	double b, c;
//	double H = 0;
//	puts("输入一个在零和一之间的值");
//	scanf("%lf", &b);
//	puts("输入你想要的幂次数");
//	scanf("%lf", &n);
//
//	c = pow(a + b, n);
//	printf("%.8f", c);
//	return 0;
//}


//	double b[4][3];
//	double N[4];
//	int a ,c,i;
//	double q, w, e;
//	double x;
//	FILE *fp;
//	FILE *fq;
//	fp = fopen("C:\\Users\\YE\\Desktop\\PARA.DAT.txt", "r");
//	fq = fopen("C:\\Users\\YE\\Desktop\\PARA.OUT.txt", "w");
//	for (a = 0; a < 4; a++)
//	{
//		for (c = 0; c < 3;c++)
//			fscanf(fp, "%lf", &b[a][c]);
//	}
//		
//
//	if (fp == NULL)
//	{
//		puts("不能打开文件！");
//		return 0;
//	}
//	for (a = 0; a < 4; a++)
//	{
//		q = b[a][0];
//		w = b[a][1];
//		e = b[a][2];
//		x = -(w / (2*q));
//		N[a] = x*x*q + w*x + e;
//		if (b[a][0]>0)
//		{
//
//			fprintf(fq, "最小值为%f",  N[a]);
//			printf("最小值为%f", N[a]);
//		}
//		else
//		{
//			fprintf(fq, "最大值为%f", N[a]);
//			printf("最大值为%f", N[a]);
//		}
//	}
//
//		
//	fclose(fp, fq);
//	return 0;
//}