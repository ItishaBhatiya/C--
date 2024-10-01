#include<iostream>

using namespace std;

class Time{
	public:
		int hour;
		int minutes;
		int seconds;
};

int main
{
	Time s1,m1,h1,s2;
	
	cout << "Enter Seconds :";
	cin >> s1.seconds;
	
	while(s1.seconds>60)
	{
		h1.hour=s1.seconds/3600;
		s2.seconds=s1.seconds%3600;
		m1.minutes=s2.seconds/60;
		s1.seconds=s2.seconds%60;	
	}
	
	cout << h1.hour << "Hours :";
	cout << m1.minutes << "Minutes :";
	cout << s1.seconds << "Seconds :";
	
	return 0;
}
