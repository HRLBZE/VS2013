#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main()
{
	int a;
	int b = 0;

	do
	{
		int retry = 0;
		puts("����һ��������");
		scanf("%d", &a);
		if (a <=0)
			puts("��������������");
	} while (a <=0);

	printf("%d��λ����:", a);

	while (a>0)
	{
		a /= 10;
		b++;
	}
	printf("%d", b);
	
	/*int a;
	int b = 0;
	puts("����һ������");
	scanf("%d", &a);
	while (b < a)
	{
		putchar('*', b++);
		putchar('\n');
	}*/
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*int a;
	int b = 0;
	int c = 0;
	puts("��������");
	scanf("%d", &a);
	if (a >= 0)
	{
		while (b < a)
		{

			printf("+", b++);
			if (b<a)
			{
				while (b > c)
				{
					printf("-");
					b++;
					c = c + 2;
				}
			}


		}
	}
	else

		printf(" ");
	return 0;
	
	}*/