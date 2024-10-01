#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) {
        value = val;
    }

    bool operator<(const Number& obj) {
        return value < obj.value;
    }
};

int main() {
    Number a(5);
    Number b(10);

    if (a < b) {
        cout << "a contains a higher value." << endl;
    } else {
        cout << "b contains a higher value." << endl;
    }

  
}

