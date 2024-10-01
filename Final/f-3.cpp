#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter a and b: ";
	cin >> a >> b;
	
	try
	{
		if(b == 0)
		{
			throw b;
		}
		else
		{
			cout << "Division: " << a/b << endl;
		}
	}
	catch(int n)
	{
		cout << "Can't devide by " << n << endl;
	}
	
	cout << "THE END!!";
}
