#include<iostream>
using namspace std;

class Demo{
	
	private:
		void seta()
		{
			cout<<"enter the value";
		}
		void getA()
		{
			cout<<"value is "<<a<<endl;
		}
		void operator = (Demo bb)
		{
			a=bb.a;
		}
};

int main()
{
	Demo aa,bb;
	bb.setA();
	aa=bb;
	aa.getA();
}
