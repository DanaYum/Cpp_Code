
#include <bits/stdc++.h>
using namespace std;
class Time {
	int hour;
	int mins;

public:
	Time()
	{
		hour = 0;
		mins = 0;
	}
	Time(int t)
	{
		hour = t / 60;
		mins = t % 60;
	}
	void Display()
	{
		cout << "Time = " << hour<< " hrs and "<< mins << " mins\n";
	}
};
int main()
{
	Time T1;
	int dur = 95;

	// Conversion of int type to class type
	T1 = dur;
	T1.Display();

	return 0;
}
