#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat meows" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr;

    Cat cat;
    Dog dog;

    animalPtr = &cat;
    animalPtr->makeSound();

    animalPtr = &dog;
    animalPtr->makeSound();
}
