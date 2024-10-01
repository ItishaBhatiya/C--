#include<iostream>
using namespace std;

class car{
	private:
		int a,b;
	public:
		car(int x,int y)
		{
			a=x;
			b=y;
		}
		car(car &obj)
		{
			a=obj.a;
			b=obj.b;
		}
		void display()
		{
			cout<<a<< " " <<b<<endl;
		}
};

int main()
{
	car car1(10,20);
	car car2 = car1;
	car1.display();
	car2.display();
	
	return 0;
}
