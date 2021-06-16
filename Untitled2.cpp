// ClearScreen.cpp : main project file.


#include <iostream>
#include <windows.h>

using namespace std;

void ClearScreen()
  {
   DWORD n;
  DWORD size;
  COORD coord = {0};
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  GetConsoleScreenBufferInfo ( h, &csbi );
  size = csbi.dwSize.X * csbi.dwSize.Y;
  FillConsoleOutputCharacter ( h, TEXT ( ' ' ), size, coord, &n );
  GetConsoleScreenBufferInfo ( h, &csbi );
  FillConsoleOutputAttribute ( h, csbi.wAttributes, size, coord, &n );
  SetConsoleCursorPosition ( h, coord );
  }

int main()
{
	for (int x=0;x<48;x++)
		cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="; // Fills screen with a pattern
	cout << "  PLEASE WAIT  "; // adds wait message
	Sleep(4000); // Used as a pause
    ClearScreen(); // Clears screen
    
    return 0;
}