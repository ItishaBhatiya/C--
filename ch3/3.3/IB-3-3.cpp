#include<iostream>
#include<string>
using namespace std;

class company{
	
	public:
		company(int id,string name,int qty,int rev,int imp,int exp,string cceo)
		{
			cout << "cid :" << id << endl
			<< "cname :" << name << endl
			<< "sqty :" qty << endl
			<< "revenue :" << rev << endl
			<< "imp_dai :" << imp << endl
			<< "exp_dai :" << exp << endl
			<< "cceo :" << cceo << endl; 
		}
};

int main()
{
	int n;
	cout<<"enter N :";
	cin>>n;
	
	int cid;
	string cname;
	int sqty;
	int revenue;
	int imp_dai;
	int exp_dai;
	string ceo;
	
	for(int i=0;i<n;i++)
	{
		cout << "enter id";
		cin >> cid;
	}
}
