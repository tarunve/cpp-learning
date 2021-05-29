#include<iostream>
using namespace std;

/**
 *  Static Member Variable:
 *  ======================
 *  ->  How to make variable static :
 *  ->  Declare static variable inside class.
 *  ->  Declare the variable outside the class as well.
 * 
 *  Static Member Function:
 *  ======================
 *  ->  Those function which can access only the static member variables.
 */
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the id : "<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"Employee id : "<<id<<endl;
        }
        // Static member function.
        static void getCount(){
            cout<<"The value of count : "<<count<<endl<<endl;
        }
} e1, e2, e3;

//static member declaration outside the class and will be associated with class member variable.
int Employee::count;

int main(){
    e1.setData();
    e1.getData();
    Employee::getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}