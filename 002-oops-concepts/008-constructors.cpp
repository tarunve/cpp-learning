#include<iostream>
using namespace std;

/**
 *  Constructor:
 *  ===========
 *  ->  Constructor is a special member function with same name as that of class.
 *  ->  used to initialize the objects of a class.
 * 
 *  Characteristics:
 *  ===============
 *  ->  Should be declared in the public section only.
 *  ->  It is automatically invoked when object is created.
 *  ->  They cannot return vallues and does not have return types.
 *  ->  It can have default arguments.
 *  ->  We cannot refer to their address.
 * 
 *  Copy Constructor:
 *  ================
 *  ->  Which makes copy of object.
 *  ->  When no copy constructor is found, compiler provides its own copy constructor.
 *  
 *  Why copy constructor argument should be const in C++?
 *  ====================================================
 *  ->  When we create our own copy constructor, we pass an object by reference and we generally pass 
 *      it as a const reference.
 *  ->  One reason for passing const reference is, we should use const in C++ wherever possible so 
 *      that objects are not accidentally modified. This is one good reason for passing reference as 
 *      const, but there is more to it. For example, predict the output of following C++ program.
 *  ->  Compilation error if not specified constructor as const : The reason for compiler error is, 
 *      compiler created temporary objects cannot be bound to non-const references and the original 
 *      program tries to do that. It doesn’t make sense to modify compiler created temporary objects 
 *      as they can die any moment.
 */

class Complex{
    int a,b;
    public:
        //delarinng constructor
        Complex(void);
        Complex(int , int);
        Complex(int , float, int);
        //Copy Constructor
        Complex(const Complex &obj){
            cout<<"Copy constructor called"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

//default constructor
Complex :: Complex(void){
    a = 10;
    b = 0;
}

//parameterized constructor
Complex::Complex(int x, int y){
    a = x;
    b = y;
}

//overloaded constructor with default value
Complex::Complex(int x, float y, int z=10){
    a = x;
    b = z;
}

int main(){
    Complex c;
    c.display();

    //implicit call
    Complex c1(2, 3);
    c1.display();

    //Explicit call
    Complex c2 = Complex(3,4);
    c2.display();

    //Explicit call to overloaded constructor.
    Complex c3 = Complex(7, 45.5f);
    c3.display();
    Complex c4 = Complex(7, 45.5f, 469);
    c4.display();

    //copy constructor
    Complex z1(c); //copy constructor invoked.
    z1.display();
    z1 = c ; //copy constructor not invoked.
    Complex z2 = c; //copy constructor invoked.

    return 0;
}