#include<iostream>
using namespace std;

//template function
template <class T>
void swapp(T &a, T &b){
    T temp =  a;
    a = b;
    b = temp;
}

template <class T1, class T2>
class MyClass{
    public:
        T1 data1;
        T2 data2;
        MyClass(){}
        MyClass(T1 a, T2 b){
            this->data1 = a;
            this->data2 =b;
        }
        float average(T1, T2);
};
//template function can be written outside the class as well.
template <class T1, class T2>
float MyClass<T1, T2>::average(T1 a, T2 b){
    return (a+b)/2.0;
}
//=========================================

void func(int a){
    cout<<"I am first func"<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatized func"<<a<<endl;
}

int main(){
    MyClass <int, int>myClass;
    float a = myClass.average(5, 3);
    printf("The average of these nummber is %.3f : ", a);

    cout<<endl<<"=================="<<endl;
    int x=5, y=7;
    swapp(x, y);
    cout<<x<<" "<<y<<endl;
    cout<<"=================="<<endl;

    func(4);    //Exact match will be executed so templatized function will not be called.

    return 0;
}