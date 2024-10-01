#include<iostream>
using namespace std;



int main(){
	int a,b;
	int age;
	char psw;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	
	try{
		if(b==0){
			throw 0;
		}
		else{
			cout<<"a/b"<<a/b<<endl;
		}
	}
	catch(int n){
		cout<<"cant be divide 0"<<n<<endl;
	}
	
	cout<<"enter age";
	cin>>age;
	
	try{
		if(age<=18){
			throw 0;
		}
		else{
			cout<<"you are eligible for vote!!!"<<age<<endl;
		}
	}

	catch(int  n){
		cout<<"you are not vote!!!"<<n;
	}
	
	cout<<"enter your password:";
	cin>>psw;
	
	try{
		if(psw<=65&&psw>=90){
			cout<<"password sucess!!";
		}
		else{
			cout<<"you can use Uppercase";
		}
	}
	catch(int n){
		cout<<"you password is wrog ";
	}
}
