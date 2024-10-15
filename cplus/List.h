#include <iostream>

using namespace std;


// T ... nothing
// T must be at least... Pettable; i require T to implement Pettable.
template <typename T> class List {
private:
    int size;
    T* pointer;
public:
    List(T data[], int size);
    void print();
    // add(All)
    // remove(All)
    // boolean contains(item)
};
template <typename T> List<T>::List(T data[], int size){
    this->pointer = new T[size];
    this->size = size;
    for(int i = 0; i < size; i++){
        pointer[i] = data[i];
    }
}
template <typename T> void List<T>::print(){
    cout << "list = ";
    for(int i = 0; i < this->size; i++){
        cout << " " << *(this->pointer+i);
    }
    cout << endl;
}
