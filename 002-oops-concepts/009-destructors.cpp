#include<iostream>
using namespace std;

/**
 *  Destructors:
 *  ===========
 *  ->  Used to de-allocate the memory acquired by the constructor when object is being destroyed.
 *  ->  Never takes any arguments and doesn't return any value.
 */

//Global Variable
int count =0;

class Num{
    public:
        Num(){
            count++;
            cout<<"This is the time when constructor is called for object number : "<<count<<endl;
        }
        //Destructor
        ~Num(){
            cout<<"This is the time when destructor is called for object number : "<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"Main starting..."<<endl<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating 2 more objects n2, n3"<<endl;
        Num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Main exiting..."<<endl<<endl;

    return 0;
}