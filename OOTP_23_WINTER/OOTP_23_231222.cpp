

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <vector>

using namespace std;

int All_hitter_stat[300][10] = {
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
0,
};

int All_pitcher_stat[300][10] = { {60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
{60, 60, 60, 60, 60, 60, 60, 60, 60, 60},
0,
};

string All_member_name[300] = { "������", "�輺��", "���ڿ�", "�Ƿ���", "����ȣ", "������", "������", "������", "������", 0, };


class scoreboard
{
private:
	int board[2][12];

	int home_team[20] = { 0, };
	int away_team[20] = { 0, };

public:
	void update_screen()
	{

	}
};

class team
{
private:
	vector <int> hitter; // X��
	vector <int> pitcher; // X��

	string hitter_name[17] = { "0", };
	string pitcher_name[13] = { "0", };

	int hitter_stat[17][10] = { 0, };
	int pitcher_stat[13][10] = { 0, };

	int hitter_record[17][10] = { 0, };
	int pitcher_record[13][10] = { 0, };

	int hitter_today_record[17][10] = { 0, };
	int pitcher_today_record[13][10] = { 0, };

	int team_signum = 0;

	int playground = 0;



public:
	void Initialize_member(int signalnum)
	{
		team_signum = signalnum;

		for (int i = 1; i <= 9; i++)
			hitter.push_back(team_signum * 30 + i);
		for (int i = 10; i <= 14; i++)
			pitcher.push_back(team_signum * 30 + i);
	}

	void Initialize_teamset(int Team_signum, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
	{
		team_signum = Team_signum;

		for (int i = team_signum * 30; i < team_signum * 30 + 30; i++)
		{
			hitter_name[i] = All_hitter_name[i].first;
			for (int j = 0; j < 10; j++)
				hitter_stat[i][j] = All_hitter_stat[i][j];
		}

		for (int i = team_signum * 30; i < team_signum * 30 + 30; i++)
		{
			pitcher_name[i] = All_pitcher_name[i].first;
			for (int j = 0; j < 10; j++)
				pitcher_stat[i][j] = All_pitcher_stat[i][j];
		}
	}

	void Show_stat(bool show_name)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (show_name && j == 0) cout << hitter_name[i] << " ";
				cout << hitter_stat[i][j] << " ";
			}

			cout << "\n";
		}


	}

	void Show_lineup()
	{
		for (int i = 0; i < 9; i++)
			cout << hitter_name[i] << "\n";
	}

};

void cur(short x, short y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(bool show)//Ŀ�� ������
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int sel(int a, int b, int c, int d) //����� ��������, �ప, �ѹ��� �� ĭ�� ��������, ������� �ִ���
{
	int key = 0;
	int k = 0;
	int choice = 1;

	cur(a, b);
	cout << ("��");

	while (1) {

		key = _getch();

		if (key == 224) {
			key = _getch();

			switch (key) {
			case 72:  //��
				if (choice > 1 && choice < d + 1) {
					cur(a, b); cout << ("  ");
					cur(a, b - c); b -= c;
					choice--;
					cout << ("��");
				}
				break;

			case 80:  //�Ʒ�
				if (choice > 0 && choice < d) {
					cur(a, b); cout << ("  ");
					cur(a, b + c); b += c;
					choice++;
					cout << ("��");
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

void playball(bool home) // Ȩ�� ����ΰ� �ƴѰ�
{

}


int game_select()
{
	int row = 8, col = 15;

	system("cls");
	cur(col + 8, row);
	cout << " [ �޴� ]"; row += 3; cur(col, row);
	cout << " [ 1 ] ���� ���"; row += 3; cur(col, row);
	cout << " [ 2 ] ���� ���"; row += 3; cur(col, row);
	cout << " [ 3 ] ģ�� ���"; row += 3; cur(col, row);
	cout << " [ 4 ] �ڷ� ����"; row += 3; cur(col, row);

	return sel(45, 11, 3, 4);
}

int mainmenu()
{
	int row = 8, col = 15;

	system("cls");
	cur(col + 8, row);
	cout << " [ �޴� ]"; row += 3; cur(col, row);
	cout << " [ 1 ] ��� ����"; row += 3; cur(col, row);
	cout << " [ 2 ] ���� ����"; row += 3; cur(col, row);
	cout << " [ 3 ] ��� Ȯ��"; row += 3; cur(col, row);
	cout << " [ 4 ] ���� ����"; row += 3; cur(col, row);
	cout << " [ 5 ] �� ����"; row += 3; cur(col, row);
	cout << " [ 6 ] ���� ����"; row += 3; cur(col, row);
	cout << " [ 7 ] ���� ����"; row += 3; cur(col, row);

	return sel(45, 11, 3, 7);
}

void Initialize_member_name(vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
{
	for (int i = 0; i < 9; i++)
	{
		All_hitter_name[i].first = All_member_name[i];
	}
}

void game_setting()
{
	team Samsung;
	team Lotte;

	CursorView(false);

	vector <pair<string, bool>> All_hitter_name;
	vector <pair<string, bool>> All_pitcher_name;

	for (int i = 0; i < 300; i++)
	{
		All_hitter_name.push_back(make_pair("Ÿ��", false));
		All_pitcher_name.push_back(make_pair("����", false));
	}

	Samsung.Initialize_teamset(0, All_hitter_name, All_pitcher_name);
	Initialize_member_name(All_hitter_name, All_pitcher_name);
	Samsung.Show_stat(true);


	//while (1)
	//{
	//	if (mainmenu() == 1) game_select();
	//	if (mainmenu() == 7) break;
	//}

}


int main()
{
	game_setting();
	return 0;
}

