#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout<<"enter the value of a : ";
	cin>>a;
	cout<<"enter the value of b : ";
	cin>>b;
	
	try{
		if(b==0){
			throw 0;
		}
		else{
			cout<<"a/b is " <<a/b<<endl;
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
