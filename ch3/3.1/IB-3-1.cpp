#include<iostream>
using namespace std;

class student
{
	private:
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string collage;
		
	public:
		void setdata()	
		{
			cout <<"Enter id\t:";
			cin >>id;
			cout <<"Enter name\t:";
			cin >>name;
			cout <<"Enter age\t:";
			cin >>age;
			cout <<"Enter course\t:";
			cin >>course;
			cout <<"Enter city\t:";
			cin >>city;
			cout <<"Enter email\t:";
			cin >>email;
			cout <<"Enter collage\t:";
			cin >>collage;
		}
		
		void getdata()
			{
				cout <<"id\t:"<<id<<endl
				<<"age\t:"<<age<<endl
				<<"name\t:"<<name<<endl
				<<"course\t:"<<course<<endl
				<<"city\t:"<<city<<endl
				<<"email\t:"<<email<<endl
				<<"collage\t:"<<collage<<endl;
			}
	};

int main()
{
	student s;
	int n;
	
	cout <<"Enter Any Number : ";
	cin >>n;
	
	for(int i=1;i<=n;i++)
	{
		s.setdata();
		s.getdata();
	}
	
	return 0;
} 
