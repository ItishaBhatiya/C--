#include<iostream>
using namespace std;

class Cricket
{
	protected:
		int t20_over;
		int test_over;
		
	public:
	void match()	
	{
		cout<<"this match over:";
		
	}
};

class T20_match : public Cricket
{
	public:
		
		void t20()
		{
			cout<<"enter over of t20 match\t:"<<endl;
			cin>>t20_over;
			
			cout<<"t20 match's total over\t: "<<t20_over<<endl;
		}
};
class Test_match : public Cricket
{
	public:
		
		void test()
		{
			cout<<"enter over of test match\t:"<<endl;
			cin>>test_over;
			
			cout<<"test match total over\t:"<<test_over<<endl;
			
		}
};

int main()
{
	Cricket c;
	c.match();
	
	T20_match t;
		t.match();
		t.t20();
		
	Test_match e;
		e.match();
		e.test();
}
