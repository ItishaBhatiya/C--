#include <iostream>
using namespace std;

class Arithmetic {
    public:
        int calculate(int a, int b) {
            return a / b;
        }
        int calculate(int a, int b, int c) {
            return a - b - c;
        }
        int calculate(int a, int b, int c, int d) {
            return a * b * c * d;
        }
        int calculate(int a, int b, int c, int d, int e) {
            return a + b + c + d + e;
        }
};

int main() {
    Arithmetic obj;
    cout << "Division of 10 and 2 is: " << obj.calculate(10, 2) << endl;
    
    cout << "Subtraction of 10, 2 and 3 is: " << obj.calculate(10, 2, 3) << endl;
    
    cout << "Multiplication of 1, 2, 3 and 4 is: " << obj.calculate(1, 2, 3, 4) << endl;
    
    cout << "Addition of 1, 2, 3, 4 and 5 is: " << obj.calculate(1, 2, 3, 4, 5) << endl;
   
}

