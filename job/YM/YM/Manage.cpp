#include<conio.h>
#include "Manage.h"
#include<iostream>
#include<graphics.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;

Manage::Manage()
{
	::loadimage(&m_bk, "pictures/drawback.png", Window::width(), Window::height()); //加载图片
	menu_btns.push_back(new PushBotton("play"));
	menu_btns.push_back(new PushBotton("quit"));           //按钮初始化       
	for (int i = 0; i < menu_btns.size(); i++)             
	{
		menu_btns[i]->setFixedside(250, 50);                          //按钮大小x
		int bx = (Window::width() - menu_btns[i] -> width()) / 2;		//窗口位置确定
		int vspace = (Window::height() - menu_btns.size()*menu_btns[i]->height()) / 2;   //高度确定
		int by =vspace+ i*menu_btns[i]->height();                      //y
		menu_btns[i]->move(bx,by);								//窗口中间
	}
}
void Manage::run()
{
	int op = Menu;                       //获取菜单返回
	Window::beginDraw();
	while (true)
	{
		Window::clear();
		drawBackground();
		if (Window::hasMsg())
		{
			m_msg=Window::getMsg();
			switch (m_msg.message)
			{
			case WM_KEYDOWN://按键按下
				//ESC退出操作，返回主页面
				if (m_msg.vkcode == VK_ESCAPE)
				{
					op = Menu;
				}
				break;
			default:                    //鼠标操作
				break;
			}
		}
	
		switch (op)             
		{
		case Menu:
			op = menu();
			break;
		case Manage::Play:
			play(); 
			break;
		case Manage::Quit:
			quit();                                //不同选择不同函数 
			break;
		default:
			exit(666);
			break;
		}
		Window::flushDraw();
	}
	Window::endDraw();
}

int Manage::menu()                  //显示按钮
{

	for (int i = 0; i < menu_btns.size(); i++)
	{
		menu_btns[i]->show();
		menu_btns[i]->evenLoop(m_msg);                  //传入点击 值
		if (menu_btns[i]->isClicked())
		{												//被点击
			return i;                                
		}
	}
	return Menu;
}

void Manage::play()
{
	outtextxy(0, 0, "play");              //试输出
	cout << "play" << endl;               //试运行，输出
	return HRD();
}

void Manage::quit()
{
	outtextxy(0, 0, "quit");
	cout << "quit" << endl;
	exit(666);
}

void Manage::drawBackground()
{
	::putimage(0, 0, &m_bk);
}

IMAGE background;
IMAGE cheer;
IMAGE cheer1;

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
	initgraph(625, 855, 1);

	loadimage(&background, "photos/background.png");
	loadimage(&cheer, "photos/cheer.png");
	loadimage(&cheer1, "photos/cheer1.png");
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


void finial1()
{
	putimage(0, 0, &cheer1);
	mciSendString("close music/BGM.mp3", 0, 0, 0);
	mciSendString("play music/firework.mp3 repeat", 0, 0, 0);

	
}void finial()
{
	putimage(0, 0, &cheer);
	mciSendString("close music/BGM.mp3", 0, 0, 0);
	mciSendString("play music/firework.mp3 repeat", 0, 0, 0);


}


void updateWindow()
{
	BeginBatchDraw();   
	putimage(0, 0, &background);//双缓冲

	if ((map[3][1] == CC) && (map[3][2] == CC) && (map[4][1] == CC) && (map[4][2] == CC))
	{
		finial1();
	
	}
	else
	{

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
	//if ((map[3][1] == CC) && (map[3][2] == CC) && (map[4][1] == CC) && (map[4][2] == CC))
	//{
	//	mciSendString("close music/BGM.mp3", 0, 0, 0);
	//	mciSendString("play music/firework.mp3", 0, 0, 0);

	//}
	//else
	//{
	//	mciSendString("play music/BGM.mp3 repeat", 0, 0, 0);
	//}
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

//
//void userClick()
//{
//	//ExMessage msg = getmessage();
//	//if (msg.message == WM_LBUTTONDOWN)
//	//{
//	//	int row = msg.y / (150 + 5);
//	//	int col = msg.x / (150 + 5);
//	//	printf("%d,%d 人物:%d\n ", row, col, map[row][col]);
//	//		if (SelectRole == EMPTY)                  //一次
//	//		{
//	//			SelectRole = map[row][col];
//	//		}
//	//		else									//二次
//	//		{
//	//			if (map[row][col] != EMPTY&&row != 5 && col != 0)
//	//			{
//	//				SelectRole = map[row][col];
//	//				return;
//	//			}
//	//			if (row - 1 >= 0 && map[row - 1][col] == SelectRole) move(MOVE_D);
//	//			if (row + 1 < 5 && map[row + 1][col] == SelectRole) move(MOVE_U);
//	//			if (col + 1 < 4 && map[row][col + 1] == SelectRole) move(MOVE_L);
//	//			if (col - 1 >= 0 && map[row][col - 1] == SelectRole) move(MOVE_R);
//	//			if (row == 5 & col == 0) return exit(666);
//	//			
//	//		}
//	//	}
//}
			
//void cheat()
//{
//	ExMessage msg = getmessage();
//
//}
//
//void Manage::rewrite()
//{
//	while (1)
//	{
//		ExMessage msg = getmessage();
//		if (msg.message == WM_LBUTTONDOWN)
//		{
//			int row = msg.y / (150 + 5);
//			int col = msg.x / (150 + 5);
//			if (row == 5 & col == 0) 
//				return HRD();
//	   }
//		else
//			
//
//}

//void Manage::re()
//{
//	ExMessage msg = getmessage();
//	if (msg.message == WM_RBUTTONDOWN)
//	{
//		return HRD();
//	}
//}

void Manage::HRD()
{
	int a = 1;
	gameInit();
	mciSendString("close music/firework.mp3", 0, 0, 0);
	while (1)
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
				if (map[row][col] != EMPTY&&(row != 5||col != 0))
				{
					SelectRole = map[row][col];
					return;
				}
				if (row - 1 >= 0 && map[row - 1][col] == SelectRole) move(MOVE_D);
				if (row + 1 < 5 && map[row + 1][col] == SelectRole) move(MOVE_U);
				if (col + 1 < 4 && map[row][col + 1] == SelectRole) move(MOVE_L);
				if (col - 1 >= 0 && map[row][col - 1] == SelectRole) move(MOVE_R);
				if (row == 5 & col == 0) return exit(666);

			}
		}
	
		if (msg.message == WM_RBUTTONDOWN)
		{
		finial();
		break;
		}
		updateWindow();
	
	}
	while (1)
	{
		
		ExMessage msg = getmessage();
		if (msg.message == WM_MBUTTONDOWN)
		{
			return HRD();
			a = 1;
		}
	}
	system("pause");
}



