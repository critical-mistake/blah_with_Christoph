#include <iostream>
using namespace std;


// template <typename T> T myMax(T x, T y)
// template <class T> void bubbleSort(T a[], int n)
template <typename T> class List {
private:
    T* pointer;
    int size;
public:
    List(T initials[], int size);
    void print();
    // add(T,...)
};
template <typename T> List<T>::List(T initials[], int size) {
    this->pointer = new T[size];
    this->size = size;
    for (int i = 0; i < size; i++)
        pointer[i] = initials[i];
}

template <typename T> void List<T>::print() {
    cout << "List content:";
    for (int i = 0; i < this->size; i++) {
        cout << " " << *(this->pointer + i);
    }
    cout << endl;
}
