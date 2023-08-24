#pragma once
class BasicWidget
{
public:
	BasicWidget(int x, int y, int w, int h);             //λ�ã����
	int width();
	int height();
	void setFixedside(int w, int h);//���ô��ڸ߶ȺͿ��

	int x();                                  
	int y();                           //��ȡ��whxy
	void move(int x, int y);              

	virtual void show() = 0;                      //�麯����������ʵ�廯
protected:
	int m_x;
	int m_y;
	int m_w;
	int m_h;
};

