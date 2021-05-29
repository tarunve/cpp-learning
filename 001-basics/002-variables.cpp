#include<iostream>
#include<iomanip>
using namespace std;

int c = 67;

int main(){
    int a,b,c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is : "<<c<<endl;
    cout<<"The global c is : "<<::c<<endl<<endl;

    // Float , double and long double literals.
    float d = 34.34f;
    long double e = 34.34l;
    cout<<"The value of d is : "<<d<<endl<<"The value of e is :"<<e<<endl;
    cout<<"Size of 34.34 is "<<sizeof(34.34)<<endl;
    cout<<"Size of 34.34f is "<<sizeof(34.34f)<<endl;
    cout<<"Size of 34.34F is "<<sizeof(34.34F)<<endl;
    cout<<"Size of 34.34l is "<<sizeof(34.34l)<<endl;
    cout<<"Size of 34.34L is "<<sizeof(34.34L)<<endl<<endl;

    //reference variables
    float f = 455;
    float &g = f;
    cout<<"Value f :"<<f<<endl;
    cout<<"Value g :"<<g<<endl<<endl;
    
    //Type Casting
    int h = 45;   
    float i = 45.46;
    cout<<"The value of h is "<<(float)h<<endl;
    cout<<"The value of h is "<<float(h)<<endl;

    cout<<"The value of i is "<<(int)i<<endl;
    cout<<"The value of i is "<<int(i)<<endl;
    int j = int(i);

    cout<<"The expression is "<<h + i<<endl;
    cout<<"The expression is "<<h + int(i)<<endl;
    cout<<"The expression is "<<h + (int)i<<endl<<endl;

    //Constants
    const int k = 45;
    //k=4;  //will give error and it can't be re-assigned.
    cout<<"The value of k  : "<<k<<endl;

    // Manipulators in C++
    // iomanip need to included
    int l =3, m=78, n=1233;
    cout<<"The value of l without setw is: "<<l<<endl;
    cout<<"The value of m without setw is: "<<m<<endl;
    cout<<"The value of n without setw is: "<<n<<endl;

    cout<<"The value of l is: "<<setw(4)<<l<<endl;
    cout<<"The value of m is: "<<setw(4)<<m<<endl;
    cout<<"The value of n is: "<<setw(4)<<n<<endl;


    // Operator Precedence
    int o =3, p=4;
    // int c = (a*5)+b;
    int q = ((((o*5)+p)-45)+87);
    cout<<q;

    return 0;
}