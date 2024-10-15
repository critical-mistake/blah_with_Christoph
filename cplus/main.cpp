#include <iostream> 
#include "Animal.h"

using namespace std;

void showAgeOf(Animal animal);

int main() {
    string name = "Paula";
    cout << "Hello " << name << endl;

    Dog bello("Bello", 12);

    bello.scream();
//    cout << "Dog's name and age: " << bello.name << ", " << bello.age << endl;
    showAgeOf(bello);

    Cat ..
    showAgeOf(kitty)

    return 0;
}

void showAgeOf(Animal animal) {
    cout << "Animal's age: " << animal.age << endl;
}
