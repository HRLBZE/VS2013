#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, ch;
	int cnt[3] = { 0 };
	while ((ch = getchar()) != EOF)
	{
		switch (ch)
		{
		case '0':cnt[0]++; break;
		case '1':cnt[1]++; break;
		case 2:cnt[2]++; break;
		}
	}
		for (i = 0; i < 3; i++)
			printf("%4d", cnt[i]);
		return 0;
}















//int gcd(int x, int y)
//{
//	if (x > y)
//	{
//		if (x%y == 0)
//			return y;
//		else
//			gcd(x%y, y);
//	}
//	else
//	if (y%x == 0)
//		return x;
//	else
//		gcd(x, y%x);
//}

//int x, y;
	//puts("输入x,y");
	//x = getchar();
	////scanf("%d%d", &x, &y);
	////printf("%d", gcd(x, y));
	//return 0;
//}

//int conbinate(int r, int n )
//{
//	if (n == r)
//		return 1;
//	else
//	if (r == 0)
//		return 1;
//	else 
//	if (n == 1)
//		return r;
//	else
//		return (conbinate((r - 1), (n-1)) + conbinate((r),(n - 1)));
//}
//
//int main()
//{
//	int r;
//	int n;
//	puts("输入r和n");
//	scanf("%d%d", &r,&n);
//	printf("%d", conbinate(r, n));
//	return 0; 
//}

//int main()
//{
//	int a;
//	int b=1;
//	puts("输入一个整数");
//	scanf("%d", &a);
//	for (; a > 0; a--)
//	{
//		b *= a;
//	}
//	printf("%d", b);
//	return 0;
//}