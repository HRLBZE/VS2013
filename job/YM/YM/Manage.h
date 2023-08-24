#pragma once
#include"Window.h"
#include<vector>
#include"PushBotton.h"
class Manage
{
	enum Operator
	{
		Play,          
		Quit,
		Menu=9                     //判断返回值
	};
public:
	Manage();
	void run();			//启动管理
	int menu();         //菜单
	void play();        //开始游戏  
	void quit();		//退出游戏
	void drawBackground();		//绘制背景
	void HRD();
	/*void re();*/
    

private:
	IMAGE m_bk;							// 图片名
	ExMessage m_msg;                  //判断按键 结构体

	std::vector<PushBotton*>menu_btns;		//
};

