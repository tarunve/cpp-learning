#include<iostream>
using namespace std;

/**
 *  Types of Inheritance:
 *  ====================
 *  1.  Single Inheritance :
 *      ->  A derived class with only one base class.
 *      Multiple Inheritance:
 *      ->  Derived class with more than one base class.
 *  2.  Hierarchical Inheritance :
 *      ->  Several derived classes from single base class.
 *  3.  MultiLevel Inheritance :
 *      ->  Deriving a class from already derived class.
 *  4.  Hybrid Inheritance:
 *      ->  Combination of multiple and multi-level inheritance.
 *      ->  A class is derived from two classes as in multiple inheritance.
 *      ->  However, one of the parent classes is not the base class.
 */

class Employee{
    int salary;
    public:
        int id;
        Employee(){}
        Employee(int empId){
            id = empId;
            salary = 45000;
        }
        int getSalary(){
            return salary;
        }
        void setSalary(int sal){
            salary = sal;
        }
};

//Derived class
// class {{ derived-class-name }} : {{ visibility-mode }} {{ base-class }} { class member and functions }
//  ->  Default visibility mode is private.
//  ->  visibility mode decides the visibility of base class to derived class 
//      ->  if public, public member of base class will be public members in derived class.
//      ->  if private , public memeber of base class will be private members in derived class.
//  ->  We can't inherit the private members.
class Programmer : public Employee{
    public:
        int languageCode=9;
        Programmer(int prmId){
            id = prmId;
            setSalary(37784);
        }
};

int main(){
    Employee e1(2);
    cout<<"Employee Id : "<<e1.id<<" , Employee Salary : "<<e1.getSalary()<<endl;

    Programmer p1(2);
    cout<<"Programmer Id : "<<p1.id<<" , Programmer Salary : "<<p1.getSalary()<<endl;

    return 0;
}