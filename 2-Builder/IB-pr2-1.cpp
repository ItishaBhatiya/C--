#include<iostream>
#include<string>
using namespace std;

class train
{
	public:
	
	int Tno;
	string Tname;
	string source;
	string Destination;
	int Ttime;
	
	
		void setter(){
			
			cout<<"enter Train No. ";
			cin>>Tno;
			
			cout<<"enter Train Name :";
			cin>>Tname;
			
			cout<<"Enter Source :";
			cin>>source;
			
			cout<<"Enter Destination :";
			cin>>Destination;
			
			cout<<"Enter Train Time :";
			cin>>Ttime;
		}
		
	void getter(){
		cout<<Tno<<"\t"<<Tname<<"\t"<<source<<"\t"<<Destination<<"\t"<<Ttime<<endl;
	}
};

int main()
{
	train t1[3];
	
	for(int i=0;i<3;i++)
	{
		t1[i].setter();
		system("cls");
	}
	
	for(int i=0;i<3;i++)
	{
		t1[i].getter();
	}
	
	int n;
	cout<<"Enter search of train no:";
	cin>>n;
	
	for(int i=0;i<3;i++)
	{
		if(n==t1[i].Tno)
		{
			t1[i].getter();
		}
	}
	
	return 0;
	
}















