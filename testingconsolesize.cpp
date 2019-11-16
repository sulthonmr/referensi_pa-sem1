#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect);
	MoveWindow(console,ConsoleRect.left,ConsoleRect.top,100,100,TRUE);
	system("pause");
}
