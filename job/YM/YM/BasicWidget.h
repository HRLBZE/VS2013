#pragma once
class BasicWidget
{
public:
	BasicWidget(int x, int y, int w, int h);             //位置，宽高
	int width();
	int height();
	void setFixedside(int w, int h);//设置窗口高度和宽度

	int x();                                  
	int y();                           //获取，whxy
	void move(int x, int y);              

	virtual void show() = 0;                      //虚函数，不允许实体化
protected:
	int m_x;
	int m_y;
	int m_w;
	int m_h;
};

