#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int i, j;
//	int a[4][3];
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", a[i][j]);
//		/*	scanf("%d", b[i][j]);*/
//		}
//	}
//	return 0;
//}




int A(int a[4][3], int b[3][4], int c[3][3])
{
	int i,j,k=0;
	for (j = 0; j < 3; j++)
	{
		
		for (k = 0; k < 3;k++)
		{
			for (i = 0; i < 4; i++)
			{
				c[j][k] += b[j][i] * a[i][j];

			}
		}
	}
}
//int input(int a[4][3],int b[3][4])
//{
//	int i, j;
//	puts("4-3line");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%4d", &a[j][i]);
//			scanf("%4d", &b[i][j]);
//		}
//	}
//
//}



int main()
{
	int i, j;
	int a[4][3];
	int b[3][4];
	int c[3][3] = { 0 };
	puts("input");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&a[j][i]);
			scanf("%d",&b[i][j]);
		}
	}

		A(a, b, c);
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%4d", c[i][j]);
			}
			putchar('\n');
		}
		return 0;
	}



//#define NUMBER 5
//
//int A(int a[], int h)
//{
//	int b;
//	int w = 0;
//	for (b = 0; b < NUMBER; b++)
//	{
//		if (a[b] == h)
//		{
//			w++;
//		}
//	}
//	return w;
//}
//
//int  main()
//{
//	int a[NUMBER];
//	int b, c;
//	puts("input 5 number");
//	for (b = 0; b < NUMBER;b++)
//	{
//		scanf("%d", &a[b]);
//	}
//
//	puts("input the number you want");
//	scanf("%d", &c);
//
//	printf("there are %d number like the number you input", A(a, c));
//	
//	return 0;
//}