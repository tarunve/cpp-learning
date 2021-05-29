#include<iostream>
using namespace std;

template <class T1=int, class T2=float>
class DefaultTypeTemplate{
    public:
        T1 data1;
        T2 data2;
        DefaultTypeTemplate(T1 a, T2 b){
            this->data1 = a;
            this->data2 =b;
        }
        void display(){
            cout<<"Value of data1 : "<<data1<<endl;
            cout<<"Value of data2 : "<<data2<<endl;
        }
};

int main(){
    DefaultTypeTemplate <>d1(4, 4.6);
    d1.display();
    cout<<"===================="<<endl;

    DefaultTypeTemplate <float>d2(4.8, 4.6);
    d2.display();
    cout<<"===================="<<endl;

    DefaultTypeTemplate <string ,double>d3("Tarun", 4.6);
    d3.display();
    cout<<"===================="<<endl;

    return 0;
}