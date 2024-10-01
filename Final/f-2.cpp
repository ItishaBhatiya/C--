#include<iostream>
using namespace std;

class BMS
{
	private:
		int number;
		string name;
		string type;
		string branch;
		int balance;
		int choice;
	
	public:
		
		void input()	
		{
			cout<<"number: ";
			cin>>number;
			cout<<"name: ";
			cin>>name;
			cout<<"type: ";
			cin>>type;
			cout<<"branch: ";
			cin>>branch;
			cout<<"balance: ";
			cin>>balance;
			cout<<"choice: ";
			cin>>choice;
		}
		
		void output()
		{
			cout << "number :" 	<< number 	<<endl
				 << "name : "	<< name 	<< endl
				 << "type : "	<< type 	<< endl
				 << "branch : "	<< branch 	<<endl
				 << "balance : "<< balance 	<<endl
				 << "choice : " <<choice 	<<endl;
		}
};

int main()
{
	BMS b;
	int n;
	
	b.input();
	b.output();
}
