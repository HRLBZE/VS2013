#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<graphics.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

IMAGE background;
	
enum{ EMPTY, CC, ZY, HZ, MC, GY, ZF, Z1, Z2, Z3, Z4, Count };
int map[5][4] =
{
	MC, CC, CC, ZY,
	MC, CC, CC, ZY,
	HZ, GY, GY, ZF,
	HZ, Z1, Z2, ZF,
	Z3, EMPTY, EMPTY, Z4
};

IMAGE imgs[11][2]; 

static int SelectRole = EMPTY;

struct direction
{
	int row_shift;
	int col_shift;
}
MOVE_U = { -1, 0 }, MOVE_D = { 1, 0 }, MOVE_L = { 0, -1 }, MOVE_R = { 0, 1 };

struct position
{
	int row;
	int col;
};


void gameInit()
{
	initgraph(625, 855,1);
	loadimage(&background, "photos/background.png");
	char name[64];
	for (int i = 1; i < Count; i++)
	{
		sprintf_s(name, sizeof(name), "photos/%d_0.png", i);
		loadimage(&imgs[i][0], name);
		sprintf_s(name, sizeof(name), "photos/%d_1.png", i);
		loadimage(&imgs[i][1], name);
	}
	mciSendString("play music/BGM.mp3 repeat", 0, 0, 0);
}

void updateWindow()
{
	BeginBatchDraw();
	putimage(0, 0, &background);
	
	for (int i = 0; i < Count; i++)
	{
		for (int row = 0; row < 5; row++)
		{
			for (int col = 0; col < 4; col++)
			{
				if (map[row][col] == i)                            //加五是因为有5像素的分界线
				{
					int x = 5 + col*(150 + 5);
					int y = 5 + row*(150 + 5);

					if (SelectRole == i)
					{
						putimage(x, y, &imgs[i][1]);
					}
					else
					{
						putimage(x, y, &imgs[i][0]);
					}			

					goto NEXT;
				}
			}
		}
	NEXT:
	continue;
	}
	EndBatchDraw();
}

bool cMove(struct direction direct)
{
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			if (map[row][col] == SelectRole)
			{
				if (map[row + direct.row_shift][col + direct.col_shift] != EMPTY &&
					map[row + direct.row_shift][col + direct.col_shift] != SelectRole)
				{
					return false;
				}
			}
		}
	}
	return true;
}

void move(struct direction direction)
{
	if (cMove(direction) == false)
	{
		SelectRole = EMPTY;
		return;
	}
	
	PlaySound("music/move.wav", 0, SND_FILENAME | SND_ASYNC);

	struct position blocks[4];
	int count = 0;
	
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			if (map[row][col] == (int)SelectRole)
			{
				map[row][col] = EMPTY;
				blocks[count].row = row;
				blocks[count].col = col;
				count++;
			}
		}		
	}

	for (int i = 0; i < count; i++)
	{
		int row = blocks[i].row + direction.row_shift;
		int col = blocks[i].col + direction.col_shift;
		map[row][col] = SelectRole;
	}
	SelectRole = EMPTY;
}




void userClick()
{
	ExMessage msg = getmessage();
	if (msg.message == WM_LBUTTONDOWN)
	{
		int row = msg.y / (150 + 5);
		int col = msg.x / (150 + 5);
		printf("%d,%d 人物:%d\n ", row, col, map[row][col]);

			if (SelectRole == EMPTY)                  //一次
			{
				SelectRole = map[row][col];
			}
			else									//二次
			{
				if (map[row][col] != EMPTY)
				{
					SelectRole = map[row][col];
					return;
				}
				if (row - 1 >= 0 && map[row - 1][col] == SelectRole) move(MOVE_D);
				if (row + 1 < 5 && map[row + 1][col] == SelectRole) move(MOVE_U);
				if (col + 1 < 4 && map[row][col + 1] == SelectRole) move(MOVE_L);
				if (col - 1 >= 0 && map[row][col - 1] == SelectRole) move(MOVE_R);
			}
		
		}
	}


int main()
{
	gameInit();
	while (1)
	{
		userClick();
		updateWindow();	
	}
	system("pause");
	return 0;
}