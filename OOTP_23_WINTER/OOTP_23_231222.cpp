

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <mmsystem.h>
#include <vector>

using namespace std;


void Set_FontColor(int value);
void cur(short x, short y);

// 포지션 컨디션 선구안 정확도 파워 스피드 수비 오버롤

int All_hitter_stat[300][10] = {
{9, 3, 30, 30, 30, 30, 30, 60, 60, 60},
{3, 3, 40, 40, 40, 40, 40, 60, 60, 60},
{4, 3, 50, 50, 50, 50, 50, 60, 60, 60},
{5, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{6, 3, 70, 70, 70, 70, 70, 60, 60, 60},
{7, 3, 80, 80, 80, 80, 80, 60, 60, 60},
{8, 3, 90, 90, 90, 90, 90, 60, 60, 60},
{9, 3, 99, 99, 99, 99, 99, 60, 60, 60},
{2, 3, 80, 80, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{4, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{5, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{6, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{7, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{9, 3, 30, 30, 30, 30, 30, 60, 60, 60},
{3, 3, 40, 40, 40, 40, 40, 60, 60, 60},
{4, 3, 50, 50, 50, 50, 50, 60, 60, 60},
{5, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{6, 3, 70, 70, 70, 70, 70, 60, 60, 60},
{7, 3, 80, 80, 80, 80, 80, 60, 60, 60},
{8, 3, 90, 90, 90, 90, 90, 60, 60, 60},
{9, 3, 70, 50, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{4, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{5, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{6, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{7, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{8, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
0,
};










int All_pitcher_stat[300][10] = {
{1, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 80, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 70, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 50, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 10, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 50, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 70, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{1, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 70, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 80, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 90, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 50, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 30, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 90, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 90, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 80, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 70, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 50, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{3, 3, 60, 60, 60, 60, 60, 60, 60, 60},
{2, 3, 60, 60, 60, 60, 60, 60, 60, 60},

0,
};



class scoreboard
{
private:
	int board[2][12] = { 0, };

	int home_team[20] = { 0, };
	int away_team[20] = { 0, };

	int home_team_hitter_record[17][20] = { 0, };
	int away_team_pitcher_record[13][20] = { 0, };

	int home_pitching_value = 0;
	int away_pitching_value = 0;

	int now_inning = 0;

	int strike = 0;
	int ball = 0;
	int out_count = 0;

	bool Ishome = false;

	bool base_1 = false; int base_1_spd = 0;
	bool base_2 = false; int base_2_spd = 0;
	bool base_3 = false; int base_3_spd = 0;

	string stadium[1][9] = { " 잠실 야구장 ", " 대구 삼성 라이온즈 파크 ", " 기아 챔피언스 필드 ", " 사직 야구장 ", " 대전 이글스 파크 ", " 수원 야구장 "
	, " 고척 스카이돔 ", " 인천 야구장", " NC 다이노스 파크" };
	bool extend = true; // 9회 종료/12회 종료

public:
	void Initialize_base()
	{
		base_1 = false; base_1_spd = 0;
		base_2 = false; base_2_spd = 0;
		base_3 = false; base_3_spd = 0;
	}

	void Initialize_out_count()
	{
		out_count = 0;
	}

	void Initialize_scoreboard()
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				board[i][j] = 0;
			}
		}
	}

	bool Get_Isfull_1()
	{
		return base_1;
	}

	bool Get_Isfull_2()
	{
		return base_2;
	}

	bool Get_Isfull_3()
	{
		return base_3;
	}

	bool Get_Ishome()
	{
		return Ishome;
	}

	int Get_base_1_spd()
	{
		return base_1_spd;
	}

	int Get_base_2_spd()
	{
		return base_2_spd;
	}

	int Get_base_3_spd()
	{
		return base_3_spd;
	}

	int Get_RBI_point(int value)
	{
		return value;
	}

	int Get_now_inning()
	{
		return now_inning + 1;
	}

	int Get_out_count()
	{
		return out_count;
	}

	int Get_home_score()
	{
		int value = 0;

		for (int i = 0; i < 9; i++)
			value += board[1][i];

		return value;
	}

	int Get_away_score()
	{
		int value = 0;

		for (int i = 0; i < 9; i++)
			value += board[0][i];

		return value;
	}

	int Get_scoreboard(bool Ishome, int inning)
	{
		return board[Ishome][inning];
	}

	void Set_out_count(int value)
	{
		out_count += value;
	}

	void Show_base()
	{
		int base = 0;
		int row = 64;
		int col = 7;

		cur(row + 4, col + 1); if (base_1) cout << "■"; else cout << "□";
		cur(row + 2, col); if (base_2) cout << "■"; else cout << "□";
		cur(row, col + 1); if (base_3) cout << "■"; else cout << "□";
		cur(row + 2, col + 2); cout << "□";

	}

	void Show_scoreboard(bool Ishome, int inning) // 몇 회인지 업데이트
	{
		if (now_inning == inning) Set_FontColor(11);
		cout << board[Ishome][inning]; Set_FontColor(15);
	}

	void Set_now_inning(int value)
	{
		now_inning = value;
	}

	void Set_Ishome(bool value)
	{
		Ishome = value;
	}

	void Set_Isfull_1(bool value)
	{
		base_1 = value;
	}

	void Set_Isfull_2(bool value)
	{
		base_2 = value;
	}

	void Set_Isfull_3(bool value)
	{
		base_3 = value;
	}

	void Set_Base_spd(int base, int spd)
	{
		switch (base)
		{
		case 1:
			base_1_spd = spd; break;
		case 2:
			base_2_spd = spd; break;
		case 3:
			base_3_spd = spd; break;
		}
	}

	void Set_now_scoreboard(int score) // 몇 회인지 업데이트
	{
		board[Ishome][now_inning] += score;

		board[Ishome][9] += score;
	}

	void Set_now_hit(int value)
	{
		board[Ishome][10] += value;
	}

	void Set_now_ball(int value)
	{
		board[Ishome][11] += value;
	}

	int Update_base(int value, int now_hitter, int now_hitter_spd)
	{
		int RBI = 0;

		switch (value)
		{
		case 2:
			Set_now_ball(1);

			if (Get_Isfull_1() && Get_Isfull_2() && Get_Isfull_3())
			{
				Set_Base_spd(3, base_2_spd);
				Set_Base_spd(2, base_1_spd);
				Set_Base_spd(1, now_hitter_spd);
				Set_now_scoreboard(1);
				break;
			}

			if (Get_Isfull_1()) // 1루가 차있다면
			{
				if (Get_Isfull_2()) // 2루가 차있다면
				{
					Set_Isfull_3(true);
					Set_Base_spd(3, base_2_spd);
					Set_Base_spd(2, base_1_spd);
					Set_Base_spd(1, now_hitter_spd);
					break;
				}

				else
				{
					Set_Isfull_2(true);
					Set_Base_spd(2, base_1_spd);
					Set_Base_spd(1, now_hitter_spd);
				}
			}

			else // 1루가 차있지 않다면
			{
				Set_Isfull_1(true);
				Set_Base_spd(1, now_hitter_spd);
			}

			break;

		case 10:
			Set_now_hit(1);
			if (Get_Isfull_3())
			{
				Set_now_scoreboard(1);
				RBI++;
				Set_Isfull_3(false);
			}

			if (Get_Isfull_2()) // 2루가 차있다면
			{
				Set_Base_spd(3, base_2_spd);
				Set_Isfull_2(false);
				Set_Isfull_3(true);
			}

			if (Get_Isfull_1())
			{
				Set_Base_spd(2, base_1_spd);
				Set_Isfull_1(false);
				Set_Isfull_2(true);
			}

			Set_Base_spd(1, now_hitter_spd);
			Set_Isfull_1(true);

			break;
		case 20:
			Set_now_hit(1);

			if (Get_Isfull_3())
			{
				Set_now_scoreboard(1);
				RBI++;
				Set_Isfull_3(false);
				Set_Base_spd(3, 0);
			}

			if (Get_Isfull_2())
			{
				Set_now_scoreboard(1);
				RBI++;
				Set_Isfull_2(false);
				Set_Base_spd(2, 0);
			}

			if (Get_Isfull_1())
			{
				Set_Base_spd(3, base_1_spd);
				Set_Isfull_1(false);
				Set_Isfull_3(true);
				Set_Base_spd(1, 0);
			}

			Set_Base_spd(2, now_hitter_spd);
			Set_Isfull_2(true);

			break;
		case 40:
			Set_now_hit(1);
			Set_now_scoreboard(1); RBI++;
			if (Get_Isfull_1()) { Set_now_scoreboard(1); RBI++; }
			if (Get_Isfull_2()) { Set_now_scoreboard(1); RBI++; }
			if (Get_Isfull_3()) { Set_now_scoreboard(1); RBI++; }

			Set_Isfull_1(false);
			Set_Isfull_2(false);
			Set_Isfull_3(false);
			break;
		}

		return RBI;
	}



	void Show_result_test()
	{
		int value = 0;

		for (int i = 0; i < 9; i++)
			value += board[0][i];

		cout << "원정팀 : " << value << " 점 ";

		value = 0;

		for (int i = 0; i < 9; i++)
			value += board[1][i];

		cout << "홈팀 : " << value << " 점 ";

	}

};

class team
{
private:
	vector <pair<string, bool>> hitter; // 이름, 좌/우타
	vector <pair<string, bool>> pitcher;

	string team_stadium = "야구장";
	string team_name = "팀 이름";

	bool use_condition = true;
	bool data_save = true;

	int hitter_stat[17][10] = { 0, };
	int pitcher_stat[13][10] = { 0, };

	int hitter_record[17][20] = { 0, };
	int pitcher_record[13][20] = { 0, };

	int game_played = 0;

	int now_hitter = 0;
	int now_pitcher = 0;
	int pitched_ball = 0;

	int dominated_hitter = 0;
	int domanated_pitcher = 0;

	int team_sigvalue = 0;
	int playground = 0;

	int hitter_today_record[17][20] = { 0, };
	int pitcher_today_record[13][20] = { 0, };

	int played_game = 0;

	int win = 0;
	int lose = 0;
	int draw = 0;

	vector <int> used_pitcher;

	// At_game At_plate At_bat hit_1 hit_2 hit_3 hr bb so avg obp slg ops 
	// r rbi clu stl stl_fail err
	// 출장경기 타석 타수 안타 2루타 3루타 홈런 볼넷 삼진 타율 출루율 장타율 ops (13개)
	// 득점 타점 득타율 도루 도루실패 실책 경기출전여부 (7개)


public:
	int Get_hitter_member_size() { return hitter.size(); }
	int Get_now_hitter() { return now_hitter; }
	int Get_now_pitcher() { return now_pitcher; }
	int Get_hitter_stat(int row, int col) { return hitter_stat[row][col]; }
	int Get_pitcher_stat(int row, int col) { return pitcher_stat[row][col]; }
	int Get_team_sigvalue() { return team_sigvalue; }
	int Get_pitched_ball() { return pitched_ball; }


	double Get_now_hitter_avg(int value = 10) {
		if (value != 10) value = now_hitter;
		if (hitter_record[value][2] == 0) return 0;
		else return hitter_record[value][3] / hitter_record[value][2];
	}

	int Get_now_hitter_hr() { return hitter_record[now_hitter][6]; }

	void team_result_test()
	{
		cout << left << setw(3) << win << "승 " << setw(3) << draw << "무 " << setw(3) << lose << "패";
	}

	void Set_now_hitter(int value) { now_hitter = value; }
	void Set_now_pitcher(int value) { now_pitcher = value; }
	void Set_hitter_stat(int col, int result[]) { hitter_stat[now_hitter][col] = result[col]; }
	void Set_pitcher_stat(int col, int result[]) { pitcher_stat[now_pitcher][col] = result[col]; }
	void Set_played_game(int value) { played_game += value; }
	void Set_team_sigvalue(int value) { team_sigvalue = value; }
	void Set_pitched_ball(int value) { if (value == 0) pitched_ball = 0; pitched_ball += value; }

	void Set_game_result(bool Ishome, int away_score, int home_score)
	{
		if (Ishome)
		{
			if (home_score > away_score) win++;
			else if (home_score < away_score) lose++;
			else draw++;
		}

		else
		{
			if (home_score < away_score) win++;
			else if (home_score > away_score) lose++;
			else draw++;
		}

	}

	int IsHomeTeam() { return played_game % 2; }
	bool IsStarter(int row) { if (pitcher_stat[row][0] == 2) return false; return true; }
	bool Isdominated(int value) { return (value == dominated_hitter); }

	bool Isused_pitcher(int value)
	{
		for (int i = 0; i < used_pitcher.size(); i++)
			if (used_pitcher[i] == value)
				return true;

		return false;
	}

	void Initialize_member(int signalvalue, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
	{
		team_sigvalue = signalvalue;

		for (int i = team_sigvalue * 30; i < team_sigvalue * 30 + 17; i++)
			hitter.push_back(make_pair("타자", All_hitter_name[i].second));
		for (int i = team_sigvalue * 30 + 17; i < team_sigvalue * 30 + 30; i++)
			pitcher.push_back(make_pair("투수", All_pitcher_name[i].second));
	}

	void Initialize_used_pitcher()
	{
		used_pitcher.clear();
	}

	void Initialize_teamset(int Team_sigvalue, vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
	{
		Initialize_member(Team_sigvalue, All_hitter_name, All_pitcher_name);

		for (int i = 0; i < hitter.size(); i++)
		{
			hitter[i].first = All_hitter_name[i + team_sigvalue * 30].first;
			for (int j = 0; j < 10; j++)
				hitter_stat[i][j] = All_hitter_stat[i + team_sigvalue * 30][j];

			hitter_stat[i][7] = (hitter_stat[i][2] + hitter_stat[i][3] + hitter_stat[i][4] + hitter_stat[i][5] + hitter_stat[i][6]) / 5;
		}

		for (int i = 0; i < pitcher.size(); i++)
		{
			pitcher[i].first = All_pitcher_name[i + team_sigvalue * 30].first;
			for (int j = 0; j < 10; j++)
				pitcher_stat[i][j] = All_pitcher_stat[i + team_sigvalue * 30][j];
		}

		Update_hitter_condition();
		Update_pitcher_condition();
	}

	void Set_stat_FontColor(int value)
	{
		if (value >= 90) Set_FontColor(12);
		else if (value >= 80) Set_FontColor(9);
		else if (value >= 70) Set_FontColor(10);
		else if (value <= 50) Set_FontColor(8);
	}

	void Show_hitter_name(int value) { cout << hitter[value].first; return; }
	void Show_pitcher_name(int value) { cout << pitcher[value].first; return; }

	void Show_now_hitter_avg(int value = -1) {
		cout.precision(3);
		if (value == -1) value = now_hitter;
		if (hitter_record[value][2] == 0) cout << (double)0;
		else cout << (double)hitter_record[value][3] / hitter_record[value][2];
		cout.precision(2);
	}

	void Show_hitter_position(int row)
	{
		if (Isdominated(row))
		{
			Set_FontColor(14); cout << " 지  명 ";  Set_FontColor(15); return;
		}

		switch (hitter_stat[row][0])
		{
		case 2:
			Set_FontColor(12); cout << " 포  수 ";  Set_FontColor(15); break;
		case 3:
			Set_FontColor(9); cout << "  1루수 ";  Set_FontColor(15); break;
		case 4:
			Set_FontColor(9); cout << "  2루수 ";  Set_FontColor(15); break;
		case 5:
			Set_FontColor(9); cout << "  3루수 ";  Set_FontColor(15); break;
		case 6:
			Set_FontColor(9); cout << " 유격수 ";  Set_FontColor(15); break;
		case 7:
			Set_FontColor(10); cout << " 좌익수 ";  Set_FontColor(15); break;
		case 8:
			Set_FontColor(10); cout << " 중견수 ";  Set_FontColor(15); break;
		case 9:
			Set_FontColor(10); cout << " 우익수 ";  Set_FontColor(15); break;
		}

		return;
	}

	void Show_myteam(bool Iscolor)
	{
		if (Iscolor)
		{
			switch (team_sigvalue)
			{
			case 0: Set_FontColor(9); break;
			case 1: Set_FontColor(12); break;
			}
		}

		switch (team_sigvalue)
		{
		case 0: cout << " [ 삼성 라이온즈 ]"; break;
		case 1: cout << " [ 롯데 자이언츠 ]"; break;
		}

		Set_FontColor(15);
	}

	void Show_myteam_short(bool Iscolor)
	{
		if (Iscolor)
		{
			switch (team_sigvalue)
			{
			case 0: Set_FontColor(9); break;
			case 1: Set_FontColor(12); break;
			}
		}

		switch (team_sigvalue)
		{
		case 0: cout << " 삼성 "; break;
		case 1: cout << " 롯데 "; break;
		}

		Set_FontColor(15);
	}

	void Show_lobby_record()
	{
		int row = 130, col = 20;

		cur(row, col);

		switch (team_sigvalue)
		{
		case 0: cout << " [ 삼성 라이온즈 ]"; break;
		case 1: cout << " [ 롯데 자이언츠 ]"; break;
		}

		col += 2; cur(row, col);

		team_result_test();


	}

	void Update_hitter_condition()
	{
		int condition_rand = rand() % 5 + 1;

		for (int i = 0; i < hitter.size(); i++)
		{
			condition_rand = rand() % 10 + 1;
			hitter_stat[i][1] = condition_rand;
		}
	}

	void Show_hitter_condition(int row)
	{
		switch (hitter_stat[row][1])
		{
		case 1:
			Set_FontColor(10); cout << " 최상 ";  Set_FontColor(15); break;
		case 2: case 3:
			Set_FontColor(10); cout << " 좋음 ";  Set_FontColor(15); break;
		case 4: case 5: case 6: case 7:
			cout << " 보통 ";  break;
		case 8: case 9:
			Set_FontColor(8); cout << " 나쁨 ";  Set_FontColor(15); break;
		case 10:
			Set_FontColor(8); cout << " 최악 ";  Set_FontColor(15); break;
		}
	}

	void Show_hitter_stat(int situation, bool show_name, bool show_direction, bool show_value)
	{

		if (situation == 1)
		{
			for (int i = 0; i < hitter.size(); i++)
			{
				for (int j = 0; j < 7; j++)
				{
					if (show_value && j == 0)
					{
						if (i % 30 < 9) cout << " [  " << i + 1 << " 번  ] ";
						else cout << " [  후보  ] ";
					}
					if (show_name && j == 0) cout << right << setw(9) << hitter[i].first << "      ";
					if (show_direction && j == 0)
						if (hitter[i].second) cout << " 우타 ";
						else cout << " 좌타 ";

					if (j == 0)
					{
						cout << right << setw(13);
						Show_hitter_position(i);
					}

					else if (j == 1)
					{
						cout << right << setw(11);
						Show_hitter_condition(i);
					}


					else
					{
						Set_stat_FontColor(hitter_stat[i][j]);

						if (j == 2) cout << right << setw(10) << hitter_stat[i][j];
						else cout << right << setw(12) << hitter_stat[i][j];

						Set_FontColor(15);
					}


				}

				cout.precision(3);
				cout << fixed;


				if (hitter_record[i][2] == 0)
					cout << setw(15) << "0.000";
				else
					cout << setw(15) << (hitter_record[i][3] / (double)hitter_record[i][2]);

				cout << right << setw(10) << hitter_record[i][6] << "        ";

				cout << hitter_record[i][15];

				cout << "\n\n";
			}



			return;
		}



		if (situation == 2)
		{
			for (int i = 0; i < hitter.size(); i++)
			{

				if (show_value)
				{
					if (i % 30 < 9) cout << " [  " << i + 1 << " 번  ] ";
					else cout << " [  후보  ] ";
				}
				if (show_name) cout << right << setw(9) << hitter[i].first;

				cout << fixed;
				cout.precision(3);

				cout << right << setw(10);

				for (int j = 1; j <= 8; j++)
					cout << hitter_record[i][j] << setw(12);

				// 출장경기 타석 타수 안타 2루타 3루타 홈런 볼넷 삼진 타율 출루율 장타율 ops (13개)

				cout << (hitter_record[i][3] / (double)hitter_record[i][2]) << setw(12);
				cout << ((hitter_record[i][3] + hitter_record[i][7]) / (double)hitter_record[i][1]) << setw(12);
				cout << ((hitter_record[i][3] + hitter_record[i][4] + hitter_record[i][6] * 3) / (double)hitter_record[i][2]) << setw(12);



				cout << "\n\n";
			}



			return;
		}


	}

	int Change_now_pitcher(bool Isauto, int col)
	{
		int rand_pitcher = rand() % 8 + 5;

		used_pitcher.push_back(now_pitcher);

		for (int i = 0; i < 100; i++)
		{
			if (!Isused_pitcher(rand_pitcher))
			{
				Set_pitched_ball(0);
				if (!Isauto)
				{
					cur(48, col);
					cout << "  [ 투수 교체 ] "; Show_pitcher_name(now_pitcher);
					cout << " -> "; Show_pitcher_name(rand_pitcher);
				}
				now_pitcher = rand_pitcher;
				return pitcher_stat[now_pitcher][4];
			}

			rand_pitcher = rand() % 8 + 5;
		}

		return 100;
	}

	void Change_hitter_stat(int hitter_1, int hitter_2)
	{
		int Save_index_stat[10] = { 0, };
		int Save_index_record[20] = { 0, };

		vector <pair<string, bool>> Save_hitter;

		Save_hitter.push_back(make_pair("타자", 0));

		Save_hitter[0].first = hitter[hitter_1].first;
		Save_hitter[0].second = hitter[hitter_1].second;

		for (int i = 0; i < 10; i++)
			Save_index_stat[i] = hitter_stat[hitter_1][i];
		memcpy(hitter_stat[hitter_1], hitter_stat[hitter_2], sizeof(Save_index_stat));
		memcpy(hitter_stat[hitter_2], Save_index_stat, sizeof(Save_index_stat));

		for (int i = 0; i < 20; i++)
			Save_index_record[i] = hitter_record[hitter_1][i];
		memcpy(hitter_record[hitter_1], hitter_record[hitter_2], sizeof(Save_index_record));
		memcpy(hitter_record[hitter_2], Save_index_record, sizeof(Save_index_record));

		hitter[hitter_1].first = hitter[hitter_2].first;
		hitter[hitter_1].second = hitter[hitter_2].second;

		hitter[hitter_2].first = Save_hitter[0].first;
		hitter[hitter_2].second = Save_hitter[0].second;


	}

	void Change_hitter_record(int hitter_1, int hitter_2)
	{
		int Save_index[20] = { 0, };
		vector <pair<string, bool>> Save_hitter;

		Save_hitter.push_back(make_pair("타자", 0));

		Save_hitter[0].first = hitter[hitter_1].first;
		Save_hitter[0].second = hitter[hitter_1].second;

		for (int i = 0; i < 20; i++)
			Save_index[i] = hitter_record[hitter_1][i];



		memcpy(hitter_record[hitter_1], hitter_record[hitter_2], sizeof(Save_index));
		memcpy(hitter_record[hitter_2], Save_index, sizeof(Save_index));

		hitter[hitter_1].first = hitter[hitter_2].first;
		hitter[hitter_1].second = hitter[hitter_2].second;

		hitter[hitter_2].first = Save_hitter[0].first;
		hitter[hitter_2].second = Save_hitter[0].second;
	}

	void Set_hitter_record(int row, int stat_1, int stat_2, int stat_3, int stat_4, int stat_5, int stat_6,
		int stat_7, int stat_8, int stat_9, int stat_10, int stat_11, int stat_12, int stat_13, int stat_14)
	{
		hitter_record[row][0] += stat_1; hitter_record[row][1] += stat_2;
		hitter_record[row][2] += stat_3; hitter_record[row][3] += stat_4;
		hitter_record[row][4] += stat_5; hitter_record[row][5] += stat_6;
		hitter_record[row][6] += stat_7; hitter_record[row][7] += stat_8;
		hitter_record[row][8] += stat_9; hitter_record[row][9] += stat_10;
		hitter_record[row][10] += stat_11; hitter_record[row][11] += stat_12;
		hitter_record[row][12] += stat_13; hitter_record[row][13] += stat_14;

		// At_plate At_bat hit_1 hit_2 hit_3 hr bb so r rbi clu stl stl_fail err
		// 출장경기 타석 타수 안타 2루타 3루타 홈런 볼넷 삼진 득점 (10개)
		// 타점 도루 도루실패 실책 (4개)
	}

	void Set_pitcher_record(int row, int stat_1, int stat_2, int stat_3, int stat_4, int stat_5, int stat_6,
		int stat_7, int stat_8, int stat_9, int stat_10, int stat_11, int stat_12, int stat_13, int stat_14)
	{
		pitcher_record[row][0] += stat_1; pitcher_record[row][1] += stat_2;
		pitcher_record[row][2] += stat_3; pitcher_record[row][3] += stat_4;
		pitcher_record[row][4] += stat_5; pitcher_record[row][5] += stat_6;
		pitcher_record[row][6] += stat_7; pitcher_record[row][7] += stat_8;
		pitcher_record[row][8] += stat_9; pitcher_record[row][9] += stat_10;
		pitcher_record[row][10] += stat_11; pitcher_record[row][11] += stat_12;
		pitcher_record[row][12] += stat_13; pitcher_record[row][13] += stat_14;

		// At_plate At_bat hit_1 hit_2 hit_3 hr bb so r rbi clu stl stl_fail err
		// 출장경기 타석 타수 안타 2루타 3루타 홈런 볼넷 삼진 득점 (10개)
		// 타점 도루 도루실패 실책 (4개)
	}

	void Show_pitcher_position(int row)
	{

		switch (row % 30 + 1)
		{
		case 1: case 2: case 3: case 4: case 5:
			if (row % 30 < 5) cout << " " << row % 30 + 1 << " 선발 ";
			else cout << "  선발  ";  break;
		case 6: case 7:
			cout << " 필승조 ";  break;
		case 8: case 9:
			cout << " 추격조 ";  break;
		case 10:
			cout << "  셋업  ";  break;
		case 11: case 12:
			cout << "  롱릴  ";  break;
		case 13:
			cout << " 마무리 ";  break;
		}
	}

	void Update_pitcher_condition()
	{
		int condition_rand = rand() % 5 + 1;

		for (int i = 0; i < pitcher.size(); i++)
		{
			condition_rand = rand() % 10 + 1;
			pitcher_stat[i][1] = condition_rand;
		}
	}

	void Show_pitcher_condition(int row)
	{
		switch (hitter_stat[row][1])
		{
		case 1:
			Set_FontColor(10); cout << " 최상 ";  Set_FontColor(15); break;
		case 2: case 3:
			Set_FontColor(10); cout << " 좋음 ";  Set_FontColor(15); break;
		case 4: case 5: case 6: case 7:
			cout << " 보통 ";  break;
		case 8: case 9:
			Set_FontColor(8); cout << " 나쁨 ";  Set_FontColor(15); break;
		case 10:
			Set_FontColor(8); cout << " 최악 ";  Set_FontColor(15); break;
		}
	}

	void Show_pitcher_stat(int situation, bool show_name, bool show_direction, bool show_value)
	{

		for (int i = 0; i < pitcher.size(); i++)
		{
			for (int j = 0; j < 7; j++)
			{
				if (show_value && j == 0)
				{
					cout << " ["; Show_pitcher_position(i); cout << "] ";
				}

				if (show_name && j == 0) cout << right << setw(9) << pitcher[i].first << "      ";
				if (show_direction && j == 0)
					if (pitcher[i].second) cout << " 우투 ";
					else cout << " 좌투 ";

				else if (j == 1)
				{
					cout << "      ";
					Show_pitcher_condition(i);
					cout << "        ";
				}

				else cout << pitcher_stat[i][j] << "          ";

			}

			for (int j = 1; j < 6; j++)
			{
				if (j == 1) cout << pitcher_record[i][j] / 3 << "." << pitcher_record[i][j] % 3 << "          ";
				else cout << pitcher_record[i][j] << "          ";
			}


			cout << "\n\n";
		}

		if (situation == 0) return;

		if (situation == 1)
		{
		}
	}

	void Change_pitcher_stat(int pitcher_1, int pitcher_2)
	{
		int Save_index[10] = { 0, };
		vector <pair<string, bool>> Save_pitcher;

		Save_pitcher.push_back(make_pair("투수", 0));

		Save_pitcher[0].first = pitcher[pitcher_1].first;
		Save_pitcher[0].second = pitcher[pitcher_1].second;

		for (int i = 0; i < 10; i++)
			Save_index[i] = pitcher_stat[pitcher_1][i];


		memcpy(pitcher_stat[pitcher_1], pitcher_stat[pitcher_2], sizeof(Save_index));
		memcpy(pitcher_stat[pitcher_2], Save_index, sizeof(Save_index));

		pitcher[pitcher_1].first = pitcher[pitcher_2].first;
		pitcher[pitcher_1].second = pitcher[pitcher_2].second;

		pitcher[pitcher_2].first = Save_pitcher[0].first;
		pitcher[pitcher_2].second = Save_pitcher[0].second;


	}



	void Show_lineup()
	{
		for (int i = 0; i < 9; i++)
			cout << hitter[i].second << "\n";
	}


	void Update_hitter_RBI(int RBI)
	{
		hitter_record[now_hitter][15] += RBI;
	}

};

class option
{
private:
	bool recording = false;
	bool music = true;
	bool condition = true;
	bool auto_play = true;
	int my_team = 0;
	int sleep_time = 2;

public:
	bool Get_Onauto_play() { return auto_play; }
	bool Get_Onrecording() { return recording; }
	bool Get_Oncondition() { return condition; }
	bool Get_Onmusic() { return music; }
	int Get_my_team() { return my_team; }
	int Get_sleep_time() { return sleep_time; }

	bool Set_Onauto_play(bool value) { auto_play = value; }
	bool Set_Onrecording(bool value) { recording = value; }
	bool Set_Oncondition(bool value) { condition = value; }
	bool Set_Onmusic(bool value) { music = value; }
	void Set_my_team(int value) { my_team = value; }
	void Set_sleep_time(int value) { sleep_time = value; }
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

void Set_FontColor(int value)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
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


int get_hitter_rand_stat(int value, int selected_stat, int Save_hitter_index[])
{
	double return_hitter_value = rand() % (Save_hitter_index[selected_stat] + 1 + value) * 1.5;

	if (selected_stat == 2) return_hitter_value = 35 + (rand() % Save_hitter_index[selected_stat] + 1) / 3;

	if (selected_stat == 3) return_hitter_value = 43 + (rand() % Save_hitter_index[selected_stat] + 1) / 8 +
		(rand() % Save_hitter_index[selected_stat] + 1) / 16; // 정확이라면 선구안도 일부 반영

	if (selected_stat == 4) return_hitter_value = (rand() % Save_hitter_index[selected_stat] + 1) * 1.5 - 10;

	switch (Save_hitter_index[1])
	{
	case 1:
		return return_hitter_value * 1.2;
	case 2: case 3:
		return return_hitter_value * 1.1;
	case 4: case 5: case 6: case 7:
		return return_hitter_value * 1.0;
	case 8: case 9:
		return return_hitter_value * 0.9;
	case 10:
		return return_hitter_value * 0.8;
	}
}

int Update_pitcher_health(int value)
{
	return value;
}

int Change_pitcher()
{
	return 1;
}

int get_pitcher_rand_stat(int value, int selected_stat, int Save_pitcher_index[])
{
	int return_pitcher_value = rand() % Save_pitcher_index[selected_stat] + 1 + value;

	if (selected_stat == 3) return_pitcher_value += (rand() % Save_pitcher_index[selected_stat] + 1) / 3; // 구위라면 제구도 일부 반영

	return return_pitcher_value;
}

void show_scoreboard_art(scoreboard& Scoreboard, team& home_team, team& away_team)
{
	//system("cls");

	cur(35, 46); cout << "[ 게임 스킵 : Esc | 타자 교체 : Backspace | 투수 교체 : Enter ]";
	cur(35, 48); cout << "[  투수 교체는 자동으로 이루어지며, 교체는 1번만 가능합니다.  ]";

	cur(45, 11); cout << "┌──────────────────────────────────────────┐ ";
	cur(45, 12); cout << "│                                          │ ";
	cur(45, 13); cout << "│                                          │ ";
	cur(45, 14); cout << "│                                          │ ";
	cur(45, 15); cout << "│                                          │ ";
	cur(45, 16); cout << "│                                          │ ";
	cur(45, 17); cout << "└──────────────────────────────────────────┘ ";

	cur(25, 1); cout << ("┌───────────────────────────────────────────┌───────────────────────────────┐  ");
	cur(25, 2); cout << ("│      [1] [2] [3] [4] [5] [6] [7] [8] [9]  │  [R]  [H]  [B]                │  ");
	cur(25, 3); cout << ("│                                           │                               │  ");
	cur(25, 4); cout << ("│                                           │                               │  ");
	cur(25, 5); cout << ("└───────────────────────────────────────────└───────────────────────────────┘  ");

	cur(26, 3); home_team.Show_myteam_short(true);
	cur(26, 4); away_team.Show_myteam_short(true);

	Scoreboard.Show_base();

	cur(33, 3);



	for (int i = 0; i < 12; i++)
	{
		Scoreboard.Show_scoreboard(0, i); cout << "   ";
		if (i == 8) cur(73, 3);
		if (i >= 9 && Scoreboard.Get_scoreboard(0, i) < 10) cout << " ";
	}

	cur(33, 4);

	for (int i = 0; i < 12; i++)
	{
		Scoreboard.Show_scoreboard(1, i); cout << "   ";
		if (i == 8) cur(73, 4);
		if (i >= 9 && Scoreboard.Get_scoreboard(1, i) < 10) cout << " ";
	}

	cur(42, 8 + (away_team.Get_now_hitter() + 1) * 2 - 2); cout << "  ";
	//cur(47, 7); cout << "                                                         ";
	cur(0, 0); cout << "                                   " << '\n';

}

int show_hit_result(bool Initializing, bool Show_name, int change_line, int result, scoreboard& Scoreboard, team& attack_team, option& Option)
{
	int a = rand() % 3 + 0;
	int b = rand() % 4 + 0;

	static int line = 0;

	if (change_line != 0)
	{
		line++;
		return line * 2 + 17;
	}

	if (Show_name)
	{
		cur(50, line * 2 + 19);
		cout << attack_team.Get_now_hitter() + 1 << ". "; attack_team.Show_hitter_name(attack_team.Get_now_hitter());
		Sleep(300);
		return 0;
	}

	if (line > 9)
	{
		line = 0;
		for (int i = 19; i <= 50; i++) // 칸 지우기
			cur(44, i); cout << "                                              ";
	}

	if (Initializing)
	{
		line = 0;
		return 0;
	}

	if (!Option.Get_Onauto_play())
	{
		cur(60, line * 2 + 19);
		switch (result) {
		case 1: cout << "  [ 삼진 ]";
			if (Scoreboard.Get_out_count() == 2) { cur(49, line * 2 + 21); Sleep(200); cout << " [ 공수교대 ] "; } break;
		case 2: cout << "  [ 볼넷 ]"; break;
		case 5: cout << "  [ 땅볼 ]";
			if (Scoreboard.Get_out_count() == 2) { cur(49, line * 2 + 21); Sleep(200); cout << " [ 공수교대 ] "; } break;
		case 6: cout << "  [ 뜬공 ]";
			if (Scoreboard.Get_out_count() == 2) { cur(49, line * 2 + 21); Sleep(200); cout << " [ 공수교대 ] "; } break;
		case 10: cout << "  [ 안타 ]"; break;
		case 20: cout << "  [ 2루타 ]"; break;
		case 40: cout << "  [ 홈런 ]  [ "; cout << attack_team.Get_now_hitter_hr(); cout << "호 ]"; break;

		}


		Sleep(300);
		line++;

		system("cls");
	}

	return 0;
}


void show_scoreboard(bool Ishome, int strike, int ball, int out, team& home_team, team& away_team, scoreboard& Scoreboard, option Option)
{
	show_scoreboard_art(Scoreboard, home_team, away_team);

	cout << " [ " << (Scoreboard.Get_now_inning()) << "회";
	if (!Ishome) cout << " 초 ] " << '\n' << '\n' << '\n' << '\n' << '\n';
	else cout << " 말 ] " << '\n' << '\n' << '\n' << '\n' << '\n';

	away_team.Show_myteam(true); cout << right << setw(115);
	home_team.Show_myteam(true); cout << '\n' << '\n';

	cout.precision(3); cout << fixed;

	Set_FontColor(15);

	if (Ishome)
	{
		cout << "  " << (away_team.Get_now_hitter() + 1) << "번 타자 : [ "; away_team.Show_hitter_name(away_team.Get_now_hitter()); cout << " ] " <<
			" [ 타율 : " << away_team.Get_now_hitter_avg() << " ]  [ " << away_team.Get_now_hitter_hr() << " 홈런 ]";



		cur(42, 8 + (away_team.Get_now_hitter()) * 2); cout << "  "; cur(42, 26); cout << "  ";
		cur(42, 8 + (away_team.Get_now_hitter() + 1) * 2); cout << "◀";

		cur(46, 14); cout << "                  □ = " << home_team.Get_pitched_ball();

		cur(86, 8);

		cout.precision(2);
		cout << fixed;

		cout << " 현재 투수 : [ "; home_team.Show_pitcher_name(home_team.Get_now_pitcher()); cout << " ] [ 평균자책점 : " << " 0.00 " << " ] " << '\n' << '\n';


	}

	else
	{
		cout.precision(2);
		cout << fixed;

		cout << " " << " 현재 투수 : [ "; away_team.Show_pitcher_name(away_team.Get_now_pitcher()); cout << " ] [ 평균자책점 : " << " 0.00 " << " ] ";



		cur(93, 8 + (home_team.Get_now_hitter()) * 2); cout << "  "; cur(93, 26); cout << "  ";
		cur(93, 8 + (home_team.Get_now_hitter() + 1) * 2); cout << "▶";

		cur(46, 14); cout << "                  □ = " << away_team.Get_pitched_ball();

		cur(82, 8);

		cout.precision(3);
		cout << fixed;

		cout << (home_team.Get_now_hitter() + 1) << "번 타자 : [ "; home_team.Show_hitter_name(home_team.Get_now_hitter()); cout << " ] " <<
			" [ 타율 : " << home_team.Get_now_hitter_avg() << " ]  [ " << home_team.Get_now_hitter_hr() << " 홈런 ]" << '\n' << '\n';



	}

	Set_FontColor(14);
	cur(85, 2);
	cout << "  S ";
	switch (strike) {
	case 0:
		cout << " ○ ○" << '\n'; break;
	case 1:
		cout << " ● ○" << '\n'; break;
	case 2: case 3:
		cout << " ● ●" << '\n'; break;
	}

	Set_FontColor(10);
	cur(85, 3);
	cout << "  B ";
	switch (ball) {
	case 0:
		cout << " ○ ○ ○" << '\n'; break;
	case 1:
		cout << " ● ○ ○" << '\n'; break;
	case 2:
		cout << " ● ● ○" << '\n'; break;
	case 3: case 4:
		cout << " ● ● ●" << '\n'; break;
	}

	Set_FontColor(12);
	cur(85, 4);
	cout << "  O ";
	switch (Scoreboard.Get_out_count()) {
	case 0:
		cout << " ○ ○" << '\n'; break;
	case 1:
		cout << " ● ○" << '\n'; break;
	case 2: case 3:
		cout << " ● ●" << '\n'; break;
	}

	Set_FontColor(15);

	cur(2, 10);

	for (int i = 0; i < 17; i++)
	{

		if (i % 30 < 9) cout << " [  " << i + 1 << " 번  ] ";
		else cout << " [  후보  ] ";

		away_team.Show_hitter_name(i); cout << "  ";
		away_team.Show_hitter_position(i); cout << "  ";
		away_team.Show_now_hitter_avg(i);

		cur(95, 10 + i * 2);
		if (i % 30 < 9) cout << " [  " << i + 1 << " 번  ] ";
		else cout << " [  후보  ] ";

		home_team.Show_hitter_name(i); cout << "  ";
		home_team.Show_hitter_position(i); cout << "  ";
		home_team.Show_now_hitter_avg(i);

		cout << '\n' << '\n' << "  ";
	}

	if (Ishome) show_hit_result(false, true, 0, 0, Scoreboard, away_team, Option);
	else show_hit_result(false, true, 0, 0, Scoreboard, home_team, Option);

}

int battle_hit_run_result(bool hit, int type, int Save_hitter_index[], int Save_pitcher_index[])
{
	// 타자 : 0 포지션 1 컨디션 2 선구안 3 정확도 4 파워 5 스피드 6 수비 7 오버롤
	// 투수 : 0 포지션 1 컨디션 2 제  구 3 구  위 4 체  력 5 구  속 6 멘  탈 7 오버롤

	// 0 파울 1 삼진 2 볼넷

	// 1 1루타 2 2루타 3 3루타 4 홈런 5 땅볼 6 뜬공 7 번트 8 실책 9 도루
	// 0 주자 진루 실패 1 주자 진루 성공 2 병살 3 삼중살

	int hitter_speed = get_hitter_rand_stat(0, 5, Save_hitter_index) + get_hitter_rand_stat(0, 5, Save_hitter_index); // 상대 수비수의 수비력은 차후 추가

	if (type == 1)
		if (hitter_speed > 60) return 11;
		else return 10;

	if (type == 2)
		if (hitter_speed > 60) return 21;
		else return 20;


}

int battle_hit_power_result(bool hit, int Save_hitter_index[], int Save_pitcher_index[])
{
	int result = get_hitter_rand_stat(0, 4, Save_hitter_index) - get_pitcher_rand_stat(10, 3, Save_pitcher_index);

	if (hit)
	{
		if (result > 30) return 40;
		if (get_hitter_rand_stat(0, 4, Save_hitter_index) - get_pitcher_rand_stat(10, 3, Save_pitcher_index) >= 10) return 20;
		return 10;
	}

	else
	{
		if (result > 0)
			return 6;
		else
			return 5;
	}


}

int battle_hit_result(int Save_hitter_index[], int Save_pitcher_index[])
{
	int compare_value = get_hitter_rand_stat(0, 3, Save_hitter_index) - get_pitcher_rand_stat(17, 3, Save_pitcher_index);

	if (compare_value > 0)
		return battle_hit_power_result(true, Save_hitter_index, Save_pitcher_index); // 안타 종류 반환

	else
		return battle_hit_power_result(false, Save_hitter_index, Save_pitcher_index);

}

void update_result(int value, bool update_value, option Option, team& attack_team, team& defence_team, scoreboard& Scoreboard)
{
	int RBI = Scoreboard.Update_base(value, attack_team.Get_now_hitter(), 5);

	if (update_value)
		attack_team.Update_hitter_RBI(RBI);


	// 0 포지션 1 컨디션 2 선구안 3 정확도 4 파워 5 스피드 6 수비 7 오버롤


	// 0 파울 1 삼진 2 볼넷

	// 1 1루타 2 2루타 3 3루타 4 홈런 5 땅볼 6 뜬공 7 번트 8 실책 9 도루
	// 0 주자 진루 실패 1 주자 진루 성공 2 병살 3 삼중살

	return;


	//cout << "제 X구 아웃";
}

int update_game_record(int value, bool update_value, int& now_pitcher_hp, option Option, team& attack_team, team& defence_team, scoreboard& Scoreboard)
{
	int out = false;

	// 출장경기 타석 타수 안타 2루타 3루타 홈런 / 볼넷 삼진 득점 타점 도루 도루실패 실책
	// 출장경기 이닝 삼진 볼넷 실점 데드볼 / 피안타 피2루타 피3루타 피홈런 땅볼 뜬공

	// 0 파울 1 삼진 2 볼넷

	// 1 1루타 2 2루타 3 3루타 4 홈런 5 땅볼 6 뜬공 7 번트 8 실책 9 도루
	// 0 주자 진루 실패 1 주자 진루 성공 2 병살 3 삼중살

	switch (value)
	{
	case 1:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 1, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		out = true; break;
	case 2:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 0, 0, 0, 0, 0, /**/  1, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 0, 0, 1, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		now_pitcher_hp -= 3; break;
	case 5:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 1, 0, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 1, 0);
		out = true; break;
	case 6:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 1, 0, 0, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 1);
		out = true; break;
	case 10:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 1, 0, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 0, 0, 0, 0, 0, 0, /**/  1, 0, 0, 0, 0, 0, 0);
		now_pitcher_hp -= 3; break;
	case 20:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 1, 1, 0, 0, /**/  0, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 0, 0, 0, 0, 0, 0, /**/  0, 1, 0, 0, 0, 0, 0);
		now_pitcher_hp -= 5; break;
	case 40:
		attack_team.Set_hitter_record(attack_team.Get_now_hitter(), 0, 1, 1, 1, 0, 0, 1, /**/  0, 0, 0, 0, 0, 0, 0);
		defence_team.Set_pitcher_record(defence_team.Get_now_pitcher(), 0, 0, 0, 0, 0, 0, 0, /**/  0, 0, 0, 1, 0, 0, 0);
		now_pitcher_hp -= 10; break;
	}

	update_result(value, true, Option, attack_team, defence_team, Scoreboard);
	show_hit_result(false, false, 0, value, Scoreboard, attack_team, Option);



	return out;
}

void test(team& attack_team, team& defence_team, int now_hp)
{
	defence_team.Show_pitcher_name(defence_team.Get_now_pitcher());
	cout << " " << now_hp;
	cout << '\n';

	Sleep(1000);
}

void battle(team& attack_team, team& defence_team, option Option, scoreboard& Scoreboard, int inning, bool Isinitialize, bool Ishome)
{
	int Save_hitter_index[10] = { 0, };
	int Save_pitcher_index[10] = { 0, };

	int strike = 0;
	int ball = 0;
	int pitching_value = 0; // 던진 공 수
	int check_getch = 0;

	bool out = false;

	static int now_hitter_home = 0;
	static int now_hitter_away = 0;
	static int now_pitcher_home_hp = 0;
	static int now_pitcher_away_hp = 0;

	if (Isinitialize)
	{
		now_hitter_home = 0;
		now_hitter_away = 0;
		now_pitcher_home_hp = defence_team.Get_pitcher_stat(defence_team.Get_now_pitcher(), 4) * 2;
		now_pitcher_away_hp = attack_team.Get_pitcher_stat(attack_team.Get_now_pitcher(), 4) * 2;
		return;
	}

	if (now_pitcher_away_hp <= 0)
	{
		now_pitcher_away_hp = defence_team.Change_now_pitcher(Option.Get_Onauto_play(), show_hit_result(false, true, 1, 0, Scoreboard, defence_team, Option));
	}


	if (now_pitcher_home_hp <= 0)
	{
		now_pitcher_home_hp = defence_team.Change_now_pitcher(Option.Get_Onauto_play(), show_hit_result(false, true, 1, 0, Scoreboard, defence_team, Option));
	}


	if (Scoreboard.Get_Ishome())
	{
		attack_team.Set_now_hitter(now_hitter_home % 9);
		now_hitter_home++;
	}

	else
	{
		attack_team.Set_now_hitter(now_hitter_away % 9);
		now_hitter_away++;
	}



	for (int i = 0; i < 10; i++)
	{
		Save_hitter_index[i] = attack_team.Get_hitter_stat(attack_team.Get_now_hitter(), i);
		Save_pitcher_index[i] = defence_team.Get_pitcher_stat(defence_team.Get_now_pitcher(), i);
	}

	if (!Option.Get_Onauto_play())
	{
		if (!Ishome) show_scoreboard(Ishome, strike, ball, out, attack_team, defence_team, Scoreboard, Option);
		else show_scoreboard(Ishome, strike, ball, out, defence_team, attack_team, Scoreboard, Option);
	}

	while (1)
	{
		pitching_value++;

		if (get_hitter_rand_stat(0, 2, Save_hitter_index) > get_pitcher_rand_stat(22, 2, Save_pitcher_index)) // 볼
			ball++;

		else if (get_hitter_rand_stat(10, 3, Save_hitter_index) < get_pitcher_rand_stat(0, 3, Save_pitcher_index)) // 파울
		{
			if (strike < 2)
				strike++;
		}

		else if (get_hitter_rand_stat(0, 2, Save_hitter_index) < get_pitcher_rand_stat(14, 2, Save_pitcher_index)) // 스트라이크
			strike++;

		else // 타격
		{
			if (Ishome) out = update_game_record(battle_hit_result(Save_hitter_index, Save_pitcher_index), true, now_pitcher_away_hp,
				Option, attack_team, defence_team, Scoreboard);

			else out = update_game_record(battle_hit_result(Save_hitter_index, Save_pitcher_index), true, now_pitcher_home_hp,
				Option, attack_team, defence_team, Scoreboard);

			break;
		}

		if (strike == 3)
		{
			if (Ishome) out = update_game_record(1, true, now_pitcher_away_hp, Option, attack_team, defence_team, Scoreboard);
			else out = update_game_record(1, true, now_pitcher_home_hp, Option, attack_team, defence_team, Scoreboard);

			// At_plate At_bat hit_1 hit_2 hit_3 hr bb so r rbi clu stl stl_fail err
			// 타석 타수 안타 2루타 3루타 홈런 / 볼넷 삼진 득점 타점 도루 도루실패 실책
			break;
		}

		if (ball == 4)
		{
			if (Ishome) out = update_game_record(2, true, now_pitcher_away_hp, Option, attack_team, defence_team, Scoreboard);
			else out = update_game_record(2, true, now_pitcher_home_hp, Option, attack_team, defence_team, Scoreboard);
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		attack_team.Set_hitter_stat(i, Save_hitter_index);
		defence_team.Set_pitcher_stat(i, Save_pitcher_index);
	}

	defence_team.Set_pitched_ball(pitching_value);

	if (Ishome) now_pitcher_away_hp -= pitching_value;
	else now_pitcher_home_hp -= pitching_value;

	//if (Ishome) test(attack_team, defence_team, now_pitcher_away_hp);
	//else test(attack_team, defence_team, now_pitcher_home_hp);

	Scoreboard.Set_out_count(out);
}

void playball(team& home_team, team& away_team, scoreboard& Scoreboard, option Option) // 홈팀 경기인가 아닌가
{
	int game = 0;
	static int acc_game = 0;
	bool initialize = true;

	system("cls");

	while (game < 144)
	{
		initialize = true;

		home_team.Set_now_pitcher(acc_game % 5);
		away_team.Set_now_pitcher(acc_game % 5);

		home_team.Initialize_used_pitcher();
		away_team.Initialize_used_pitcher();

		home_team.Update_hitter_condition(); home_team.Update_pitcher_condition();
		away_team.Update_hitter_condition(); away_team.Update_pitcher_condition();

		battle(away_team, home_team, Option, Scoreboard, 0, true, 0);

		for (int i = 0; i < 9; i++)
		{
			Scoreboard.Initialize_base();
			Scoreboard.Initialize_out_count();
			Scoreboard.Set_Ishome(false);
			show_hit_result(true, false, 0, 0, Scoreboard, home_team, Option);

			Scoreboard.Set_now_inning(i);

			while (Scoreboard.Get_out_count() != 3)
			{
				battle(away_team, home_team, Option, Scoreboard, i, false, false);
				initialize = false;
			}

			Scoreboard.Initialize_base();
			Scoreboard.Initialize_out_count();
			Scoreboard.Set_Ishome(true);
			show_hit_result(true, false, 0, 0, Scoreboard, home_team, Option);
			

			if (i == 8 && (Scoreboard.Get_home_score() > Scoreboard.Get_away_score()))
				break;

			while (Scoreboard.Get_out_count() != 3)
			{
				battle(home_team, away_team, Option, Scoreboard, i, false, true);
				if (i == 8 && (Scoreboard.Get_home_score() > Scoreboard.Get_away_score()))
					break;
			}

		}

		home_team.Set_game_result(true, Scoreboard.Get_away_score(), Scoreboard.Get_home_score());
		away_team.Set_game_result(false, Scoreboard.Get_away_score(), Scoreboard.Get_home_score());
		home_team.Set_pitched_ball(0);
		away_team.Set_pitched_ball(0);
		Scoreboard.Initialize_scoreboard();

		game++;
		acc_game++;

	}

	home_team.Set_played_game(1);
	away_team.Set_played_game(1);

	return;
}

int show_game_select()
{
	int row = 15, col = 8, col_gap = 4, col_initial = 0;

	col_initial = col + col_gap;

	system("cls");
	cur(row, col);
	cout << " [    메 뉴    ]"; col += col_gap; cur(row, col);
	cout << " [ 1 ] 리그 경기"; col += col_gap; cur(row, col);
	cout << " [ 2 ] 친선 경기"; col += col_gap; cur(row, col);
	cout << " [ 3 ] 단판 경기"; col += col_gap; cur(row, col);
	cout << " [ 4 ] 뒤로 가기"; col += col_gap; cur(row, col);

	return sel(row + 25, col_initial, 4, 4);
}

void game_select(int value, team& home_team, team& away_team, scoreboard& Scoreboard, option Option)
{
	if (value == 1)
	{
		if (home_team.IsHomeTeam())
			playball(home_team, away_team, Scoreboard, Option);
		else
			playball(away_team, home_team, Scoreboard, Option);
	}

}

void show_team_manage(int value, team& selected_team)
{
	system("cls");

	cur(1, 1);
	cout << "  [ Esc : 나가기 ] [ [1], [2], [3] : 타자 정보 ] [ [4], [5] : 투수 정보 ] [ [6] : 선수 교체 ] [ [7] : 트레이드 ]  [ [8], [9] : 팀 정보 ]";
	cur(9, 4);


	if (value == 1)
	{
		cout << "     [ 이 름 ]  [ 투  타 ]  [ 포지션 ]  [ 컨디션 ]  [ 선구안 ]  [ 정확도 ]  [ 파  워 ]  [ 스피드 ]  [ 수  비 ]   [ 타  율 ]  [ 홈  런 ]  [ 타  점 ] " << '\n' << '\n';
		cur(0, 6);
		selected_team.Show_hitter_stat(1, true, true, true);
	}

	else if (value == 2)
	{
		cout << "     [ 이 름 ]  [ 타  석 ]  [ 타  수 ]  [ 안  타 ]   [ 2루타 ]  [ 3루타 ]   [ 홈  런 ]  [ 볼 넷 ]  [ 삼  진 ]   [ 도  루 ]  [ 도루사 ]  [  OPS  ]" << '\n' << '\n';
		cur(0, 6);
		selected_team.Show_hitter_stat(2, true, false, true);
	}


	else if (value == 3)
	{
		cout << "     [ 이 름 ]  [ 출  장 ]  [ 타  석 ]  [ 타  수 ]  [ 타  율 ]  [ 출루율 ]  [ 장타율 ]  [  OPS  ]  [ 득점권 ]   [ 실  책 ]  [ 오버롤 ]" << '\n' << '\n';
		cur(0, 6);
		selected_team.Show_hitter_stat(3, true, true, true);
	}


	else if (value == 4)
	{
		cout << "     [ 이 름 ]  [ 투  타 ]  [ 컨디션 ]  [ 제  구 ]  [ 구  위 ]  [ 체  력 ]  [ 구  속 ]  [ 멘  탈 ]  [ 타  율 ]  [ 홈  런 ]  [ 도  루 ] " << '\n' << '\n';
		cur(0, 6);
		selected_team.Show_pitcher_stat(1, true, true, true);
	}


	// At_game At_plate At_bat hit_1 hit_2 hit_3 hr bb so avg obp slg ops 
	// r rbi clu stl err
	// 출장경기 타석 타수 안타 2루타 3루타 홈런 볼넷 삼진 타율 출루율 장타율 ops (13개)
	// 득점 타점 득타율 도루 도루실패 실책 (5개)

}



void pixel_art(int my_team)
{
	int col = 1, row = 70;

	int col2 = 5, row2 = 120;

	col = 1; cur(row, col);

	if (my_team == 0)
	{
		cur(row, col);


		Set_FontColor(9);

		cout << "                             .....                                    "; col++; cur(row, col);
		cout << "                          ,~~-,,,-~-                                  "; col++; cur(row, col);
		cout << "                        ,---,--~--,--,                                "; col++; cur(row, col);
		cout << "                       ~,-~----~----,-,                               "; col++; cur(row, col);
		cout << "                     .~,-----,--,------,                              "; col++; cur(row, col);
		cout << "                     -,-----.~ .~,-----~                              "; col++; cur(row, col);
		cout << "                    ,,--------  ~---~,,~                              "; col++; cur(row, col);
		cout << "                    ~-------~-  ~---,--.                              "; col++; cur(row, col);
		cout << "                   .~,--------  ~,-~,                                 "; col++; cur(row, col);
		cout << "                   .~-------.-   -.                                   "; col++; cur(row, col);
		cout << "                   .---------~                    .                   "; col++; cur(row, col);
		cout << "                   .~--------,-                 ,-~                   "; col++; cur(row, col);
		cout << "                    ~,---------,              ,-- -                   "; col++; cur(row, col);
		cout << "                    ~-----------.          .-~,--,,                   "; col++; cur(row, col);
		cout << "                     ----------,~.       .---,---~.                   "; col++; cur(row, col);
		cout << "                     -,--------~ ~     .~-.------~                    "; col++; cur(row, col);
		cout << "                     .~,-----------  ,-,----------                    "; col++; cur(row, col);
		cout << "                      .----------,--~-,--~-----~,.                    "; col++; cur(row, col);
		cout << "                       --~---------,--,-.--------                     "; col++; cur(row, col);
		cout << "                        -,----------,--~,------.-                     "; col++; cur(row, col);
		cout << "                         ~,--------.-  ~------~,-                     "; col++; cur(row, col);
		cout << "                         ----------.- .~--------.                     "; col++; cur(row, col);
		cout << "                       -~-.,--------~ ,--------~                      "; col++; cur(row, col);
		cout << "                    ,--,--,~--------~ ,.-------~                      "; col++; cur(row, col);
		cout << "                 .---,--,--~-------.- ~,------.,                      "; col++; cur(row, col);
		cout << "               -~,,---,~-. ..------.- ---------.                      "; col++; cur(row, col);
		cout << "               ~,------.   ..-------,,,------,-                       "; col++; cur(row, col);
		cout << "               ~----~.     ,,------~ ~-------,-                       "; col++; cur(row, col);
		cout << "               ,,~--.-     ~-----,-. ~,-------,                       "; col++; cur(row, col);
		cout << "                -,-----. .--------- .~--------                        "; col++; cur(row, col);
		cout << "                ,-----,---,----,--  ..~------~                        "; col++; cur(row, col);
		cout << "                 --,----------,-,   -.------.,        ..              "; col++; cur(row, col);
		cout << "                  ,~,,-~~~-,,~~.    ~------~,.       .~~~             "; col++; cur(row, col);
		cout << "                    ,-------,.      -------,~.      --,,-             "; col++; cur(row, col);
		cout << "                                   ---------~   .,~~,-~,.             "; col++; cur(row, col);
		cout << "                                   -,-------~---,,------              "; col++; cur(row, col);
		cout << "                                   ~,------,-,,-~-----.-              "; col++; cur(row, col);
		cout << "                                  ,,~--------------~-,-,              "; col++; cur(row, col);
		cout << "                                 -------------~--------               "; col++; cur(row, col);
		cout << "                                -,---------~-,.-~~-.                  "; col++; cur(row, col);
		cout << "                                ~-----~-,,----,.                      "; col++; cur(row, col);
		cout << "                                ~,----,,~~-.                          "; col++; cur(row, col);
		cout << "                               ,-,,-~-,.                              "; col++; cur(row, col);
		cout << "                               ,---,                                  "; col++; cur(row, col);
		cout << "                               ,                                      "; col++; cur(row, col);

		Set_FontColor(15);
	}

}

void show_lobby_inf(int value, team Samsung, team Lotte)
{
	switch (value)
	{
	case 0: Samsung.Show_lobby_record(); break;
	case 1: Lotte.Show_lobby_record(); break;
	}

}

int show_mainmenu(option Option, team Samsung, team Lotte)
{
	int row = 15, col = 8, col_gap = 4, col_initial = 0;

	col_initial = col + col_gap;

	cur(row, col);
	cout << " [    메 뉴    ]"; col += col_gap; cur(row, col);
	cout << " [ 1 ] 경기 시작"; col += col_gap; cur(row, col);
	cout << " [ 2 ] 선수 관리"; col += col_gap; cur(row, col);
	cout << " [ 3 ] 선수 영입"; col += col_gap; cur(row, col);
	cout << " [ 4 ] 게임 설정"; col += col_gap; cur(row, col);
	cout << " [ 5 ] 게임 종료"; col += col_gap; cur(row, col);


	return sel(row + 25, col_initial, 4, 5);
}

int setting_mainmenu(option Option, team Samsung, team Lotte)
{
	system("cls");
	pixel_art(Option.Get_my_team());
	show_lobby_inf(Option.Get_my_team(), Samsung, Lotte);
	return show_mainmenu(Option, Samsung, Lotte);

}



void change_hitter(team& selected_team)
{
	cur(1, 40); cout << "[  취소  ]";

	int hitter_1 = sel(13, 6, 2, 18) - 1; if (hitter_1 == 17) return;
	int hitter_2 = sel(13, 6, 2, 18) - 1; if (hitter_2 == 17) return;

	if (hitter_1 == hitter_2) return;

	if ((hitter_1 >= 9 || hitter_2 >= 9) && selected_team.Get_hitter_stat(hitter_1, 0) != selected_team.Get_hitter_stat(hitter_2, 0))
		if (!(selected_team.Isdominated(hitter_1) || selected_team.Isdominated(hitter_2)))
			return;

	int Save_index[10] = { 0, };

	selected_team.Change_hitter_stat(hitter_1, hitter_2);
	selected_team.Change_hitter_record(hitter_1, hitter_2);

}

void change_pitcher(team& selected_team)
{
	cur(1, 32); cout << "[  취소  ]";

	int pitcher_1 = sel(13, 6, 2, 14) - 1; if (pitcher_1 == 13) return;
	int pitcher_2 = sel(13, 6, 2, 14) - 1; if (pitcher_2 == 13) return;

	if (selected_team.IsStarter(pitcher_1) != selected_team.IsStarter(pitcher_2)) return;

	if (pitcher_1 == pitcher_2) return;

	int Save_index[10] = { 0, };

	selected_team.Change_pitcher_stat(pitcher_1, pitcher_2);

}

void change_team()
{
	// 롯데 추가
}

void control_team_manage(team& selected_team)
{
	int key = 49;
	int prev_key = 49;

	show_team_manage(1, selected_team);

	while (key != 27) {
		key = _getch();

		if (key != prev_key || key == 54 || key == 55)

			if (key >= 49 && key <= 57 && key != 54 && key != 55)
				show_team_manage(key - 48, selected_team);

			else if (key == 54 && prev_key >= 52 && prev_key <= 56)
			{
				change_pitcher(selected_team);
				show_team_manage(prev_key - 48, selected_team);
			}

			else if (key == 54 && prev_key >= 49 && prev_key <= 56)
			{
				change_hitter(selected_team);
				show_team_manage(prev_key - 48, selected_team);
			}

		if (key != 54)
			prev_key = key;
	}


}

void Initialize_member_name(vector <pair<string, bool>>& All_hitter_name, vector <pair<string, bool>>& All_pitcher_name)
{
	for (int i = 0; i < 300; i++)
	{
		All_hitter_name.push_back(make_pair("타자", false));
		All_pitcher_name.push_back(make_pair("투수", false));
	}

	All_hitter_name[0].first = "김지찬";
	All_hitter_name[1].first = "김성윤";
	All_hitter_name[2].first = "구자욱";
	All_hitter_name[3].first = "피렐라";
	All_hitter_name[4].first = "강민호";
	All_hitter_name[5].first = "오재일";
	All_hitter_name[6].first = "류지혁";
	All_hitter_name[7].first = "김현준";
	All_hitter_name[8].first = "이재현";
	All_hitter_name[9].first = "엄재우";
	All_hitter_name[10].first = "이재찬";
	All_hitter_name[11].first = "박병준";
	All_hitter_name[12].first = "이승형";
	All_hitter_name[13].first = "고스트";
	All_hitter_name[14].first = "히드라";
	All_hitter_name[15].first = "드라군";
	All_hitter_name[16].first = "메운디";

	All_hitter_name[30].first = "김지찬2";
	All_hitter_name[31].first = "김성윤2";
	All_hitter_name[32].first = "구자욱2";
	All_hitter_name[33].first = "피렐라2";
	All_hitter_name[34].first = "강민호2";
	All_hitter_name[35].first = "오재일2";
	All_hitter_name[36].first = "류지혁2";
	All_hitter_name[37].first = "김현준2";
	All_hitter_name[38].first = "이재현2";
	All_hitter_name[39].first = "엄재우2";
	All_hitter_name[40].first = "이재찬2";
	All_hitter_name[41].first = "박병준2";
	All_hitter_name[42].first = "이승형2";
	All_hitter_name[43].first = "고스트2";
	All_hitter_name[44].first = "히드라2";
	All_hitter_name[45].first = "드라군2";
	All_hitter_name[46].first = "메운디2";

	All_pitcher_name[0].first = "뷰캐넌";
	All_pitcher_name[1].first = "원태인";
	All_pitcher_name[2].first = "수아레";
	All_pitcher_name[3].first = "백정현";
	All_pitcher_name[4].first = "최채흥";
	All_pitcher_name[5].first = "이승현";
	All_pitcher_name[6].first = "우규민";
	All_pitcher_name[7].first = "최충연";
	All_pitcher_name[8].first = "양창섭";
	All_pitcher_name[9].first = "김대우";
	All_pitcher_name[10].first = "장필준";
	All_pitcher_name[11].first = "황동재";
	All_pitcher_name[12].first = "오승환";

	All_pitcher_name[30].first = "뷰캐넌2";
	All_pitcher_name[31].first = "원태인2";
	All_pitcher_name[32].first = "수아레2";
	All_pitcher_name[33].first = "백정현2";
	All_pitcher_name[34].first = "최채흥2";
	All_pitcher_name[35].first = "이승현2";
	All_pitcher_name[36].first = "우규민2";
	All_pitcher_name[37].first = "최충연2";
	All_pitcher_name[38].first = "양창섭2";
	All_pitcher_name[39].first = "김대우2";
	All_pitcher_name[40].first = "장필준2";
	All_pitcher_name[41].first = "황동재2";
	All_pitcher_name[42].first = "오승환2";



}



void game_setting()
{
	srand((unsigned)time(NULL));

	team Samsung;
	team Lotte;

	scoreboard Scoreboard;

	option Option;

	int menu_choice = 0;

	CursorView(false);
	Set_FontColor(15);

	vector <pair<string, bool>> All_hitter_name;
	vector <pair<string, bool>> All_pitcher_name;

	Initialize_member_name(All_hitter_name, All_pitcher_name);

	Samsung.Initialize_teamset(0, All_hitter_name, All_pitcher_name);
	Lotte.Initialize_teamset(1, All_hitter_name, All_pitcher_name);

	while (1)
	{
		menu_choice = setting_mainmenu(Option, Samsung, Lotte);
		if (menu_choice == 1) game_select(show_game_select(), Samsung, Lotte, Scoreboard, Option);
		else if (menu_choice == 2) control_team_manage(Samsung);
		else if (menu_choice == 3) control_team_manage(Lotte);
		else if (menu_choice == 5) break;
	}

}

int main()
{
	game_setting();
	return 0;
}