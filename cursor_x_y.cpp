#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int a, int b);
int main(){
	cout << "Cursor before : " <<endl;
	gotoxy(23,12);
	cout << "Cursor after";
	
}

void gotoxy(int x, int y){
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(hStdout,coord);
	}
}
