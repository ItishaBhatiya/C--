#include<iostream>
#include<string>
using namespace std;

class cars{
	private:
		string car_name;
		string model_name;
		int price;
		string model_color;
		
	public:
		cars(){
			cout<<"hello World";
		}
		
	cars(string cmodel,string cname){
		model_name = cmodel;
		car_name = cname;
	}
	
	void display(){
		cout<< "  value of a is :  "<<model_name;
		cout<< "  value of a is :  "<<car_name;
	}
	
	void setter(string cname,string mname){
		car_name = cname;
		model_name = mname;
	}
};

int main(){
	cars c1("hello","world");
	c1.setter("Activa","5G");
	c1.display();
	
	return 0;
}


