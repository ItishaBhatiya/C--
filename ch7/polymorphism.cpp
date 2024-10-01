#include<iostream>
using namespace std;

class A{
	int a;
	int b;
	int c;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
			cout<<a<<""<<b;
		}
		
	A(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
		cout<<a<<""<<b<<""<<c;
	}
};

int main()
{
	A aa(11,12,13);
}


