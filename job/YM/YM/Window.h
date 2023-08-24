#pragma once
#include"Configure.h" 
class Window
{
public:
	Window(int w,int h,int flag);                //����window �����ش��ھ��
	void setWindowTilte(const std::string&tilte);
	int exec();

	static int width();                   //��
	static int height();					//��
	static void clear();			//��������
	static void beginDraw();			 
	static void flushDraw();
	static void endDraw();


	//������������
	inline static bool hasMsg(){ return ::peekmessage(&m_msg, EX_MOUSE | EX_KEY); }       //������Ϣ��peek��������Ϣ������
	inline static const ExMessage& getMsg(){ return m_msg; }			//��ȡ��Ϣ



private:
	HWND m_handle;//���ھ��
	static ExMessage m_msg;//��Ϣ
};
 
