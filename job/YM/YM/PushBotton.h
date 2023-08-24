#pragma once
#include "BasicWidget.h"
#include"Configure.h" 
class PushBotton :           
	public BasicWidget
{
public:
	PushBotton(const std::string&text = "Button", int x = 0, int y = 0, int w = 100, int h = 30);         //���  
	void show()override;
	bool isin();				//����Ƿ��ڰ�ť��
	bool isClicked();				//�Ƿ���
	void evenLoop(const ExMessage&msg);             //
	void setBackgroundColor(COLORREF c);
	void setHoverColor(COLORREF c);

private:
	std::string m_text;									//����
	ExMessage m_msg;									//���
private:
	COLORREF cur_c = RGB(232, 232, 236);
	COLORREF normal_c = RGB(232, 232, 236);               
	COLORREF hover_c=RED;
};

