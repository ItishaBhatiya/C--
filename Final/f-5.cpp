#include<iostream>
using namespace std;


class A 
{

          public:
    		void display() {
    			
        		cout << "Class A" << endl;
    }
};


class B {
			public:
    		void display() {
        		cout << "Class B" << endl;
    }
};

class Base : public virtual A, public virtual B {
};

class Derived : public Base {
};

int main() {
    Derived obj;
    obj.display(); 

    
}

