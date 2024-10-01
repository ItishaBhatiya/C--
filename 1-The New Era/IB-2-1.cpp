#include<iostream>

using namespace std;

class Distance{
	public:
		int feet;
		int inch;
};

int main()
{
	Distance d1,d2,sum;
	
	cout << "enter the first Distance : \n";
	cout << "FEET :";
	cin >> d1.feet;
	cout << "Inch :";
	cin >> d1.inch;
	
	cout << "enter the Second Distance : \n";
	cout << "FEET :";
	cin >> d2.feet;
	cout << "Inch :";
	cin >> d2.inch;
	
	sum.feet = d1.feet+d2.feet;
	sum.inch = d1.inch+d2.inch;
	
	while(sum.inch>12)
	{
		if(sum.inch>=12)
		{
			sum.inch = sum.inch-12;
			sum.feet = sum.feet+1;
		}
	}
	
	cout << sum.feet << " : FEET  " << sum.inch << " : Inch";
	
	return 0;
	
}
