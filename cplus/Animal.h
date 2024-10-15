#include <iostream>

using namespace std;

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
    void scream() {
        cout << "wow" << endl;
    }
private:
    int secret;
};

class Dog : public Animal{
public:
    string name;
    Dog(string name, int age) : Animal(age) { // construct + invoke super-constructor
        // this == Dog*
        this->name = name;
    }  
};

class Cat : public Animal{
    public:
        Cat(int age) : Animal(age){
        }
};