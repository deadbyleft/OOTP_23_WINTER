
#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>

using namespace std;

int block[20][10] = { 0, };

class Tetris_Inform
{
private:
	int type = 0;
	int type_now_row = 0;
	int type_now_col = 0;
	int row = 0;
	int col = 0;
	int level = 1;
	int now_block = 0;
	int next_block = 0;
	bool touched = false;
public:
	int Get_row() { return row; } void Set_row(int value) { row = value; }
	int Get_col() { return col; } void Set_col(int value) { col = value; }
	int Get_level() { return level; } void Set_level(int value) { level = value; }
	int Get_now_block() { return next_block; } void Set_now_block() { now_block = next_block; }
	int Get_next_block() { return next_block; } void Set_next_block() { next_block = rand() % 6 + 1; }
	int Get_type() { return type; } void Set_type(int value) { type = value; }

	bool IsTurnable(int type) { 

		switch(type) {
			case 11:
				if (!block[type_now_row-1][type_now_col-1] && )
				return true;
			case 12:
				return true;
			case 13:
				return true;
			case 14:
				return true;
		}
		return type; 
	}

	bool Get_touched() { return touched; }

};

void cur(short x, short y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(bool show)//커서 깜빡임
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int sel(int a, int b, int c, int d) //몇열부터 시작할지, 행값, 한번에 몇 칸씩 떨어질지, 몇번까지 있는지
{
	int key = 0;
	int k = 0;
	int choice = 1;

	cur(a, b);
	cout << ("◁");

	while (1) {

		key = _getch();

		if (key == 224) {
			key = _getch();

			switch (key) {
			case 72:  //위
				if (choice > 1 && choice < d + 1) {
					cur(a, b); cout << ("  ");
					cur(a, b - c); b -= c;
					choice--;
					cout << ("◁");
				}
				break;

			case 80:  //아래
				if (choice > 0 && choice < d) {
					cur(a, b); cout << ("  ");
					cur(a, b + c); b += c;
					choice++;
					cout << ("◁");
				}
				break;

			}
		}

		else if (key == 13) {
			cur(a, b); cout << ("  ");
			return choice;
		}

	}

}

void show_gameover()
{
	system("cls");

}

void game_board(int level)
{
	
}

void show_screen(int level)
{
	int row = 8, col = 15;

	system("cls");
	cur(col, row);

	for (int i = 0; i < 19; i++)
	{
		cout << "■          ■"; row++; cur(col, row);
	}	
	
	cout << "■■■■■■■■■■■■"; col++; row = 8;

	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 10; j++)
			if (block[i][j]) cout << "□";		

	system("PAUSE");

}

void show_game_level()
{
	int row = 8, col = 15, level = 0;

	system("cls");

	cur(col, row);
	cout << " [  게임 레벨  ]"; row += 3; cur(col, row);
	cout << " [ 1 ] 1단계"; row += 3; cur(col, row);
	cout << " [ 2 ] 2단계"; row += 3; cur(col, row);
	cout << " [ 3 ] 3단계"; row += 3; cur(col, row);
	cout << " [ 4 ] 뒤로 가기"; row += 3; cur(col, row);

	level = sel(40, 11, 3, 4);

	if (level <= 3)
	{
		show_screen(level);
		game_board;
	}

	else
		return;
}

void show_select_menu()
{
	int row = 8, col = 15;

	system("cls");
		
	cur(col, row);
	cout << " [    메 뉴    ]"; row += 3; cur(col, row);
	cout << " [ 1 ] 게임 시작"; row += 3; cur(col, row);
	cout << " [ 2 ] 게임 종료"; row += 3; cur(col, row);
	
}

void show_mainmenu()
{
	class Tetris_Inform Tetris;

	show_select_menu();

	switch (sel(40, 11, 3, 2))
	{
	case 1:
		show_game_level();
	case 2:
		return;
	}
}

int main()
{
	CursorView(false);
	show_mainmenu();
	return 0;
}

