#include <iostream>
#include "Dog.h"
#include "List.h"
using namespace std;

// TODO https://www.w3schools.com/cpp/cpp_getstarted.asp

// forward declaration (so cumbersome...)
void oop();
void interact(Soundable* soundable);
//void mutateVal(Mutable mut); // not possible?!
void mutateRef(Mutable* mut);
void references();
void templateStuff();

int main() {
  cout << "Hello C++!" << endl << endl;
  string myText = "Hello"; // a native string type!

  templateStuff();

//  oop();
//  cout << "oop() done" << endl;

//  references();
  return 0;
}

void templateStuff() {
    int data[3] = { 1, 6, 8 };
    List<int> ints(data, 3);
    ints.print();
}
void oop() {
  Dog* dogRef = new Dog("refDog", 42);
//  Dog dog; // if without constructor
  Dog dog("name", 12);
  dog.name = "Akko";
  dog.setName("Akko2");
  cout << "Dog's name: " << dog.name << " and age: " << dog.age << endl;
//  mutateVal(dog);
//  cout << "Dog's name after mutate: " << dog.name << endl;
  mutateRef(&dog);
  cout << "Dog's name after mutateRef: " << dog.name << endl;
  interact(&dog);
//  dog.internal = 42; ... private!
  dog.outside();
} // deconstructor implicitly called (function's stack), but not for dogRef (on application's heap)

void interact(Soundable* soundable) {
    soundable->makeSound();
}

void mutateRef(Mutable* mut) {
    mut->setName("mutatedName");
}

void references() {
    string food = "Pizza"; // food variable
    string &meal = food; // reference to food
    string* ptr = &food; // a pointer variable, storing food's address

    cout << food << endl;
    cout << meal << endl;
    cout << *ptr << endl;
}
