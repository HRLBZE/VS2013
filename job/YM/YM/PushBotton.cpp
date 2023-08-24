#include "PushBotton.h"


PushBotton::PushBotton(const std::string&text, int x, int y, int w, int h)
:BasicWidget(x, y, w, h), m_text(text)
{

}

void PushBotton::show()
{
	setfillcolor(cur_c);
	::fillroundrect(m_x, m_y, m_x + m_w, m_y + m_h, 10, 10);           //���ư�ť
	
	settextcolor(BLACK);
	
	int tx = m_x + (m_w - textwidth(m_text.c_str())) / 2-5;
	int ty = m_y + (m_h - textheight(m_text.c_str()) / 2) - 25;		//���ھ���  
	::outtextxy(tx, ty, m_text.c_str());							//���־�����ʾ
	 
}

bool PushBotton::isin()                //����
 {
	if (m_msg.x >= m_x&&m_msg.x < m_x + m_w&&m_msg.y >= m_y&&m_msg.y<=m_y + m_h)
	{
		return true;
	}
	return false;
}

bool PushBotton::isClicked()
{
	if (isin())
	{
		if (m_msg.message == WM_LBUTTONDOWN)                   //������
		{
			return true;
		}
	}
	return false;
}

void PushBotton::evenLoop(const ExMessage&msg)                //��ֵ
{
	m_msg = msg;
	//buzaianniu
	if (!isin())
	{
		cur_c = normal_c;
	}
	else
	{
		cur_c = hover_c;
	}
}

void PushBotton::setBackgroundColor(COLORREF c)
{
	normal_c = c;

}
void PushBotton::setHoverColor(COLORREF c)
{
	hover_c = c;
}