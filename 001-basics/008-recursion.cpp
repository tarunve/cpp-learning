#include<iostream>
using namespace std;

int factorial(int number){
    if(number <= 1){
        return 1;
    }
    return number*factorial(number-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

//  Recursion -> function calling itself again till base condition is met.
int main(){
    int num1;
    cout<<"Enter the number :: "<<endl;
    cin>>num1;
    cout<<"Factorial for number "<<num1<<" is :: "<<factorial(num1)<<endl;
    cout<<"Fib for number "<<num1<<" is :: "<<fib(num1)<<endl<<endl;

    return 0;
}