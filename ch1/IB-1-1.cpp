#include<iostream>

#define pi 3.1415

	int r=2;
	
	class Myclass{
		public:
			int a;
			
			void display(){
				std :: cout<<"my class"<<a;
			}
	};
	
void area(){
	float area;
	area = pi*r* r;
	
	std :: cout<<area;
}

int main(){
	Myclass ab;
	ab.a=50;
	ab.display();
	
	area();
	
	return 0;
}

