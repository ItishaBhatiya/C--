#include<iostream>
using namespace std;

class Hello{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}
		void getData()
		{
			cout << a << " " << b;
		}
};

int main()
{
	Hello c;
	c.setData(20,30);
	c.getData();
	
	return 0;
}
