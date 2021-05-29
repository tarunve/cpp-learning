#include<iostream>
using namespace std;

//Forward declaration
class complex;

class Calculator{
    public:
        int sumRealComplex(complex, complex);
        int sumCompComplex(complex, complex);
};

class complex{
    int a;
    int b;
    //Individually declaring functions as friends.
    friend int Calculator::sumRealComplex(complex, complex);
    friend int Calculator::sumCompComplex(complex, complex);
    //declaring entire class as friend
    friend class Calculator;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void display(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator::sumRealComplex(complex c1, complex c2){
    return c1.a + c2.a;
}

int Calculator::sumCompComplex(complex c1, complex c2){
    return c1.b + c2.b;
}

int main(){
    complex c[3];
    c[0].setData(1, 2);
    c[0].display();

    c[1].setData(3, 4);
    c[1].display();

    Calculator cal;
    int real = cal.sumRealComplex(c[0], c[1]);
    cout<<"Sum of Real part :: "<<real<<endl;
    int comp = cal.sumCompComplex(c[0], c[1]);
    cout<<"Sum of Comp part :: "<<comp<<endl;


    return 0;
}