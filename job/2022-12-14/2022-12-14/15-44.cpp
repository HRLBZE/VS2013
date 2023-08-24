#define _CRT_SECURE_NO_WARNINGS
#include<graphics.h>
#include<conio.h>
#include<stdio.h>				  //采用的cpp文件，我所用的easyx在c上会报错

int main()
{
	int width=800;
	int height=600;
	int x=50;
	int y=50;
	int radius=50;
	initgraph(width, height);
	fillcircle(x, y, radius);
	_getch();
	
	while (y<(height - radius))
	{
		y = y + 2;
		cleardevice();
		fillcircle(x, y, radius);
		Sleep(30);
	}
	if (y == (height - radius))
	{
		while (x<(width - radius))
		{
			x = x + 2;
			cleardevice();
			fillcircle(x, y, radius);
			Sleep(30);
		}
	}
	if (x == (width - radius))
	{
		while (y > radius)
		{
			y = y - 4;
			cleardevice();
			fillcircle(x, y, radius);
			Sleep(30);
		}
	}
	if (y == radius)
	{
		while (x > radius)
		{
			x = x - 4;
			cleardevice();
			fillcircle(x, y, radius);
			Sleep(30);
		}
	}
	return 0;
}