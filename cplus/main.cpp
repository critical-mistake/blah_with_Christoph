#include <iostream> 
#include "Animal.h"
using namespace std;


int main(){
    string name = "Paula";
    cout << "Hello " << name << endl; 
    Animal bello;
    bello.age = 12;
    bello.scream();
    cout << "Bello.age " << bello.age <<endl;
    return 0;
}