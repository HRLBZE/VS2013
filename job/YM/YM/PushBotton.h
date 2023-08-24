#pragma once
#include "BasicWidget.h"
#include"Configure.h" 
class PushBotton :           
	public BasicWidget
{
public:
	PushBotton(const std::string&text = "Button", int x = 0, int y = 0, int w = 100, int h = 30);         //宽高  
	void show()override;
	bool isin();				//鼠标是否在按钮上
	bool isClicked();				//是否点击
	void evenLoop(const ExMessage&msg);             //
	void setBackgroundColor(COLORREF c);
	void setHoverColor(COLORREF c);

private:
	std::string m_text;									//文字
	ExMessage m_msg;									//点击
private:
	COLORREF cur_c = RGB(232, 232, 236);
	COLORREF normal_c = RGB(232, 232, 236);               
	COLORREF hover_c=RED;
};

