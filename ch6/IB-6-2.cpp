#include<iostream>
using namespace std;

class shape{
	public:
		virtual double calculate()=0;
};

class Circle : public shape{
	double radius;
	public:
		Circle (double r){
			radius =r;
		}
		
		double calculate(){
			}
			double show(){
				return 3.1415*radius*radius;
			}
};

class Triangle: public shape{
	double base,height;
	public:
		Triangle(double b,double h) : base(b),height(h){
			}
		double calculate()
		{
			return 0.5*base*height;
		}
};

class Rectangle : public shape{
	double length,breadth;
	public:
		Rectangle(double l,double b):length(l),breadth(b){
		}	
		double calculate(){
			return length*breadth;
		}
};

int main()
{
	Circle cir(10);
	cout<<"Area of circle is :"<<cir.show()<<endl;
	Triangle tri(10,20);
	cout<<"Area of triangle is :"<<tri.calculate()<<endl;
	Rectangle rec(2,3);
	cout<<"Area of rectangle is :"<<rec.calculate()<<endl;
	
}











