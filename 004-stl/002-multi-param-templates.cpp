#include<iostream>
using namespace std;

/**
 *  Syntax:
 *  ======
 *      template<class T1, class T2>
 *      class name-of-class{}
 */
template <class T1, class T2>
class MultiParam{
    public:
        T1 data1;
        T2 data2;
        MultiParam(T1 a, T2 b){
            this->data1 = a;
            this->data2 =b;
        }
        void display(){
            cout<<"Value of data1 : "<<data1<<endl;
            cout<<"Value of data2 : "<<data2<<endl;
        }
};

int main(){
    MultiParam <char, double>mp('T' , 123.389);
    mp.display();
    cout<<"================="<<endl;

    MultiParam <string, bool>mp1("Tarun" , false);
    mp1.display();
    cout<<"================="<<endl;

    MultiParam <float, int>mp2(273.3f , 123);
    mp2.display();
    cout<<"================="<<endl;

    return 0;
}