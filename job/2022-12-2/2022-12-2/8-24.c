#define _CRT_SECURE_NO_WARNINGS
#define NUMBER 5
#define FAIL
int A(int a[], int b[], int key, int n)
{
	int c = 0;
	int d = 0;
	for (; c < NUMBER; c++)
	{
		if (a[c] == key)
		{
			b[c] = c;
			d++;
		}
	}
	if (d == 0)
		return FAIL;
	else
		return;

}



int main()
{
	int a[NUMBER];
	int H[NUMBER];
	int b = 0;
	int l = 3;

	puts("input the number you want to input");
	for (b = 0; b < NUMBER; b++)
		scanf("%d", a[b]);

	printf("与所给值相同的是：\n");
	for (b = 0; b < NUMBER; b++)

		printf("有%d个值相同", A(a, H, l, NUMBER));

		


}