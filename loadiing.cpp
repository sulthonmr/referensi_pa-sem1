#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	system("color 0a");
	char a=219, b=177;
	cout << "\t\t\t\tPlease Wait While Loading..."<<endl<<endl;
	cout << "\t\t\t\t";	
	for(int i = 0;i<=50;i++){
		cout << b;
	}
	cout << "\r";
	cout << "\t\t\t\t";	
	for(int i=0;i<=50;i++){
		Sleep(12);
		cout << a;
	}
	return 0;
}

