//
//
//#include <iostream>
//#include <iomanip> 
//#include <cstdlib>
//#include <ctime>
//#include <windows.h>
//#include <conio.h>
//#include <mmsystem.h>
//#include <vector>
//
//using namespace std;
//
//
////void cur(short x, short y);
////void CursorView(bool show);
//void Set_FontColor(int value);
////int sel(int a, int b, int c, int d);
////int battle_hit_result(int Save_hitter_index[], int Save_pitcher_index[]);
////void show_result(int val);
////int battle(team attack_team, team defence_team);
////void playball(team home_team, team away_team, scoreboard Scoreboard);
////int show_game_select();
////void show_team_manage(int value, team& selected_team);
////int show_mainmenu();
////void change_hitter(team& selected_team);
////void change_pitcher(team& selected_team);
////void change_team();
////void control_team_manage(team& selected_team);
////void Initialize_member_name(vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name);
////void game_setting();
////int main();
//
//
//// ������ ����� ������ ��Ȯ�� �Ŀ� ���ǵ� ���� ������
//
//int All_hitter_stat[300][10] = {
//{2, 3, 30, 30, 30, 30, 30, 60, 60, 60},
//{3, 3, 40, 40, 40, 40, 40, 60, 60, 60},
//{4, 3, 50, 50, 50, 50, 50, 60, 60, 60},
//{5, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{6, 3, 70, 70, 70, 70, 70, 60, 60, 60},
//{7, 3, 80, 80, 80, 80, 80, 60, 60, 60},
//{8, 3, 90, 90, 90, 90, 90, 60, 60, 60},
//{9, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//0,
//};
//
//int All_pitcher_stat[300][10] = { {1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
//
//0,
//};
//
//
//
//class scoreboard
//{
//private:
//	int board[2][12];
//
//	int home_team[20] = { 0, };
//	int away_team[20] = { 0, };
//
//	int home_team_hitter_record[17][20] = { 0, };
//	int away_team_pitcher_record[13][20] = { 0, };
//
//	int home_pitching_value = 0;
//	int away_pitching_value = 0;
//
//
//	string stadium[1][9] = { " ��� �߱��� ", " �뱸 �Ｚ ���̿��� ��ũ ", " ��� è�Ǿ� �ʵ� ", " ���� �߱��� ", " ���� �̱۽� ��ũ ", " ���� �߱��� "
//	, " ��ô ��ī�̵� ", " ��õ �߱���", " NC ���̳뽺 ��ũ" };
//	bool extend = true; // 9ȸ ����/12ȸ ����
//
//public:
//
//
//	void Update_base()
//	{
//
//	}
//	void Initialize_var()
//	{
//
//	}
//
//	void Print_Scoreboard()
//	{
//
//	}
//
//};
//
//class team
//{
//private:
//	vector <pair<string, bool>> hitter; // �̸�, ��/��Ÿ
//	vector <pair<string, bool>> pitcher;
//
//	string team_stadium = "�߱���";
//
//	bool use_condition = true;
//	bool data_save = true;
//
//	int hitter_stat[17][10] = { 0, };
//	int pitcher_stat[13][10] = { 0, };
//
//	int hitter_record[17][20] = { 0, };
//	int pitcher_record[13][20] = { 0, };
//
//	int game_played = 0;
//
//	int now_hitter = 0;
//	int now_pitcher = 0;
//
//	int team_sigvalue = 0;
//	int playground = 0;
//
//	int hitter_today_record[17][20] = { 0, };
//	int pitcher_today_record[13][20] = { 0, };
//
//	int played_game = 0;
//
//	vector <pair<bool, int>> base;
//
//	// At_game At_plate At_bat hit_1 hit_2 hit_3 hr bb so avg obp slg ops 
//	// r rbi clu stl stl_fail err
//	// ������ Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� ���� ���� Ÿ�� ����� ��Ÿ�� ops (13��)
//	// ���� Ÿ�� ��Ÿ�� ���� ������� ��å (6��)
//
//
//public:
//	int Get_hitter_member_size() { return hitter.size(); }
//	int Get_now_hitter() { return now_hitter; }
//	int Get_now_pitcher() { return now_pitcher; }
//	int Get_hitter_stat(int row, int col) { return hitter_stat[row][col]; }
//
//	void Set_now_hitter(int value) { now_hitter = value; }
//	void Set_hitter_stat(int col, int result[]) { hitter_stat[now_hitter][col] = result[col]; }
//
//	void Set_pitcher_stat(int col, int result[])
//	{
//		pitcher_stat[now_pitcher][col] = result[col];
//	}
//
//	void Set_played_game(int value)
//	{
//		played_game += value;
//	}
//
//	int Get_pitcher_stat(int row, int col)
//	{
//		return pitcher_stat[row][col];
//	}
//
//	int IsHomeTeam()
//	{
//		return played_game % 2;
//	}
//	
//
//	bool IsStarter(int row)
//	{
//		if (pitcher_stat[row][0] == 2) return false;
//		return true;
//	}
//
//	void Initialize_member(int signalvalue, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
//	{
//		team_sigvalue = signalvalue;
//
//		for (int i = team_sigvalue * 30; i < team_sigvalue * 30 + 17; i++)
//			hitter.push_back(make_pair("Ÿ��", All_hitter_name[i].second));
//		for (int i = team_sigvalue * 30 + 17; i < team_sigvalue * 30 + 30; i++)
//			pitcher.push_back(make_pair("����", All_pitcher_name[i].second));
//	}
//
//	void Initialize_teamset(int Team_sigvalue, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
//	{
//
//		Initialize_member(Team_sigvalue, All_hitter_name, All_pitcher_name);
//
//		for (int i = team_sigvalue * 30; i < team_sigvalue * 30 + hitter.size(); i++)
//		{
//			hitter[i].first = All_hitter_name[i].first;
//			for (int j = 0; j < 10; j++)
//				hitter_stat[i][j] = All_hitter_stat[i][j];
//
//			hitter_stat[i][7] = (hitter_stat[i][2] + hitter_stat[i][3] + hitter_stat[i][4] + hitter_stat[i][5] + hitter_stat[i][6]) / 5;
//		}
//
//		for (int i = team_sigvalue * 30; i < team_sigvalue * 30 + pitcher.size(); i++)
//		{
//			pitcher[i].first = All_pitcher_name[i].first;
//			for (int j = 0; j < 10; j++)
//				pitcher_stat[i][j] = All_pitcher_stat[i][j];
//		}
//
//		Update_hitter_condition();
//	}
//	 
//
//
//	void Show_hitter_position(int row)
//	{
//		switch (hitter_stat[row][0])
//		{
//		case 2:
//			cout << " ��  �� ";  break;
//		case 3:
//			cout << "  1��� ";  break;
//		case 4:
//			cout << "  2��� ";  break;
//		case 5:
//			cout << "  3��� ";  break;
//		case 6:
//			cout << " ���ݼ� ";  break;
//		case 7:
//			cout << " ���ͼ� ";  break;
//		case 8:
//			cout << " �߰߼� ";  break;
//		case 9:
//			cout << " ���ͼ� ";  break;
//		}
//	}
//
//	void Update_hitter_condition()
//	{
//		int condition_rand = rand()% 5 + 1;
//
//		for (int i = 0; i < hitter.size(); i++)
//		{
//			condition_rand = rand() % 10 + 1;
//			hitter_stat[i][1] = condition_rand;
//		}
//	}
//
//	void Show_hitter_condition(int row)
//	{
//		switch (hitter_stat[row][1])
//		{
//		case 1:
//			Set_FontColor(10); cout << " �ֻ� ";  Set_FontColor(15); break;
//		case 2: case 3: 
//			Set_FontColor(10); cout << " ���� ";  Set_FontColor(15); break;
//		case 4: case 5: case 6: case 7:
//			cout << " ���� ";  break;
//		case 8: case 9:
//			Set_FontColor(8); cout << " ���� ";  Set_FontColor(15); break;
//		case 10:
//			Set_FontColor(8); cout << " �־� ";  Set_FontColor(15); break;
//		}
//	}
//
//	void Show_hitter_stat(int situation, bool show_name, bool show_direction, bool show_value)
//	{
//
//		
//
//		if (situation == 1)
//		{
//			for (int i = 0; i < hitter.size(); i++)
//			{
//				for (int j = 0; j < 7; j++)
//				{
//					if (show_value && j == 0)
//					{
//						if (i % 30 < 9) cout << " [  " << i + 1 << " ��  ] ";
//						else cout << " [  �ĺ�  ] ";
//					}
//					if (show_name && j == 0) cout << "   " << hitter[i].first << "      ";
//					if (show_direction && j == 0)
//						if (hitter[i].second) cout << " ��Ÿ ";
//						else cout << " ��Ÿ ";
//
//					if (j == 0)
//					{
//						cout << "     ";
//						Show_hitter_position(team_sigvalue * 30 + i);
//						cout << "     ";
//					}
//
//					else if (j == 1)
//					{
//						Show_hitter_condition(team_sigvalue * 30 + i);
//						cout << "        ";
//					}
//
//					else cout << hitter_stat[i][j] << "          ";
//				}
//
//				cout.precision(3);
//				cout << fixed;
//				
//
//				if (hitter_record[i][2] == 0)
//					cout << "0.000" << "        ";
//				else
//					cout << ((hitter_record[i][3] + hitter_record[i][4] + hitter_record[i][6]) / (double)hitter_record[i][2]) << "        ";
//
//				cout << hitter_record[i][6] << "        ";
//
//
//				cout << "\n\n";
//			}
//
//			return;
//		}
//			
//			
//
//		if (situation == 3)
//		{
//			for (int i = 0; i < hitter.size(); i++)
//			{
//
//					if (show_value)
//					{
//						if (i % 30 < 9) cout << " [  " << i + 1 << " ��  ] ";
//						else cout << " [  �ĺ�  ] ";
//					}
//					if (show_name) cout << "   " << hitter[i].first << "      ";
//					if (show_direction)
//						if (hitter[i].second) cout << " ��Ÿ ";
//						else cout << " ��Ÿ ";
//
//				cout << fixed;
//				cout.precision(3);
//
//				cout << "       " << hitter_record[i][1] << "         " << hitter_record[i][2] << "         "
//					<< hitter_record[i][3] <<  "         " << hitter_record[i][4] <<  "         " << hitter_record[i][6];
//
//				cout << "\n\n";
//			}
//
//			return;
//		}
//	}
//
//	void Change_hitter_stat(int hitter_1, int hitter_2)
//	{
//		int Save_index[10] = { 0, };
//		vector <pair<string, bool>> Save_hitter;
//
//		Save_hitter.push_back(make_pair("Ÿ��", 0));
//
//		Save_hitter[0].first = hitter[hitter_1].first;
//		Save_hitter[0].second = hitter[hitter_1].second;
//
//		for (int i = 0; i < 10; i++)
//			Save_index[i] = hitter_stat[hitter_1][i];
//			
//			
//
//		memcpy(hitter_stat[hitter_1], hitter_stat[hitter_2], sizeof(Save_index));
//		memcpy(hitter_stat[hitter_2], Save_index, sizeof(Save_index));
//
//		hitter[hitter_1].first = hitter[hitter_2].first;
//		hitter[hitter_1].second = hitter[hitter_2].second;
//
//		hitter[hitter_2].first = Save_hitter[0].first;
//		hitter[hitter_2].second = Save_hitter[0].second;
//
//		
//	}
//
//	void Set_hitter_record(int row, int stat_1, int stat_2, int stat_3, int stat_4, int stat_5, int stat_6, 
//		int stat_7, int stat_8, int stat_9, int stat_10, int stat_11, int stat_12, int stat_13, int stat_14)
//	{
//		hitter_record[row][0] += stat_1; hitter_record[row][1] += stat_2;
//		hitter_record[row][2] += stat_3; hitter_record[row][3] += stat_4;
//		hitter_record[row][4] += stat_5; hitter_record[row][5] += stat_6;
//		hitter_record[row][6] += stat_7; hitter_record[row][7] += stat_8;
//		hitter_record[row][8] += stat_9; hitter_record[row][9] += stat_10;
//		hitter_record[row][10] += stat_11; hitter_record[row][11] += stat_12;
//		hitter_record[row][12] += stat_13; hitter_record[row][13] += stat_14;
//
//	// At_plate At_bat hit_1 hit_2 hit_3 hr bb so r rbi clu stl stl_fail err
//	// ������ Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� ���� ���� ���� (10��)
//	// Ÿ�� ���� ������� ��å (4��)
//	}
//
//
//	void Show_pitcher_position(int row)
//	{
//		
//		switch (row % 14 + 1)
//		{
//		case 1: case 2: case 3: case 4: case 5:
//			if (row % 30 < 5) cout << " " << row + 1 << " ���� ";
//			else cout << "  ����  ";  break;
//		case 6: case 7:
//			cout << " �ʽ��� ";  break;
//		case 8: case 9: 
//			cout << " �߰��� ";  break;
//		case 10:
//			cout << "  �¾�  ";  break;
//		case 11: case 12:
//			cout << "  �ո�  ";  break;
//		case 13:
//			cout << " ������ ";  break;
//		}
//	}
//
//	void Update_pitcher_condition()
//	{
//		int condition_rand = rand() % 5 + 1;
//
//		for (int i = 0; i < pitcher.size(); i++)
//		{
//			condition_rand = rand() % 10 + 1;
//			pitcher_stat[i][1] = condition_rand;
//		}
//	}
//
//	void Show_pitcher_condition(int row)
//	{
//		switch (hitter_stat[row][1])
//		{
//		case 1:
//			Set_FontColor(10); cout << " �ֻ� ";  Set_FontColor(15); break;
//		case 2: case 3:
//			Set_FontColor(10); cout << " ���� ";  Set_FontColor(15); break;
//		case 4: case 5: case 6: case 7:
//			cout << " ���� ";  break;
//		case 8: case 9:
//			Set_FontColor(8); cout << " ���� ";  Set_FontColor(15); break;
//		case 10:
//			Set_FontColor(8); cout << " �־� ";  Set_FontColor(15); break;
//		}
//	}
//
//	void Show_pitcher_stat(int situation, bool show_name, bool show_direction, bool show_value)
//	{
//
//		for (int i = 0; i < pitcher.size(); i++)
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				if (show_value && j == 0)
//				{			
//					cout << " ["; Show_pitcher_position(team_sigvalue * 30 + i); cout << "] ";
//				}
//
//				if (show_name && j == 0) cout << "   " << pitcher[i].first << "      ";
//				if (show_direction && j == 0)
//					if (pitcher[i].second) cout << " ���� ";
//					else cout << " ���� ";
//
//				else if (j == 1)
//				{
//					cout << "      ";
//					Show_pitcher_condition(team_sigvalue * 30 + i);
//					cout << "        ";
//				}
//
//				else cout << pitcher_stat[i][j] << "          ";
//			}
//
//			cout << "\n\n";
//		}
//
//		if (situation == 0) return;
//
//		if (situation == 1)
//		{
//
//		}
//	}
//
//	void Change_pitcher_stat(int pitcher_1, int pitcher_2)
//	{
//		int Save_index[10] = { 0, };
//		vector <pair<string, bool>> Save_pitcher;
//
//		Save_pitcher.push_back(make_pair("����", 0));
//
//		Save_pitcher[0].first = pitcher[pitcher_1].first;
//		Save_pitcher[0].second = pitcher[pitcher_1].second;
//
//		for (int i = 0; i < 10; i++)
//			Save_index[i] = pitcher_stat[pitcher_1][i];
//
//
//		memcpy(pitcher_stat[pitcher_1], pitcher_stat[pitcher_2], sizeof(Save_index));
//		memcpy(pitcher_stat[pitcher_2], Save_index, sizeof(Save_index));
//
//		pitcher[pitcher_1].first = pitcher[pitcher_2].first;
//		pitcher[pitcher_1].second = pitcher[pitcher_2].second;
//
//		pitcher[pitcher_2].first = Save_pitcher[0].first;
//		pitcher[pitcher_2].second = Save_pitcher[0].second;
//
//
//	}
//
//
//
//	void Show_lineup()
//	{
//		for (int i = 0; i < 9; i++)
//			cout << hitter[i].second << "\n";
//	}
//
//
//
//
//};
//
//void cur(short x, short y) {
//	COORD pos = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//void CursorView(bool show)//Ŀ�� ������
//{
//	HANDLE hConsole;
//	CONSOLE_CURSOR_INFO ConsoleCursor;
//	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	ConsoleCursor.bVisible = show;
//	ConsoleCursor.dwSize = 1;
//	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
//}
//
//void Set_FontColor(int value)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
//}
//
//int sel(int a, int b, int c, int d) //����� ��������, �ప, �ѹ��� �� ĭ�� ��������, ������� �ִ���
//{
//	int key = 0;
//	int k = 0;
//	int choice = 1;
//
//	cur(a, b);
//	cout << ("��");
//
//	while (1) {
//
//		key = _getch();
//
//		if (key == 224) {
//			key = _getch();
//
//			switch (key) {
//			case 72:  //��
//				if (choice > 1 && choice < d + 1) {
//					cur(a, b); cout << ("  ");
//					cur(a, b - c); b -= c;
//					choice--;
//					cout << ("��");
//				}
//				break;
//
//			case 80:  //�Ʒ�
//				if (choice > 0 && choice < d) {
//					cur(a, b); cout << ("  ");
//					cur(a, b + c); b += c;
//					choice++;
//					cout << ("��");
//				}
//				break;
//
//			}
//		}
//
//		else if (key == 13) {
//			cur(a, b); cout << ("  ");
//			return choice;
//		}
//
//	}
//
//}
//
//
//int get_hitter_rand_stat(int value, int selected_stat, int Save_hitter_index[])
//{	
//	double return_hitter_value = rand() % Save_hitter_index[selected_stat] + 1 + value;
//
//	if (selected_stat == 2) return_hitter_value = 49.8 + (rand() % Save_hitter_index[selected_stat] + 1) / 15;
//
//	if (selected_stat == 3) return_hitter_value = 49.8 + (rand() % Save_hitter_index[selected_stat] + 1) / 15 +
//		(rand() % Save_hitter_index[selected_stat] + 1) / 3; // ��Ȯ�̶�� �����ȵ� �Ϻ� �ݿ�
//
//	if (selected_stat == 4) return_hitter_value = (rand() % Save_hitter_index[selected_stat] + 1) * 1.2;
//
//	return return_hitter_value;
//}
//
//int get_pitcher_rand_stat(int value, int selected_stat, int Save_pitcher_index[])
//{
//	int return_pitcher_value = rand() % Save_pitcher_index[selected_stat] + 1 + value;
//
//	if (selected_stat == 3) return_pitcher_value += (rand() % Save_pitcher_index[selected_stat] + 1) / 3; // ������� ������ �Ϻ� �ݿ�
//
//	return return_pitcher_value;
//}
//
//
//
//int battle_hit_run_result(bool hit, int type, int Save_hitter_index[], int Save_pitcher_index[])
//{
//	// Ÿ�� : 0 ������ 1 ����� 2 ������ 3 ��Ȯ�� 4 �Ŀ� 5 ���ǵ� 6 ���� 7 ������
//	// ���� : 0 ������ 1 ����� 2 ��  �� 3 ��  �� 4 ü  �� 5 ��  �� 6 ��  Ż 7 ������
//
//	// 0 �Ŀ� 1 ���� 2 ����
//
//	// 1 1��Ÿ 2 2��Ÿ 3 3��Ÿ 4 Ȩ�� 5 ���� 6 ��� 7 ��Ʈ 8 ��å 9 ����
//	// 0 ���� ���� ���� 1 ���� ���� ���� 2 ���� 3 ���߻�
//
//	int hitter_speed = get_hitter_rand_stat(0, 5, Save_hitter_index) + get_hitter_rand_stat(0, 5, Save_hitter_index); // ��� ������� ������� ���� �߰�
//
//	if (type == 1)
//		if (hitter_speed > 60) return 11;
//		else return 10;
//
//	if (type == 2)
//		if (hitter_speed > 60) return 21;
//		else return 20;
//
//
//}
//
//int battle_hit_power_result(bool hit, int Save_hitter_index[], int Save_pitcher_index[])
//{
//	int result = get_hitter_rand_stat(0, 4, Save_hitter_index) - get_pitcher_rand_stat(0, 3, Save_pitcher_index);
//
//	if (hit)
//	{
//		if (result > 30) return 40;
//		if (result > 10) return 20;
//		return 10;
//	}
//	
//	else
//	{
//		if (result > 0)
//			return 6;
//		else
//			return 5;
//	}
//
//
//}
//
//int battle_hit_result(int Save_hitter_index[], int Save_pitcher_index[])
//{
//	int compare_value = get_hitter_rand_stat(0, 3, Save_hitter_index) - get_pitcher_rand_stat(0, 3, Save_pitcher_index);
//
//	if (compare_value > 0)
//		return battle_hit_power_result(true, Save_hitter_index, Save_pitcher_index); // ��Ÿ ���� ��ȯ
//
//	else
//		return battle_hit_power_result(false, Save_hitter_index, Save_pitcher_index);
//			
//}
//
//void update_game_record(int value, team& attack_team, team& defence_team)
//{
//	// ������ Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� / ���� ���� ���� Ÿ�� ���� ������� ��å
//
//	// 0 �Ŀ� 1 ���� 2 ����
//
//	// 1 1��Ÿ 2 2��Ÿ 3 3��Ÿ 4 Ȩ�� 5 ���� 6 ��� 7 ��Ʈ 8 ��å 9 ����
//	// 0 ���� ���� ���� 1 ���� ���� ���� 2 ���� 3 ���߻�
//
//	switch (value)
//	{
//	case 1:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 1, 0, 0, 0, 0, 0); break;
//	case 2:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 0, 0, 0, 0, 0, /**/  1, 0, 0, 0, 0, 0, 0); break;
//	case 5:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0); break;
//	case 6:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0); break;
//	case 10:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 1, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0); break;
//	case 20:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 1, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0); break;
//	case 40:
//		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 1, /**/  0, 0, 0, 0, 0, 0, 0); break;
//	}
//}
//
//
//
//void show_result(int value, bool update_value, team& attack_team, team& defence_team)
//{
//	// 0 ������ 1 ����� 2 ������ 3 ��Ȯ�� 4 �Ŀ� 5 ���ǵ� 6 ���� 7 ������
//
//
//	// 0 �Ŀ� 1 ���� 2 ����
//	
//	// 1 1��Ÿ 2 2��Ÿ 3 3��Ÿ 4 Ȩ�� 5 ���� 6 ��� 7 ��Ʈ 8 ��å 9 ����
//	// 0 ���� ���� ���� 1 ���� ���� ���� 2 ���� 3 ���߻�
//
//	return;
//
//
//	//cout << "�� X�� �ƿ�";
//}
//
//int battle(team& attack_team, team& defence_team, int out_count)
//{
//	int Save_hitter_index[10] = { 0, };
//	int Save_pitcher_index[10] = { 0, };
//	 
//	int strike = 0;
//	int ball = 0;
//	int pitching_value = 0;
//
//	bool update_record = true;
//
//	static int now_hitter = 0;
//
//	attack_team.Set_now_hitter(now_hitter % 9);
//
//	now_hitter++;
//
//	for (int i = 0; i < 10; i++)
//	{
//		Save_hitter_index[i] = attack_team.Get_hitter_stat(attack_team.Get_now_hitter(), i);
//		Save_pitcher_index[i] = defence_team.Get_pitcher_stat(defence_team.Get_now_pitcher(), i);
//	}
//
//	while (1)
//	{
//		pitching_value++;
//
//		if (get_hitter_rand_stat(50, 2, Save_hitter_index) < get_pitcher_rand_stat(30, 2, Save_pitcher_index)) // �꽺��
//			strike++;
//
//		else if (get_hitter_rand_stat(50, 3, Save_hitter_index) > get_pitcher_rand_stat(30, 3, Save_pitcher_index)) // Ÿ��
//		{
//			if (get_hitter_rand_stat(0, 3, Save_hitter_index) < get_pitcher_rand_stat(0, 3, Save_pitcher_index)) // �Ŀ�
//			{
//				if (strike != 2)
//					strike++;
//			}
//				
//			else // �Ŀ� �̿�
//			{
//				update_game_record(battle_hit_result(Save_hitter_index, Save_pitcher_index), attack_team, defence_team);
//
//				break;
//			}
//
//		}
//			
//
//		else // ���Ѻ�
//		{
//			if (get_hitter_rand_stat(0, 2, Save_hitter_index) < get_pitcher_rand_stat(0, 2, Save_pitcher_index))
//				strike++;
//			else 
//				ball++;
//		}
//
//		if (strike == 3)
//		{
//			show_result(1, true, attack_team, defence_team);
//			update_game_record(1, attack_team, defence_team);
//
//			// At_plate At_bat hit_1 hit_2 hit_3 hr bb so r rbi clu stl stl_fail err
//			// Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� / ���� ���� ���� Ÿ�� ���� ������� ��å
//			break;
//		}
//			
//		else if (ball == 4)
//		{
//			show_result(2, true, attack_team, defence_team);	
//			update_game_record(2, attack_team, defence_team);
//			break;
//		}		
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		attack_team.Set_hitter_stat(i, Save_hitter_index);
//		defence_team.Set_pitcher_stat(i, Save_pitcher_index);
//	}
//		
//	return true; // �ƿ� ����
//}
//
//void playball(team& home_team, team& away_team, scoreboard& Scoreboard) // Ȩ�� ����ΰ� �ƴѰ�
//{
//	int out = 0;
//	int inning = 3;
//
//	while (out != 10000)
//	{
//		battle(home_team, away_team, out); out++;	
//		battle(away_team, home_team, out); out++;
//	}
//
//	home_team.Set_played_game(1);
//	away_team.Set_played_game(1);
//
//	return;
//}
//
//int show_game_select()
//{
//	int row = 8, col = 15;
//
//	system("cls");
//	cur(col + 8, row);
//	cout << " [ �޴� ]"; row += 3; cur(col, row);
//	cout << " [ 1 ] ���� ���"; row += 3; cur(col, row);
//	cout << " [ 2 ] ���� ���"; row += 3; cur(col, row);
//	cout << " [ 3 ] ģ�� ���"; row += 3; cur(col, row);
//	cout << " [ 4 ] �ڷ� ����"; row += 3; cur(col, row);
//
//	return sel(45, 11, 3, 4);
//}
//
//void game_select(int value, team& home_team, team& away_team, scoreboard& Scoreboard)
//{
//	if (value == 1)
//	{
//		if (home_team.IsHomeTeam())
//			playball(home_team, away_team, Scoreboard);
//		else
//			playball(away_team, home_team, Scoreboard);
//	}
//
//}
//
//void show_team_manage(int value, team& selected_team)
//{
//	system("cls");
//
//	cur(1, 1);
//	cout << "  [ Esc : ������ ] [ [1], [2], [3] : Ÿ�� ���� ] [ [4], [5] : ���� ���� ] [ [6] : ���� ��ü ] [ [7] : Ʈ���̵� ]  [ [8], [9] : �� ���� ]";
//	cur(9, 4);
//
//
//	if (value == 1)
//	{
//		cout << "     [ �� �� ]  [ ��  Ÿ ]  [ ������ ]  [ ����� ]  [ ������ ]  [ ��Ȯ�� ]  [ ��  �� ]  [ ���ǵ� ]  [ ��  �� ]   [ Ÿ  �� ]  [ Ȩ  �� ]  [ ��  �� ] " << '\n' << '\n';
//		cur(0, 6);
//		selected_team.Show_hitter_stat(1, true, true, true);
//	}
//		
//	else if (value == 2)
//	{
//		cout << "     [ �� �� ]  [ Ÿ  �� ]  [ Ÿ  �� ]  [ ��  Ÿ ]   [ 2��Ÿ ]  [ 3��Ÿ ]   [ Ȩ  �� ]  [ �� �� ]  [ ��  �� ]   [ ��  �� ]  [ ����� ]  [ OPS ]" << '\n' << '\n';
//		cur(0, 6);
//		selected_team.Show_hitter_stat(2, true, true, true);
//	}
//		
//
//	else if (value == 3)
//	{
//		cout << "     [ �� �� ]  [ ��  �� ]  [ Ÿ  �� ]  [ Ÿ  �� ]  [ Ÿ  �� ]  [ ����� ]  [ ��Ÿ�� ]  [  OPS  ]  [ ������ ]   [ ��  å ]  [ ������ ]" << '\n' << '\n';
//		cur(0, 6);
//		selected_team.Show_hitter_stat(3, true, true, true);
//	}
//		
//	  
//	else if (value == 4)
//	{
//		cout << "     [ �� �� ]  [ ��  Ÿ ]  [ ����� ]  [ ��  �� ]  [ ��  �� ]  [ ü  �� ]  [ ��  �� ]  [ ��  Ż ]  [ Ÿ  �� ]  [ Ȩ  �� ]  [ ��  �� ] " << '\n' << '\n';
//		cur(0, 6);
//		selected_team.Show_pitcher_stat(1, true, true, true);
//	}
//		
//
//	// At_game At_plate At_bat hit_1 hit_2 hit_3 hr bb so avg obp slg ops 
//	// r rbi clu stl err
//	// ������ Ÿ�� Ÿ�� ��Ÿ 2��Ÿ 3��Ÿ Ȩ�� ���� ���� Ÿ�� ����� ��Ÿ�� ops (13��)
//	// ���� Ÿ�� ��Ÿ�� ���� ������� ��å (5��)
//		
//}
//
//int show_mainmenu()
//{
//	int row = 8, col = 15;
//
//	system("cls");
//	cur(col, row);
//	cout << " [    �� ��    ]"; row += 3; cur(col, row);
//	cout << " [ 1 ] ��� ����"; row += 3; cur(col, row);
//	cout << " [ 2 ] ���� ����"; row += 3; cur(col, row);
//	cout << " [ 3 ] ��� Ȯ��"; row += 3; cur(col, row);
//	cout << " [ 4 ] ���� ����"; row += 3; cur(col, row);
//	cout << " [ 5 ] �� ����"; row += 3; cur(col, row);
//	cout << " [ 6 ] ���� ����"; row += 3; cur(col, row);
//	cout << " [ 7 ] ���� ����"; row += 3; cur(col, row);
//
//	return sel(40, 11, 3, 7);
//}
//
//void change_hitter(team& selected_team)
//{
//	cur(1, 40); cout << "[  ���  ]";
//
//	int hitter_1 = sel(13, 6, 2, 18) - 1; if (hitter_1 == 17) return;
//	int hitter_2 = sel(13, 6, 2, 18) - 1; if (hitter_2 == 17) return;
//
//	if (hitter_1 == hitter_2) return;
//	
//	int Save_index[10] = { 0, };
//	
//	selected_team.Change_hitter_stat(hitter_1, hitter_2);
//	
//}
//
//void change_pitcher(team& selected_team)
//{
//	cur(1, 32); cout << "[  ���  ]";
//
//	int pitcher_1 = sel(13, 6, 2, 14) - 1; if (pitcher_1 == 13) return;
//	int pitcher_2 = sel(13, 6, 2, 14) - 1; if (pitcher_2 == 13) return;
//
//	if (selected_team.IsStarter(pitcher_1) != selected_team.IsStarter(pitcher_2)) return;
//
//	if (pitcher_1 == pitcher_2) return;
//
//	int Save_index[10] = { 0, };
//
//	selected_team.Change_pitcher_stat(pitcher_1, pitcher_2);
//	
//}
//
//void change_team()
//{
//	// �Ե� �߰�
//}
//
//void control_team_manage(team& selected_team)
//{
//	int key = 49;
//	int prev_key = 49;
//
//	show_team_manage(1, selected_team);
//
//	while (key != 27) {
//		key = _getch();
//
//		if (key != prev_key || key == 54 || key == 55)
//
//			if (key >= 49 && key <= 57 && key != 54 && key != 55)
//				show_team_manage(key - 48, selected_team);
//
//			else if (key == 54 && prev_key >= 52 && prev_key <= 56)
//			{
//				change_pitcher(selected_team);
//				show_team_manage(prev_key - 48, selected_team);
//			}
//				
//			else if (key == 54 && prev_key >= 49 && prev_key <= 56)
//			{
//				change_hitter(selected_team);
//				show_team_manage(prev_key - 48, selected_team);
//			}
//			
//		if (key != 54)
//			prev_key = key;
//	}
//
//
//}
//
//
//void Initialize_member_name(vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
//{
//	for (int i = 0; i < 300; i++)
//	{
//		All_hitter_name.push_back(make_pair("Ÿ��", false));
//		All_pitcher_name.push_back(make_pair("����", false));
//	}
//
//	All_hitter_name[0].first = "������";
//	All_hitter_name[1].first = "�輺��";
//	All_hitter_name[2].first = "���ڿ�";
//	All_hitter_name[3].first = "�Ƿ���";
//	All_hitter_name[4].first = "����ȣ";
//	All_hitter_name[5].first = "������";
//	All_hitter_name[6].first = "������";
//	All_hitter_name[7].first = "������";
//	All_hitter_name[8].first = "������";
//	All_hitter_name[9].first = "������";
//	All_hitter_name[10].first = "������";
//	All_hitter_name[11].first = "������";
//	All_hitter_name[12].first = "������";
//	All_hitter_name[13].first = "������";
//	All_hitter_name[14].first = "������";
//	All_hitter_name[15].first = "������";
//	All_hitter_name[16].first = "������";
//
//	All_pitcher_name[0].first = "��ĳ��";
//	All_pitcher_name[1].first = "������";
//	All_pitcher_name[2].first = "���Ʒ�";
//	All_pitcher_name[3].first = "������";
//	All_pitcher_name[4].first = "��ä��";
//	All_pitcher_name[5].first = "�̽���";
//	All_pitcher_name[6].first = "��Թ�";
//	All_pitcher_name[7].first = "���濬";
//	All_pitcher_name[8].first = "��â��";
//	All_pitcher_name[9].first = "����";
//	All_pitcher_name[10].first = "������";
//	All_pitcher_name[11].first = "Ȳ����";
//	All_pitcher_name[12].first = "����ȯ";
//
//
//	
//}
//
//void game_setting()
//{
//	team Samsung;
//	team Lotte;
//
//	scoreboard Scoreboard;
//
//	int menu_choice = 0;
//
//	CursorView(false);
//	Set_FontColor(15);
//
//	vector <pair<string, bool>> All_hitter_name;
//	vector <pair<string, bool>> All_pitcher_name;
//
//	Initialize_member_name(All_hitter_name, All_pitcher_name);
//
//	Samsung.Initialize_teamset(0, All_hitter_name, All_pitcher_name);
//	Lotte.Initialize_teamset(0, All_hitter_name, All_pitcher_name);
//	
//
//	while (1)
//	{
//		menu_choice = show_mainmenu();
//		if (menu_choice == 1) game_select(show_game_select(), Samsung, Lotte, Scoreboard);
//		else if (menu_choice == 2) control_team_manage(Samsung);
//		else if (menu_choice == 3) control_team_manage(Lotte);
//		else if (menu_choice == 7) break;
//	}
//
//}
//
//
//int main()
//{
//	game_setting();
//	return 0;
//}
//
