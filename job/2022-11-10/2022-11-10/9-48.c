#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	puts("please input some number");
	scanf("%d", &a);

	for (c = 1; c < a; a %= 10)
		printf("%d", c++);

	return 0;
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//	int a =0;
	//int b,retry=1;
	//int sum = 0;
	///*do
	//{*/
	//	puts("����һ��������");
	//	scanf("%d", &b);
	//	if (b > 0)
	//{	
	//		for (; a <= b; a++)
	//	{
	//		sum += a;
	//	}

	//	printf("һ��������������ĺ�Ϊ%d", sum);
	//}
	//	else
	//		puts("����������");

	///*puts("again? y_--1,n--0");
	//
	//scanf("%d", &retry);*/
	//
	////} while (retry == 1);
	//
	//puts("��л����");
	//
	//return 0;
