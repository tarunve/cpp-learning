#include<iostream>
using namespace std;

class Complex{
    int real , imaginary;
    public :
        void getData(){
            cout<<"The real part is : "<<real<<endl;
            cout<<"The imaginary part is : "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
//=============================
class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
//==============================

class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }
        void getData(){
            cout<<"The value of a : "<<a<<endl;
        }
};


int main(){
    //basic example
    int a =4;
    int* ptr = &a;
    cout<<"The value of a is : "<<*(ptr)<<endl;
    cout<<"================================="<<endl;
    
    //new keyword
    //int *p = new int(40);
    float *p = new float(40.27);
    cout<<"The value at address P is : "<<*(p)<<endl;
    cout<<"================================="<<endl;

    //array with pointer
    int *arr = new int[3];
    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;
    cout<<"================================="<<endl;

    //delete operator
    delete[] arr; //dynamically de-allocate the memory
    cout<<"================================="<<endl;

    //Pointers with objects
    Complex c1;
    //Complex *complex = new Complex;
    Complex *complex=&c1;
    (*complex).setData(1,56);
    (*complex).getData();
    cout<<"================================="<<endl;

    //arrow operator - de-reference the object and set the value.
    Complex *complex1 = new Complex;
    complex1->setData(34,77);
    complex1->getData();
    cout<<"================================="<<endl;

    //Array of objects - when we use array , c pointer will point to the address of first Shop object.
    //  and memory for all 4 objects will be allocated.
    Complex *c = new Complex[4];
    c->setData(4, 67);
    c->getData();
    cout<<"================================="<<endl;

    int size=2;
    ShopItem *ptr1 = new ShopItem [size];
    ShopItem *ptrTemp = ptr1;
    int p1;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p1>>q;
        // (*ptr).setData(p, q);
        ptr1->setData(p1, q);
        ptr++; 
    }

    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    cout<<"================================="<<endl;

    //this pointer - keyword which is a pointer to the object which invokes the member function.
    A obj;
    obj.setData(353);
    obj.getData();
    cout<<"================================="<<endl;

    return 0;
}