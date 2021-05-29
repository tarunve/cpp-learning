#include<iostream>
using namespace std;

/**
 *  Constructor in Derived class:
 *  ===========================
 *  ->  We can  use constructors in derived class in C++;
 *  ->  If base class constructor does not have any arguments, there is no need of any constructor 
 *      in derived class.
 *  ->  But if there are one or more arguments in the base class constructor, derived class need to 
 *      pass arguments to the base class constructor.
 *  ->  If both base and derived class have constructors, base class constructor is executed first.
 * 
 *  Constructors in Multiple Inheritance:
 *  ==================================== 
 *  ->  In multiple inheritance, base classes are constructed in the order in which they appear in
 *      class declaration.
 *  ->  In multi level inheritance, the constructors are executed in the order of inheritance.
 * 
 *  Special Syntax:
 *  ==============
 *  ->  C++ supports an special syntax for passing arguments to multiple base classes.
 *  ->  The constructors of the derived class receives all the arguments at once and then will pass
 *      the calls to the respective base classes.
 *  ->  The body is called after all the constructors are finished executing:
 *          Derived-Constructor(arg1, arg2,arg3,....):Base1-Constructor(arg1, arg2),Base2-Constructor(arg3,arg4),...
 * 
 *  Special case of Virtual Base Class:
 *  ==================================
 *  ->  The constructors of virtual base classes are invoked before an non-virtual base class.
 *  ->  If there are multiple virtual base clases, they are invoked in the order declared.
 *  ->  Any non-virtual base class are then constructed before the derived class constructor is executed.
 */

/*
    Case1:
    class B: public A{
    // Order of execution of constructor -> first A() then B()
    };

    Case2:
    class A: public B, public C{
        // Order of execution of constructor -> B() then C() and A()
    };

    Case3:
    class A: public B, virtual public C{
        // Order of execution of constructor -> C() then B() and A()
    };

*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};

//=========================================
//Initialization list in constructor
class Test
{
    int a;
    int b;
public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i+b) -->RED Flag this will create problems because a will be initialized first
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main(){
    Derived tarun(1, 2, 3, 4);
    tarun.printDataBase1();
    tarun.printDataBase2();
    tarun.printDataDerived();
    cout<<"==========================="<<endl;
    
    //Initailization list in constructor
    Test t(4, 6);

    return 0;
}