#include<iostream>
using namespace std;

class Distance{
	private:
		int km;
		int meter;
		
	public:
		Distance(int k=0,int m=0):km(k),meter(m){
		}
		
	Distance operator + (const Distance &d){
		Distance temp;
		temp.meter=meter+d.meter;
		temp.km=km+d.km+temp.meter;
		temp.meter%=1000;
		return temp;
	}
	
	void display()
	{
		cout<<"Km "<<km<<"Meter"<<meter<<endl;
	}
};

int main(){
	Distance input1(3,1020),input2(2,2050);
	Distance output;
	output = input1+input2;
	output.display();
	return 0;
}
