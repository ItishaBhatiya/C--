#include<iostream>
using namespace std;

class A
{
	protected:
		int id;
		string name;
		string role;
		int salary;
		double exp;
		string  comp_name;
		string address;
		string email;
		int contact;
		
	public:
		void set1()	
		{
			cout<<"enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter role:";
			cin>>role;
		}
};

class B : public A
{
	public:
		void set2()	
		{
			
			cout<<"Enter salary:";
			cin>>salary;
			cout<<"Enter exp:";
			cin>>exp;
		}
	
};

class C : public B
{
	public:
		void set3()
		{
			cout<<"Enter com_name:";
			cin>>comp_name;
			cout<<"Enter address:";
			cin>>address;
		}
		void get1()
		{
			cout<<"name:"<<name<<endl
			    <<"role:"<<role<<endl
			    <<"salary:"<<salary<<endl;
		}
};

class D : public C
{
	public:
		void set4()
		{
			cout<<"Enter email:";
			cin>>email;
			cout<<"Enter contact:";
			cin>>contact;
		}
		void getdata()
		{
			cout<<"id:"<<id<<endl
				<<"name:"<<name<<endl
				<<"role:"<<role<<endl
				<<"salary:"<<salary<<endl
				<<"exp:"<<exp<<endl
				<<"comp_name:"<<comp_name<<endl
				<<"address:"<<address<<endl
				<<"email:"<<email<<endl
				<<"contact:"<<contact<<endl;
				
		}
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	
	a.set1();
	b.set2();
	c.set3();
	d.set4();
	d.getdata();
	
}









