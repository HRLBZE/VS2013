#pragma once
#include "Window.h"
#include<iostream>
ExMessage Window::m_msg;//C++17需要如此定义
Window::Window(int w,int h,int flag)
{
	::initgraph(w, h, flag);                   //：使用全局函数
	::setbkmode(TRANSPARENT);			//文字背景透明
}

void Window::setWindowTilte(const std::string&title)
{
	::SetWindowText(m_handle, title.c_str());     //窗口句柄，
}


int Window::exec()
{
	return getchar();					
}

int Window::width()
{
	return ::getwidth();												//改名
}
int Window::height()
{
	return ::getheight();
}
void Window::beginDraw()
{
	::BeginBatchDraw();
}
void Window::clear()
{
	::cleardevice();
}
void Window::flushDraw()
{
	::FlushBatchDraw();
}
void Window::endDraw()
{
	::EndBatchDraw();
}
