#include <iostream>

using namespace std;

class List{
private:
    int size;
    string* pointer;
public:
    List(string data[], int size);
    void print();
};
List::List(string data[], int size){
    this->pointer = new string[size];
    this->size = size;
    for(int i = 0; i < size; i++){
        pointer[i] = data[i];
    }
}
void List::print(){
    cout << "list = ";
    for(int i = 0; i < this->size; i++){
        cout << " " << *(this->pointer+i); 
    }
    cout << endl;
}