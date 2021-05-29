#include<iostream>
using namespace std;

int main(){

    //Pointers -> data type which holds the address of other data type.
    // & -> (address of) operator.
    int a=3;
    int* b = &a;
    cout<<"Address of a :: "<<&a<<endl;
    cout<<"Address of a :: "<<b<<endl;
    // * -> dereferencing operator
    cout<<"Value at address b is :: "<<*b<<endl;

    //pointer to pointer -> the pointer which stores the address of pointer.
    int** c = &b;
    cout<<"Address of b :: "<<&b<<endl;
    cout<<"Address of b :: "<<c<<endl;
    cout<<"Value at address c is :: "<<*c<<endl;
    cout<<"Value at address value_at(value_at(c)) is :: "<<**c<<endl;

    return 0;
}