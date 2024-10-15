#include <iostream>

using namespace std;

// you can pet it, to make it feel comfy
class Pettable {
public:
    // this simulates an INTERFACE, no implementation, just abstract/virtual methods
    virtual void petMe(int forceInNewton) = 0;
};

class Animal {
public:
    int age;
    Animal(int age) { // constructor
        cout << "Constructing animal" << endl;
        if(age <= 0) {
            cerr << "Noooooo! Invalid age: " << age << endl;
            exit(1);
        }
        this->age = age;
    }
    ~Animal() {
        cout << "Deconstructing animal" << endl;
    }
    virtual void makeSound() = 0; // making a method virtual => the class will be abstract (=non-instantiable)
private:
    int secret;
};

class Dog : public Animal, public Pettable {
public:
    string name;
    Dog(string name, int age) : Animal(age) { // construct + invoke super-constructor
        // this == Dog*
        this->name = name;
    }
    void makeSound() {
        cout << "Wuff!" << endl;
    }
    void petMe(int forceInNewton) {
        //if(force) ..
        cout << "Wagging the tail while being pet" << endl;
    }
};

class Cat : public Animal {
public:
    Cat(int age) : Animal(age){
    }
    void makeSound() {
        cout << "Meow!" << endl;
    }
};

//class Person {
//};
//class Student : public Person, public Pettable {
//};
//class Professor : public Person {
//};
//
//class A {
//    void foo();
//}
//class B {
//    void foo();
//}
//class C : A, B {};
//main() {
//    C c();
//    c.foo(); // ??? A's or B's?
//}