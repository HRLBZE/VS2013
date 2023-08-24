#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a(int a[], const b[], int n)
{
	int c;
	for (c = 1; c <= n; c++)
	{
		a[c - 1] = b[n - c];
		
	}
		
}
int main()
{
	int m;
	int c[5] = {0};
	int b[5] = { 9, 8, 7, 6, 5 }; 
	a(c, b, 5);
	printf("倒置为:");
	for (m = 0; m < 5;m++)
	printf("%4d",c[m]);
}

















//#define sum 100
//int min(int a[],int n);
//int main()
//{
//	int a[5] = { 9, 8, 5, 6, 11 };
//	printf("min is %d", min(a,5));
//
//}
//
//int min(const int a[], int n)
//{
//	int b;
//	int min=a[0];
//	for (b = 1; b < n; b++)
//	{
//		if(a[b] < min)
//		{
//			
//			min = a[b];
//		}
//	}
//}
//







//void hello()
//{
//	printf("hello world");
//}
//int main()
//{
//	hello();
//	return 0;
//
//}










//void albert(int n)
//{
//	for (; n > 0; n--)
//		printf("\a");
//}
//
//int main(void)
//
//{
//	int n,b;
//	puts("你想响几次？");
//	scanf("%d", &n);
//	albert(n);
//	return 0;
//
//}




//int sum(int n)
//{
//	int a, b=0;
//	for (a = 1; a <= n; a++)
//		b += a;
//	return b;
//}
//
//int main()
//
//{
//	int a;
//	puts("the number");
//	scanf("%d", &a);
//	printf("1到%d的和为%d", a, sum(a));



//int min (int a, int b)
//{
//	return(a > b) ? b:a;
//}

//int L(int a)
//{
//	int b;
//	b = a*a;
//	return b;
//}
//
//int M(int a)
//{
//	int b;
//	b = L(a)*L(a);
//	return b;
//}
//int main()
//
//{
//	int a,b;
//	puts("输入1个值");
//	scanf("%4d", &a);
//	printf("4方为%d", M(a));











//{	
//	int i, j, k;
//	int a[2][8][3];
//
//	puts("分别输入每个人的三科成绩");
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			for (k = 0; k < 2; k++)
//			{
//				scanf("%d", &a[i][j][k]);
//			}
//		}
//	}
//	
//	
//	
	
	
	
	
	
	
	
	
	/*int a[6][2];
	int i, j;
	int c=0, d=0;
	
	puts("依次输入学生的数学和语文成绩");
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
	
	for (j = 0; j < 2; j++)
	{
		if (j == 0)
		{
			for (i = 0; i < 6; i++)
				c += a[i][j];
		}
		else
		{
			for (i = 0; i < 6; i++)
				d += a[i][j];
		}

	}
		puts("数学总分和平均分为：\n");
			printf("%4d %4d\n", c, c / 6);
	
		puts("语文总分和平均分为：\n");
			printf("%4d %4d\n", d, d / 6);*/

	/*
	int i, j;
	int a[4][3];
	int b[3][4];
	puts("input 4-3的数组数据");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}

	puts("输入3-4的数组数据");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &b[i][j]);
	}

	puts("数组a和数组b相乘结果为");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%4d", a[i][j] * b[j][i]);
		}
		printf("\n");
	}

*/




	//int number;
	//int a, b, c;
	//int arr[sum];
	//int line[11] = {0};
	//
	//puts("how many students do you want to input?");
	//scanf("%d", &number);
	//
	//for (a = 0; a < number; a++)
	//{
	//	puts("input the grades one by one");
	//	scanf("%d", &arr[a]);
	//	line[arr[a] / 10]++;
	//}
	//
	//for (a = 0; a <= 9; a++)
	//{
	//	printf("%4d-%4d:", a*10, a*10 + 9);
	//	for (b = 0; b < line[a]; b++)
	//		putchar('*');
	//	putchar('\n');
	//}
	//printf("  100:");
	//for (a = 0; a < line[10]; a++)
	//{
	//	putchar('*');
	//}

	/*int a, b;
	int number ;
	int c[sum];

	puts("How many students  do you want to enter?");
	scanf("%d", &number);
	for (a = 0; a < number; a++)
	{
		puts("input the data");
		scanf("%d", &c[a]);

	}
	printf("the number is %d\n", number);
	for (b = 1; b <= number; b++)
	{
		printf("%d号：%d\n", b, c[b - 1]);
	}
	printf("{");
	for (b = 1; b <= number; b++)
	{

		printf("%4d", c[b - 1]);

	}
		printf("}");*/
//		return 0;
//	
//
//}