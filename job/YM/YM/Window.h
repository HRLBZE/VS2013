#pragma once
#include"Configure.h" 
class Window
{
public:
	Window(int w,int h,int flag);                //定义window ，返回窗口句柄
	void setWindowTilte(const std::string&tilte);
	int exec();

	static int width();                   //宽
	static int height();					//高
	static void clear();			//清屏函数
	static void beginDraw();			 
	static void flushDraw();
	static void endDraw();


	//按键和鼠标操作
	inline static bool hasMsg(){ return ::peekmessage(&m_msg, EX_MOUSE | EX_KEY); }       //有无消息，peek，有无消息，返回
	inline static const ExMessage& getMsg(){ return m_msg; }			//获取消息



private:
	HWND m_handle;//窗口句柄
	static ExMessage m_msg;//消息
};
 
