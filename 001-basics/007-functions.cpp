#include<iostream>
using namespace std;

//main is also a function which will be executed first.
//Function Prototype -> type function-name(arguments)
//int sum(int a, int b);
//int sum(int a, b) - Not acceptable
int sum(int , int );
int product(int x, int y);
float defaultArgs(int, float);

//call by vallue
void swap(int a , int b){
    int temp = a; 
    a = b;
    b = temp;
}

//call by reference using pointers
void swapPointer(int* a , int* b){
    int temp = *a; 
    *a = *b;
    *b = temp;
}

//call by reference using pointers
void swapReference(int &a , int &b){
    int temp = a; 
    a = b;
    b = temp;
}

int main(){
    //sum function
    int num1, num2;
    cout<<"Enter first number :: "<<endl;
    cin>>num1;
    cout<<"Enter second number :: "<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters.
    cout<<"Sum of 2 numbers is :: "<<sum(num1,num2)<<endl<<endl;

    //function call by value 
    //swap will not happen as actual values will be copied to the method arguments.
    int a=7, b=8;
    cout<<"The value of a :: "<<a<<endl<<"The value of b :: "<<b<<endl;
    swap(a,b);
    cout<<"The value of a :: "<<a<<endl<<"The value of b :: "<<b<<endl<<endl;

    //function call by reference 
    //swap will not happen as actual values will be copied to the method arguments.
    int d=7, e=8;
    cout<<"The value of d :: "<<d<<endl<<"The value of e :: "<<e<<endl;
    swapPointer(&d,&e);
    cout<<"The value of d :: "<<d<<endl<<"The value of e :: "<<e<<endl<<endl;

    //function call by reference using reference variable
    int f=7, g=8;
    cout<<"The value of f :: "<<f<<endl<<"The value of g :: "<<g<<endl;
    swapPointer(&f, &g);
    cout<<"The value of f :: "<<f<<endl<<"The value of g :: "<<g<<endl<<endl;

    //inline function call
    cout<<"Inline function output"<<product(3,4)<<endl<<endl;

    //default argument
    cout<<"Default argument function call output :: "<<defaultArgs(123, 1.02)<<endl<<endl; 

    return 0;
}

// Error - 'sum' was not declared in this scope
// Function prototype will be needed for its access.
int sum(int a, int b){
    //Formal Parameters a, b will be taking values from actual parameters num1 & num2
    return a+b;
}

// If there are multiple calls for the function ,we can make it inline function. So,
// it will be stored in cache.
// ->   Don't use inline with static variable.
// ->   Don't use inline function if function is big as it will take lot of memory.
// ->   Compiler decide if to make the function as  inline or not.
inline int product(int a, int b){
    return a*b;
}

// Default Arguments
// ->   Default arguments to be written in the end.
float defaultArgs(int value1, float value2=0.1){
    return value1*value2;
}