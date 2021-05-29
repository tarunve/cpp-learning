#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex c1, complex c2){
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }
        void display(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c[3];
    c[0].setData(1, 2);
    c[0].display();

    c[1].setData(3, 4);
    c[1].display();

    c[2].setDataBySum(c[0],c[1]);
    c[2].display();

    return 0;
}