#include <iostream> 
#include "Animal.h"

using namespace std;

void showAgeOf(Animal* animal);
void beAnnoying(Animal* animal);

int main() {
    string name = "Paula";
    cout << "Hello " << name << endl;

    Dog bello("Bello", 12);

    bello.makeSound();
//    cout << "Dog's name and age: " << bello.name << ", " << bello.age << endl;
    showAgeOf(&bello);

    Cat kitty(5);
//    passByValue(kitty); // kitty will stay 5
//    passByPointer(kitty); // kitty will become 12
    showAgeOf(&kitty);

    beAnnoying(&bello);
    beAnnoying(&kitty);
    bello.petMe(40);
    return 0;
}

//void passByValue(Animal animal) { // copy will be passed; function/stack-local
//    animal.age = 12;
//}
//void passByPointer(Animal* animal) { // access to main's function object directly
//    animal->age = 12;
//}

void showAgeOf(Animal* animal) {
    cout << "Animal's age: " << animal->age << endl;
}

void beAnnoying(Animal* animal) {
    animal->makeSound(); // will it be wuff, or meow? determined at runtime!
}
