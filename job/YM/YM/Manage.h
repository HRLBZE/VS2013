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
		Menu=9                     //�жϷ���ֵ
	};
public:
	Manage();
	void run();			//��������
	int menu();         //�˵�
	void play();        //��ʼ��Ϸ  
	void quit();		//�˳���Ϸ
	void drawBackground();		//���Ʊ���
	void HRD();
	/*void re();*/
    

private:
	IMAGE m_bk;							// ͼƬ��
	ExMessage m_msg;                  //�жϰ��� �ṹ��

	std::vector<PushBotton*>menu_btns;		//
};

