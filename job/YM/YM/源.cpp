#define _CRT_SECURE_NO_WARNINGS
#include"Manage.h"
#include"Window.h"
int main()
{
	Window w(625,855,EX_SHOWCONSOLE);         //��ʼ��w����
	w.setWindowTilte("���ݵ�");
	Manage m;            
	m.run();
	return w.exec();//������

}