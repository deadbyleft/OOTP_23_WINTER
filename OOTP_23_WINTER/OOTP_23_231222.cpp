

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
	vector <pair<string, bool>> hitter;
	vector <pair<string, bool>> pitcher;

	int hitter_stat[17][10] = { 0, };
	int pitcher_stat[13][10] = { 0, };

	int hitter_record[17][20] = { 0, };
	int pitcher_record[13][20] = { 0, };

	// At_game At_plate At_bat hit_1 hit_2 hit_3 hr bb so avg obp slg ops 
	// r rbi clu stl err
	// ������ Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� ���� ���� Ÿ�� ����� ��Ÿ�� ops (13��)
	// ���� Ÿ�� ��Ÿ�� ���� ��å (5��)

	int hitter_today_record[17][20] = { 0, };
	int pitcher_today_record[13][20] = { 0, };

	int team_signum = 0;

	int playground = 0;



public:
	void Initialize_member(int signalnum, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
	{
		team_signum = signalnum;

		for (int i = team_signum; i <= 30; i++)
			hitter.push_back(make_pair("Ÿ��", All_hitter_name[i].second));
		for (int i = 1; i <= 30; i++)
			pitcher.push_back(make_pair("����", All_pitcher_name[i].second));
	}

	void Initialize_teamset(int Team_signum, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
	{

		Initialize_member(Team_signum, All_hitter_name, All_pitcher_name);

		for (int i = team_signum * 30; i < team_signum * 30 + 30; i++)
		{
			hitter[i].first = All_hitter_name[i].first;
			for (int j = 0; j < 10; j++)
				hitter_stat[i][j] = All_hitter_stat[i][j];
		}

		for (int i = team_signum * 30; i < team_signum * 30 + 30; i++)
		{
			pitcher[i].first = All_pitcher_name[i].first;
			for (int j = 0; j < 10; j++)
				pitcher_stat[i][j] = All_pitcher_stat[i][j];
		}
	}

	void Show_stat(bool show_name, bool show_direction)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (show_name && j == 0) cout << hitter[i].first << " ";
				if (show_direction && j == 0)
					if (hitter[i].second) cout << " [ ��Ÿ ] ";
					else cout << " [ ��Ÿ ] ";
				cout << hitter_stat[i][j] << " ";
			}

			cout << "\n";
		}


	}

	void Show_lineup()
	{
		for (int i = 0; i < 9; i++)
			cout << hitter[i].second << "\n";
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



int show_game_select()
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



void show_team_manage(int num, team& selected_team)
{
	system("cls");

	cur(1, 1);
	cout << "  [ Esc : ������ ] [ [1], [2] : Ÿ�� ���� ] [ [3], [4] : ���� ���� ] [ [5], [6] : �� ���� ] [ [7] : ���� ��ü ] [ [8] : Ʈ���̵� ] ";
	cur(1, 5);

	if (num == 1) selected_team.Show_stat(true, true);
	
	

}

void control_team_manage(team& selected_team)
{
	int key = 49;
	int prev_key = 49;

	show_team_manage(1, selected_team);

	while (key != 27) {
		key = _getch();
		if (key != prev_key)
			if (key >= 49 && key <= 55)
				show_team_manage(key - 48, selected_team);

		prev_key = key;
	}


}

int show_mainmenu()
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
	for (int i = 0; i < 300; i++)
	{
		All_hitter_name.push_back(make_pair("Ÿ��", false));
		All_pitcher_name.push_back(make_pair("����", false));
	}

	All_hitter_name[0].first = "������";
	All_hitter_name[1].first = "�輺��";
	All_hitter_name[2].first = "���ڿ�";
	All_hitter_name[3].first = "�Ƿ���";
	All_hitter_name[4].first = "����ȣ";
	All_hitter_name[5].first = "������";
	All_hitter_name[6].first = "������";
	All_hitter_name[7].first = "������";
	All_hitter_name[8].first = "������";

	
}

void game_setting()
{
	team Samsung;
	team Lotte;

	int menu_choice = 0;

	CursorView(false);

	vector <pair<string, bool>> All_hitter_name;
	vector <pair<string, bool>> All_pitcher_name;

	Initialize_member_name(All_hitter_name, All_pitcher_name);

	Samsung.Initialize_teamset(0, All_hitter_name, All_pitcher_name);
	

	while (1)
	{
		menu_choice = show_mainmenu();
		if (menu_choice == 1) show_game_select();
		else if (menu_choice == 2) control_team_manage(Samsung);
		else if (menu_choice == 7) break;
	}

}


int main()
{
	game_setting();
	return 0;
}

