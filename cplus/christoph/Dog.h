using namespace std;

// https://www.w3schools.com/cpp/default.asp

// no interfaces in C++, but simulate by: abstract class with pure virtual functions + multiple inheritance
class Soundable {
public:
    virtual void makeSound() = 0; // "= 0" makes method pure virtual + class abstract.
};

class Mutable {
public:
    virtual void setName(string name) = 0;
};

class Animal {
public: // access specifier
    string name;
    Animal(string name) {
        this->name = name;
    }
};

class Dog: public Animal, public Soundable, public Mutable {
public:
    int age;
    Dog(string name, int age) : Animal(name) { // constructor
        cout << "Creating new Dog(" << name << ")" << endl;
        this->age = age;
    }
    ~Dog() {
        cout << "deconstructing dog: " << name << endl;
    }
    void makeSound() {
        bark();
    }
    void bark() {
        cout << "Woof!" << endl;
    }
    void setName(string name) {
        this->name = name;
    }
    void outside(); // declaration inside

private: // if no access specifier set, this is the DEFAULT
    int internal;
// protected: only inherited classes
};

void Dog::outside() { // implementation outside
  cout << "Dog::outside()" << endl;
}