#pragma once
#include "Window.h"
#include<iostream>
ExMessage Window::m_msg;//C++17��Ҫ��˶���
Window::Window(int w,int h,int flag)
{
	::initgraph(w, h, flag);                   //��ʹ��ȫ�ֺ���
	::setbkmode(TRANSPARENT);			//���ֱ���͸��
}

void Window::setWindowTilte(const std::string&title)
{
	::SetWindowText(m_handle, title.c_str());     //���ھ����
}


int Window::exec()
{
	return getchar();					
}

int Window::width()
{
	return ::getwidth();												//����
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
