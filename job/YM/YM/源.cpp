#define _CRT_SECURE_NO_WARNINGS
#include"Manage.h"
#include"Window.h"
int main()
{
	Window w(625,855,EX_SHOWCONSOLE);         //初始化w窗口
	w.setWindowTilte("华容道");
	Manage m;            
	m.run();
	return w.exec();//防闪退

}