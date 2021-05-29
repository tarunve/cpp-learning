#include<iostream>
using namespace std;


/**
 *  Inheritance table:
 *  =================
 *                                Public Derivation         Private Deivation           Protected Derivation
 *  1.  Private Members             Not Inherited             Not Inherited               Not Inherited
 *  2.  Protected Members           Protected                 Private                     Protected
 *  3.  Public Members              Public                    Private                     Protected
 * 
 *  Multi Level Inheritance:
 *  ->  If we are inheriting B from A and C from B (A --> B --> C):
 *      ->  A is the base class of B and B is the base class for C.
 *      ->  A-->B-->C is called inheritance path.
 */

//====================
//  Single Inheritance
//====================
class Base{
    int data1; //private member and can't be inherited.
    protected:
        int data4;      //can be inherited in derived class.
    public:
        int data2;
        void setData(){
            data1=10;
            data2=20;
        }
        int getData1(){
            return data1;
        }
        int getData2(){
            return data2;
        }
};

class Derived : public Base{
    int data3;
    public:
        void process(){
            data3 = data2*getData1();
        }
        void display(){
            cout<<"The value of data1 :: "<<getData1()<<endl;
            cout<<"The value of data2 :: "<<data2<<endl;
            cout<<"The value of data3 :: "<<data3<<endl;
        }
};

//=======================
//Multi Level inheritance
//=======================
class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int r){
            roll_number = r;
        }
        void get_roll_number(void){
            cout<<"Roll Number is : "<<roll_number<<endl;
        }
};
class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void get_marks(){
            cout<<"Marks obtained in maths are : "<<maths<<endl;
            cout<<"Marks obtained in physics are: "<<physics<<endl;
        }
};
class Result:public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
        }
};

//====================
//Multiple inheritance
//====================
/**
 *  Ambuity Situation:
 *  =================
 *  ->  If same function is present in both the base classes. known as diamond problem.
 *  ->  To resolve this, we need to implement the method in derived class as well.
 */
class Base1{
    protected:
        int base1Int;
    public:
        void set_base1Int(int a){
            base1Int = a;
        }
        void greet(){
            cout<<"Base1 greet!! "<<endl;
        }
};
class Base2{
    protected:
        int base2Int;
    public:
        void set_base2Int(int a){
            base2Int = a;
        }
        void greet(){
            cout<<"Base2 greet!! "<<endl;
        }
};
class Derived1: public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of Base1 is : "<<base1Int<<endl;
            cout<<"The value of Base2 is : "<<base2Int<<endl;
        }
        //overrided method
        void greet(){
            Base1::greet();
        }
};

int main(){
    //Single Inheritance
    Derived d;
    d.setData();
    d.process();
    d.display();
    cout<<"===================================="<<endl;

    //Multi level Inheritance
    Result tarun;
    tarun.set_roll_number(007);
    tarun.set_marks(94.0, 90.0);
    tarun.display();
    cout<<"===================================="<<endl;

    //Multiple Inheritance
    Derived1 d1;
    d1.set_base1Int(24);
    d1.set_base2Int(37);
    d1.show();
    cout<<"===================================="<<endl;

    //Ambiguity resolution
    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();
    Derived1 d2;
    d2.greet();
    cout<<"===================================="<<endl;

    return 0;
}