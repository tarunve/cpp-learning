#include<iostream>
using namespace std;

/**
 *  Polymorphism:
 *  ============
 *  - one name and multiple forms
 *  - eg. Function overloading, operator overloading
 *  - eg. Virtual Functions
 *  ->  Polymorphism in C++ can be of two types:
 *      1.  Compile time polymorphism or early binding:
 *              Compile time polymorphism in C++ is acheived using:
 *              1.1 - Function overloading
 *              1.2 - Operator Overloading
 *      2. Run time polymorphism or dynamic binding: 
 *              Run time polymorphism in C++ is acheived using:
 *              2.1 - Virtual functions
 */

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base:"<<var_base<<endl;
        }
};
class DerivedClas: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base:"<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived:"<<var_derived<<endl;
        }
};

int main(){
    //Base class pointer can point to the derived class.
    BaseClass *base_pointer;
    DerivedClas derived;
    base_pointer = &derived;
    base_pointer->var_base = 34;
    base_pointer->display(); 
    cout<<"========================"<<endl;

    DerivedClas *derived_pointer;
    derived_pointer = new DerivedClas;
    derived_pointer->var_base = 366;
    derived_pointer->var_derived=3672;
    derived_pointer->display();
    cout<<"========================"<<endl;

    return 0;
}