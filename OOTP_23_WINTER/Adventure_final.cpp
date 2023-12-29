/*

#include <iostream>
#include <vector>
#include <queue>
#include <windows.h>
#include <conio.h>

using namespace std;

class airplane {
private:
	int airnum = 0; // 비행기 번호 (식별자)
	int fuel = 100; // 연료
	int now_fuel = 100; // 현재 연료
	int loss_fuel = 1; // 단위 시간당 잃는 연료

	int waiting_takeoff = 0; // 평균 이륙 대기 시간
	int waiting_landing = 0; // 평균 착륙 대기 시간
	int landing_remain_fuel = 0; // 착륙 시 남아 있는 제한 시간의 평균
	int emergency_landing_count = 0; // 긴급 착륙

	bool accident = false; // 사고여부
	bool flying = false; // 비행여부
	bool now_landing = false; // 이번 단위 시간에서의 착륙 여부

public:
	void set_initial(int num)
	{
		cout << " [ " << num << " 번째 비행기 ] \n\n";

		cout << " 비행기의 번호를 입력하십시오 : ";
		cin >> airnum;

		cout << "\n 비행기의 연료량을 입력하십시오 : ";
		cin >> fuel;
		now_fuel = fuel;

		cout << "\n 단위 시간당 소모하는 연료량을 입력하십시오 : ";
		cin >> loss_fuel;

		system("cls");
	}
	void set_loss(int input) // 단위 시간당 잃는 연료
	{
		loss_fuel = input;
	}
	void engage_fuel()
	{
		now_fuel += get_loss_fuel() * 2;
		set_waiting_takeoff(1);
		if (now_fuel > fuel)
			now_fuel = fuel;

		if (get_waiting_landing() != 0) waiting_landing = 0;
	}
	void using_fuel()
	{
		now_fuel -= loss_fuel;
		set_waiting_landing(1);

		if (waiting_takeoff != 0) waiting_takeoff = 0;
	}
	void set_flying(bool flying_now)
	{
		if (flying_now == true)
		{
			flying = true;
		}

		else
		{
			flying = false;
		}

	}
	void print_status()
	{
		int airnum = get_airnum(-1);
		cout << "\n " << airnum << "번 : ";

		if (check_accident())
		{
			cout << "사고 \n\n ";
			return;
		}


		else if (check_flying())
			cout << "비행중 ";

		else
			cout << "대기중 ";

		cout << " ( 비행 가능 시간 : " << get_limittime() << "초 ) \n\n ";

	}
	void set_accident(bool check)
	{
		accident = check;
	}
	void set_now_landing(bool check)
	{
		now_landing = check;
	}
	void set_emergency_landing_count(int add)
	{
		emergency_landing_count += add;
	}
	void set_waiting_takeoff(int add)
	{
		waiting_takeoff += add;
	}
	void set_waiting_landing(int add)
	{
		waiting_landing += add;
	}



	int get_limittime() // 제한시간
	{
		return (now_fuel / loss_fuel);
	}
	int get_airnum(int value)
	{
		if (value == -1)
			return airnum;
		if (value == 1)
			return airnum * 10 + 1; // 이륙 (날고있음)
		else
			return airnum * 10; // 착륙 (안 날고있음)
	}
	int get_now_fuel()
	{
		return now_fuel;
	}
	int get_loss_fuel()
	{
		return loss_fuel;
	}
	int get_status()
	{
		if (check_accident()) // 사용가능여부 확인 (사고유무)
			return -1; // 사용불가

		else if (check_flying()) // check_need_landing();
			if (get_limittime() <= 1)
				return 11; // 착륙필요
			else
				return 10; // 비행중

		else  // 이륙하지 않고 큐에 남아있는 상태
		{
			//engage_fuel();
			if (check_engaged_full())
				return 1; // 이륙필요
			else
				return 0;
		}

	}
	int get_emergency_landing_count()
	{
		return emergency_landing_count;
	}
	int get_waiting_landing()
	{
		return waiting_landing;
	}

	pair<int, int> get_waiting_takeoff(pair<int, int>& cal_result)
	{
		if (waiting_takeoff)
		{
			cal_result.first++;
			cal_result.second += waiting_takeoff;
		}

		return cal_result;

	}
	pair<int, int> get_now_landing(pair<int, int>& cal_result)
	{
		if (now_landing)
		{
			cal_result.first++;
			cal_result.second += get_limittime();
		}

		return cal_result;
	}
	pair<int, int> get_waiting_landing(pair<int, int>& cal_result)
	{
		if (now_landing)
		{
			cal_result.first++;
			cal_result.second += get_waiting_landing();
		}

		return cal_result;
	}

	bool check_accident() // 사고여부 반환
	{
		return accident;
	}
	bool check_flying() // 비행 여부
	{
		if (accident) flying = false;
		return flying;
	}
	bool check_engaged_full()
	{
		if (now_fuel == fuel) return true;
		else return false;
	}
};

void cur(short x, short y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void print_result_timeavg(airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5)
{
	pair<int, int> cal_result;

	cout << "\n\n 착륙 시 남아 있는 제한 시간의 평균 : ";

	air_1.get_now_landing(cal_result);
	air_2.get_now_landing(cal_result);
	air_3.get_now_landing(cal_result);
	air_4.get_now_landing(cal_result);
	air_5.get_now_landing(cal_result);

	if (cal_result.first == 0) cout << " 착륙한 비행기 없음 ";
	else cout << cal_result.second / (float)cal_result.first << " 초 ";

	cal_result.first = 0;
	cal_result.second = 0;

	cout << "\n\n 평균 이륙 대기 시간 : "; // 이번 단위 시간에 이/착륙한 비행기의 값만 넣어야 한다

	air_1.get_waiting_takeoff(cal_result);
	air_2.get_waiting_takeoff(cal_result);
	air_3.get_waiting_takeoff(cal_result);
	air_4.get_waiting_takeoff(cal_result);
	air_5.get_waiting_takeoff(cal_result);

	if (cal_result.first == 0) cout << " 이륙 대기중인 비행기 없음 ";
	else cout << cal_result.second / (float)cal_result.first << " 초 ";

	cal_result.first = 0;
	cal_result.second = 0;

	cout << "\n\n 평균 착륙 대기 시간 : ";

	air_1.get_waiting_landing(cal_result);
	air_2.get_waiting_landing(cal_result);
	air_3.get_waiting_landing(cal_result);
	air_4.get_waiting_landing(cal_result);
	air_5.get_waiting_landing(cal_result);

	if (cal_result.first == 0) cout << " 착륙 대기중인 비행기 없음 ";
	else cout << cal_result.second / (float)cal_result.first << " 초 ";



}

bool print_result(int test_time, queue<int>& airport1_takeoff, queue<int>& airport1_landing, queue<int>& airport2_takeoff,
	queue<int>& airport2_landing, queue<int>& airport3,
	airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5,
	bool airport3_used_takeoff) // 사고, 비상착륙 추가
{
	int check_getch = 0;

	system("cls"); cur(1, 1);

	cout << "\n [ Esc : 스킵 | Backspace : 일시정지 ] ";

	if (test_time == 0) cout << "\n\n\n [ 초기 상태 ] \n ";
	else cout << "\n\n\n [ " << test_time << "초 경과 ] \n ";

	air_1.print_status();
	air_2.print_status();
	air_3.print_status();
	air_4.print_status();
	air_5.print_status();

	cout << "\n\n [ 비행중 ] : ";

	if (air_1.check_flying()) { cout << " [ " << air_1.get_airnum(air_1.check_flying()); cout << " ] "; }
	if (air_2.check_flying()) { cout << " [ " << air_2.get_airnum(air_2.check_flying()); cout << " ] "; }
	if (air_3.check_flying()) { cout << " [ " << air_3.get_airnum(air_3.check_flying()); cout << " ] "; }
	if (air_4.check_flying()) { cout << " [ " << air_4.get_airnum(air_4.check_flying()); cout << " ] "; }
	if (air_5.check_flying()) { cout << " [ " << air_5.get_airnum(air_5.check_flying()); cout << " ] "; }

	cout << "\n\n [ 1번 공항 ]\n  [ 이륙 큐 ] : ";

	if (airport1_takeoff.size() > 0)
		cout << airport1_takeoff.front() << " ";

	cout << "\n  [ 착륙 큐 ] : ";

	if (airport1_landing.size() > 0)
	{
		cout << airport1_landing.front() << " ";
		if (airport1_landing.size() == 2)
			cout << airport1_landing.back() << " ";
	}

	cout << "\n\n [ 2번 공항 ]\n  [ 이륙 큐 ] : ";

	if (airport2_takeoff.size() > 0)
		cout << airport2_takeoff.front() << " ";

	cout << "\n  [ 착륙 큐 ] : ";

	if (airport2_landing.size() > 0)
	{
		cout << airport2_landing.front() << " ";
		if (airport2_landing.size() == 2)
			cout << airport2_landing.back() << " ";
	}

	cout << "\n\n [ 3번 공항 ] \n";

	if (airport3_used_takeoff)
		cout << "  [ 이륙 큐 ] : " << airport3.front();
	else if (airport3.size() > 0)
		cout << "  [ 착륙 큐 ] : " << airport3.front();

	print_result_timeavg(air_1, air_2, air_3, air_4, air_5);
	cout << "\n\n ---------------------------------------------------------------------------";

	for (int i = 0; i < 30; i++)
	{
		Sleep(20);

		if (_kbhit())
		{
			check_getch = _getch();

			if (check_getch == 27)
			{
				system("cls"); cur(1, 1);
				return true;
			}

			if (check_getch == 8)
			{
				cout << "\n\n 일시정지 되었습니다.";
				system("PAUSE");
			}
		}

	}

	return false;

}

int initial_setting(airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5,
	queue<int>& airport1_landing, queue<int>& airport2_landing, int test_time)
{

	cur(1, 3); air_1.set_initial(1);
	cur(1, 3); air_2.set_initial(2);
	cur(1, 3); air_3.set_initial(3);
	cur(1, 3); air_4.set_initial(4);
	cur(1, 3); air_5.set_initial(5);

	airport1_landing.push(air_1.get_airnum(air_1.check_flying()));
	airport1_landing.push(air_2.get_airnum(air_2.check_flying()));
	airport2_landing.push(air_3.get_airnum(air_3.check_flying()));
	airport2_landing.push(air_4.get_airnum(air_4.check_flying()));
	airport2_landing.push(air_5.get_airnum(air_5.check_flying()));

	cout << "테스트 시간 입력 : "; cin >> test_time;

	return test_time;

}

void unit_setting(vector <pair<int, int>>& landing_priority, vector <pair<bool, int>>& takeoff_priority,
	queue<int>& airport1_takeoff, queue<int>& airport1_landing, queue<int>& airport2_takeoff, queue<int>& airport2_landing, queue<int>& airport3,
	bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5, int& test_time)
{
	airport1_used = false;
	airport2_used = false;
	airport3_used_takeoff = false;

	landing_priority.clear();
	takeoff_priority.clear();

	air_1.set_now_landing(airport1_used);
	air_2.set_now_landing(airport1_used);
	air_3.set_now_landing(airport1_used);
	air_4.set_now_landing(airport1_used);
	air_5.set_now_landing(airport1_used);

	test_time--;

	while (!airport1_takeoff.empty())
		airport1_takeoff.pop();
	while (!airport2_takeoff.empty())
		airport2_takeoff.pop();
	while (!airport3.empty())
		if (airport3.front() % 2 == 1)
			airport3.pop();
		else
			break;

}

void conclusion(airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5)
{
	int emergency_landing = 0;
	int accident = 0;

	emergency_landing += air_1.get_emergency_landing_count();
	emergency_landing += air_2.get_emergency_landing_count();
	emergency_landing += air_3.get_emergency_landing_count();
	emergency_landing += air_4.get_emergency_landing_count();
	emergency_landing += air_5.get_emergency_landing_count();

	if (air_1.check_accident()) accident++;
	if (air_2.check_accident()) accident++;
	if (air_3.check_accident()) accident++;
	if (air_4.check_accident()) accident++;
	if (air_5.check_accident()) accident++;

	cout << "\n\n [ 최종 결과 ] \n\n ";
	cout << "비상 착륙 횟수 : " << emergency_landing << " 회 \n\n ";
	cout << "사고 횟수 / 비율 : " << accident << " 회 / " << 100 * ((float)accident / 5) << " % \n ";
}

void airplane_initiate(int air_num, bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	queue<int>& airport1_landing, queue<int>& airport2_landing, queue<int>& airport3,
	airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5)
{
	if (airport1_landing.size() > 0)
	{
		if (airport1_landing.back() == air_num)
			swap(airport1_landing.front(), airport1_landing.back());
		if (airport1_landing.front() == air_num)
			airport1_landing.pop();
	}


	if (airport2_landing.size() > 0)
	{
		if (airport2_landing.back() == air_num)
			swap(airport2_landing.front(), airport2_landing.back());
		if (airport2_landing.front() == air_num)
			airport2_landing.pop();
	}

	if (airport3.size() > 0)
		if (airport3.front() == air_num)
			airport3.pop();

}

void update_situation(int air_num, bool flying, airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4,
	airplane& air_5)
{

	if (air_1.get_airnum(-1) == air_num / 10)
		if (flying)
			air_1.set_flying(flying);
		else
		{
			air_1.set_now_landing(!flying);
			air_1.set_flying(flying);
			if (air_1.get_limittime() <= 0)
				air_1.set_emergency_landing_count(1);
		}

	if (air_2.get_airnum(-1) == air_num / 10)
		if (flying)
			air_2.set_flying(flying);
		else
		{
			air_2.set_now_landing(!flying);
			air_2.set_flying(flying);
			if (air_2.get_limittime() <= 0)
				air_2.set_emergency_landing_count(1);
		}

	if (air_3.get_airnum(-1) == air_num / 10)
		if (flying)
			air_3.set_flying(flying);
		else
		{
			air_3.set_now_landing(!flying);
			air_3.set_flying(flying);
			if (air_3.get_limittime() <= 0)
				air_3.set_emergency_landing_count(1);
		}

	if (air_4.get_airnum(-1) == air_num / 10)
		if (flying)
			air_4.set_flying(flying);
		else
		{
			air_4.set_now_landing(!flying);
			air_4.set_flying(flying);
			if (air_4.get_limittime() <= 0)
				air_4.set_emergency_landing_count(1);
		}

	if (air_5.get_airnum(-1) == air_num / 10)
		if (flying)
			air_5.set_flying(flying);
		else
		{
			air_5.set_now_landing(!flying);
			air_5.set_flying(flying);
			if (air_5.get_limittime() <= 0)
				air_5.set_emergency_landing_count(1);
		}

}

int takeoff_airplane(int airport_num, int air_num, bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	queue<int>& airport1_takeoff, queue<int>& airport1_landing, queue<int>& airport2_takeoff,
	queue<int>& airport2_landing, queue<int>& airport3, airplane& air_1, airplane& air_2, airplane& air_3,
	airplane& air_4, airplane& air_5)
{
	if (airport_num == 0) return airport_num; // 이륙불가

	else
	{
		// 비행기 상태를 비행 상태로 변경 set_flying(true);
		// 비행기 내부에 대기중인 큐에서 비행기 값 제거 (비행 시작했으므로)
		// 비행하면 단위 시간동안 해당 큐 이용불가

		if (airport_num == 1 && airport1_used == false)
		{
			airport1_takeoff.push(air_num + 1);
			airport1_used = true;
			airplane_initiate(air_num, airport1_used, airport2_used, airport3_used_takeoff,
				airport1_landing, airport2_landing, airport3, air_1, air_2, air_3, air_4, air_5); // 이륙때만 필요

			update_situation(air_num, true, air_1, air_2, air_3, air_4, air_5);
		}

		if (airport_num == 2 && airport2_used == false)
		{
			airport2_takeoff.push(air_num + 1);
			airport2_used = true;
			airplane_initiate(air_num, airport1_used, airport2_used, airport3_used_takeoff,
				airport1_landing, airport2_landing, airport3, air_1, air_2, air_3, air_4, air_5); // 이륙때만 필요

			update_situation(air_num, true, air_1, air_2, air_3, air_4, air_5);
		}

		if (airport_num == 3 && airport3_used_takeoff == false)
		{
			airport3.push(air_num + 1);
			airport3_used_takeoff = true;
			airplane_initiate(air_num, airport1_used, airport2_used, airport3_used_takeoff,
				airport1_landing, airport2_landing, airport3, air_1, air_2, air_3, air_4, air_5); // 이륙때만 필요

			update_situation(air_num, true, air_1, air_2, air_3, air_4, air_5);
		}


	}

	return airport_num;
}

int landing_airplane(int airport_num, int air_num, bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	queue<int>& airport1_landing, queue<int>& airport2_landing, queue<int>& airport3,
	airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5)
{
	if (airport_num == -1) // 사고
		return airport_num;

	if (airport_num == 0) // 착륙불가
	{

		if (air_1.get_airnum(-1) == air_num / 10 && air_1.get_limittime() <= 0)
			air_1.set_accident(true);
		if (air_2.get_airnum(-1) == air_num / 10 && air_2.get_limittime() <= 0)
			air_2.set_accident(true);
		if (air_3.get_airnum(-1) == air_num / 10 && air_3.get_limittime() <= 0)
			air_3.set_accident(true);
		if (air_4.get_airnum(-1) == air_num / 10 && air_4.get_limittime() <= 0)
			air_4.set_accident(true);
		if (air_5.get_airnum(-1) == air_num / 10 && air_5.get_limittime() <= 0)
			air_5.set_accident(true);
		else
			return airport_num;

		update_situation(air_num, false, air_1, air_2, air_3, air_4, air_5);
		return airport_num;
	}

	if (airport_num == 1 && airport1_used == false)
	{
		airport1_landing.push(air_num - 1);
		airport1_used = true;

		update_situation(air_num, false, air_1, air_2, air_3, air_4, air_5);
	}

	if (airport_num == 2 && airport2_used == false)
	{
		airport2_landing.push(air_num - 1);
		airport2_used = true;

		update_situation(air_num, false, air_1, air_2, air_3, air_4, air_5);
	}

	if (airport_num == 3 && airport3.size() == 0)
	{
		airport3.push(air_num - 1); // airport3에 있는 값이 이륙인지 출력인지 확인 + airport3에 들어갈 조건인 '비상 착륙' 만족하는지 확인
		update_situation(air_num, false, air_1, air_2, air_3, air_4, air_5);
	}

	else
		return airport_num;

	return airport_num;
}


int search_takeoff_airport(int air_num, queue<int>& airport1_landing, queue<int>& airport2_landing,
	queue<int>& airport3) // 이륙위치 반환
{
	// 비행기는 착륙한 곳에서만 이륙 가능하도록 설계

	if (airport1_landing.size() > 0)
		if (airport1_landing.front() == air_num || airport1_landing.back() == air_num)
			return 1;
	if (airport2_landing.size() > 0)
		if (airport2_landing.front() == air_num || airport2_landing.back() == air_num)
			return 2;
	if (airport3.size() > 0)
		if (airport3.front() == air_num || airport3.back() == air_num)
			return 3;

		else
			return 0;
}

int search_landing_airport(int situation, bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	queue<int>& airport1_landing, queue<int>& airport2_landing, queue<int>& airport3) // 착륙위치 반환
{
	if (airport1_used == false && airport1_landing.size() == 0)
		return 1;
	else if (airport2_used == false && airport2_landing.size() == 0)
		return 2;

	else if (airport1_used == false && airport1_landing.size() < 2)
		return 1;
	else if (airport2_used == false && airport2_landing.size() < 2)
		return 2;

	else if (airport3_used_takeoff == false && airport3.size() == 0) // 수정 필요 (비상 착륙만 가능)
		return 3;

	else if (situation < 0) // -1 = 사고
		return -1;

	else
		return 0; // 착륙불가

}


int find_airport(int situation, int air_num, bool& airport1_used, bool& airport2_used, bool& airport3_used_takeoff,
	queue<int>& airport1_takeoff, queue<int>& airport1_landing, queue<int>& airport2_takeoff,
	queue<int>& airport2_landing, queue<int>& airport3, airplane& air_1, airplane& air_2, airplane& air_3,
	airplane& air_4, airplane& air_5)
{
	int find_result = 0;

	if (air_num % 2 == 1) // 착륙 (날고있는 상태)
		find_result = landing_airplane(search_landing_airport(situation, airport1_used, airport2_used, airport3_used_takeoff,
			airport1_landing, airport2_landing, airport3), air_num, airport1_used, airport2_used, airport3_used_takeoff,
			airport1_landing, airport2_landing, airport3, air_1, air_2, air_3, air_4, air_5);

	else // 이륙 (대기중)
		find_result = takeoff_airplane(search_takeoff_airport(air_num,
			airport1_landing, airport2_landing, airport3), air_num, airport1_used, airport2_used, airport3_used_takeoff,
			airport1_takeoff, airport1_landing, airport2_takeoff, airport2_landing, airport3,
			air_1, air_2, air_3, air_4, air_5);

	return find_result;

	// 0 -> 사고, -1 -> 착륙 불가
}

void cal_priority(vector <pair<bool, int>>& takeoff_priority, vector <pair<int, int>>& landing_priority,
	airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5) // 비행기의 비행 여부 및 우선순위를 판단
{
	if (air_1.get_status() == 11)
		landing_priority.push_back(make_pair(air_1.get_limittime(), air_1.get_airnum(air_1.check_flying())));
	else if (air_1.get_status() == 1)
		takeoff_priority.push_back(make_pair(air_1.check_engaged_full(), air_1.get_airnum(air_1.check_flying())));

	if (air_2.get_status() == 11)
		landing_priority.push_back(make_pair(air_2.get_limittime(), air_2.get_airnum(air_2.check_flying())));
	else if (air_2.get_status() == 1)
		takeoff_priority.push_back(make_pair(air_2.check_engaged_full(), air_2.get_airnum(air_2.check_flying())));

	if (air_3.get_status() == 11)
		landing_priority.push_back(make_pair(air_3.get_limittime(), air_3.get_airnum(air_3.check_flying())));
	else if (air_3.get_status() == 1)
		takeoff_priority.push_back(make_pair(air_3.check_engaged_full(), air_3.get_airnum(air_3.check_flying())));

	if (air_4.get_status() == 11)
		landing_priority.push_back(make_pair(air_4.get_limittime(), air_4.get_airnum(air_4.check_flying())));
	else if (air_4.get_status() == 1)
		takeoff_priority.push_back(make_pair(air_4.check_engaged_full(), air_4.get_airnum(air_4.check_flying())));

	if (air_5.get_status() == 11)
		landing_priority.push_back(make_pair(air_5.get_limittime(), air_5.get_airnum(air_5.check_flying())));
	else if (air_5.get_status() == 1)
		takeoff_priority.push_back(make_pair(air_5.check_engaged_full(), air_5.get_airnum(air_5.check_flying())));

	// 수집한 벡터값으로 이/착륙 우선순위를 매긴다

	sort(landing_priority.begin(), landing_priority.end());
	sort(takeoff_priority.begin(), takeoff_priority.end());

}

void update_fuel(airplane& air_1, airplane& air_2, airplane& air_3, airplane& air_4, airplane& air_5)
{
	if (air_1.check_flying()) air_1.using_fuel();
	else air_1.engage_fuel();

	if (air_2.check_flying()) air_2.using_fuel();
	else air_2.engage_fuel();

	if (air_3.check_flying()) air_3.using_fuel();
	else air_3.engage_fuel();

	if (air_4.check_flying()) air_4.using_fuel();
	else air_4.engage_fuel();

	if (air_5.check_flying()) air_5.using_fuel();
	else air_5.engage_fuel();
}
//
void test()
{
	int test_time = 0, initial_time = 0; // 실험 시간, 최초 시간
	int emergency_landing = 0, accident = 0, std_time = 0; // 비상착륙, 사고, 출력 시간

	bool airport1_used = false, airport2_used = false, airport3_used_takeoff = false;
	// 단위 시간에 사용되었는지 여부 검사

	vector <pair<bool, int>> takeoff_priority; // 이/착륙할 비행기 데이터 저장 -> sort() 함수로 정렬, 순서대로 이/착륙
	vector <pair<int, int>> landing_priority; // 이륙 : 완충여부/비행기번호, 착륙 : 비행가능시간/비행기번호

	airplane air_1;
	airplane air_2;
	airplane air_3;
	airplane air_4;
	airplane air_5;

	queue<int> airport1_takeoff; queue<int> airport1_landing;
	queue<int> airport2_takeoff; queue<int> airport2_landing;
	queue<int> airport3;

	test_time = initial_setting(air_1, air_2, air_3, air_4, air_5, airport1_landing, airport2_landing, test_time);
	initial_time = test_time;

	print_result(initial_time - test_time, airport1_takeoff, airport1_landing, airport2_takeoff, airport2_landing, airport3,
		air_1, air_2, air_3, air_4, air_5, airport3_used_takeoff); // 단위 시간마다 현재 상태 출력


	while (test_time)
	{

		cal_priority(takeoff_priority, landing_priority, air_1, air_2, air_3, air_4, air_5);

		sort(landing_priority.begin(), landing_priority.end());
		sort(takeoff_priority.begin(), takeoff_priority.end());

		if (landing_priority.size() > 0)
			for (int i = 0; i < landing_priority.size(); i++)
				if (landing_priority[i].first <= 0) // 비상착륙 상황
					find_airport(landing_priority[i].first, landing_priority[i].second, airport1_used, airport2_used, airport3_used_takeoff,
						airport1_takeoff, airport1_landing, airport2_takeoff,
						airport2_landing, airport3, air_1, air_2, air_3, air_4, air_5);

		if (takeoff_priority.size() > 0)
			for (int i = 0; i < takeoff_priority.size(); i++)
				if (takeoff_priority[i].first == true) // 이륙 상황
					find_airport(takeoff_priority[i].second % 2, takeoff_priority[i].second, airport1_used, airport2_used, airport3_used_takeoff,
						airport1_takeoff, airport1_landing, airport2_takeoff, airport2_landing, airport3,
						air_1, air_2, air_3, air_4, air_5);

		if (landing_priority.size() > 0)
			for (int i = 0; i < landing_priority.size(); i++)
				if (landing_priority[i].first != 0) // 착륙 상황
					find_airport(landing_priority[i].first, landing_priority[i].second, airport1_used, airport2_used, airport3_used_takeoff,
						airport1_takeoff, airport1_landing, airport2_takeoff, airport2_landing, airport3,
						air_1, air_2, air_3, air_4, air_5);


		if (print_result(initial_time - test_time + 1, airport1_takeoff, airport1_landing, airport2_takeoff, airport2_landing, airport3,
			air_1, air_2, air_3, air_4, air_5, airport3_used_takeoff)) // 단위 시간마다 현재 상태 출력
			break;



		unit_setting(landing_priority, takeoff_priority, airport1_takeoff, airport1_landing,
			airport2_takeoff, airport2_landing, airport3, airport1_used, airport2_used, airport3_used_takeoff,
			air_1, air_2, air_3, air_4, air_5, test_time);
		update_fuel(air_1, air_2, air_3, air_4, air_5);

	}

	conclusion(air_1, air_2, air_3, air_4, air_5);
}

void mainscreen()
{
	cur(35, 11); cout << "┌──────────────────────────────────────────┐ ";
	cur(35, 12); cout << "│                                          │ ";
	cur(35, 13); cout << "│                                          │ ";
	cur(35, 14); cout << "│                                          │ ";
	cur(35, 15); cout << "│                                          │ ";
	cur(35, 16); cout << "│                                          │ ";
	cur(35, 17); cout << "└──────────────────────────────────────────┘ ";

	cur(42, 13); cout << " [ 비행기 이착륙 시뮬레이션 ] \n\n             ";
	cur(38, 15); system("PAUSE");

	system("cls");
	cur(1, 1);

	test();
}

int main()
{
	mainscreen();
	return 0;
}


*/