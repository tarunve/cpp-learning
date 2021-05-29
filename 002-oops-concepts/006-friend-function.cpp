#include<iostream>
using namespace std;

/**
 *  Friend function:
 *  ===============
 *  ->  Function which has access to the private data member of any class.
 *      To do this, friend function declaration would be needed in the class.
 *  ->  Not in the scope of class.
 *  ->  since it is not in the scope of the class, it cannot be called from the
 *      object of that class i.e. c1.sumComplex == invalid
 *  ->  Can be invoked without the help of any object.
 *  ->  Usually contains the objects as arguments.
 *  ->  Can be written in any scope - public or private.
 *  ->  It cannot access the members directly by their names and need object_name.member_name
 *      to access any member.
 */
class complex{
    int a;
    int b;
    friend complex sumComplex(complex c1, complex c2);

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        // Below line means that non member - sumComplex function is allowed to do anything
        // withn my private data member variables.
        friend complex sumComplex(complex c1, complex c2);
        void display(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex c1, complex c2){
    complex c3;
    c3.setData(c1.a+c2.a , c1.b+c2.b);
    return c3;
}

int main(){
    complex c[3];
    c[0].setData(1, 2);
    c[0].display();

    c[1].setData(3, 4);
    c[1].display();

    c[2] = sumComplex(c[0], c[1]);
    c[2].display();

    return 0;
}