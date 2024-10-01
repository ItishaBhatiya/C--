#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"Enter your age : ";
	cin>>age;
	
	try{
		if(age<18){
			throw "ghar par raho";
		}
		else{
			cout<<"vote for modi"<<age<<endl;
		}
	}
	catch(int n){
		cout<<""<<n<<endl;
	}
	catch(char c){
		cout<<"can't divide by 0 "<<c;
	}
	catch(...){
		cout<<"General Exception";
	}
	
	return 0;
}
