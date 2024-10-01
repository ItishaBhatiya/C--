#include <iostream>
using namespace std;

class A {
public:
    void func() {
        cout << "class A" << endl;
    }
};

class B : virtual public A {
public:
    void func() {
        cout << "class B" << endl;
    }
};

class C : virtual public A {
public:
    void func() {
        cout << "class C" << endl;
    }
};

class D : public B, public C {
public:
    void func() {
        cout << "class D" << endl;
    }
};

int main() {
    D obj;
    obj.func();
    return 0;
}

