#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "The animal makes a sound." << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "The cat meows." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Animal* animal1 = new Animal();
    Animal* animal2 = new Cat();
    Animal* animal3 = new Dog();

    animal1->speak();
    animal2->speak();
    animal3->speak();

    return 0;
}

