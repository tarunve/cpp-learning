#include<iostream>
using namespace std;

/*
 *  ->  Array is collection of items of similar type stored in contiguous memory location.
 *  ->  Sometimes, a simple variable is not enough to hold all the data. So, can store it in array.
 */
int main(){
    //1st way to declare array
    int marks[] = {12,34,45,67};
    cout<<"Marks at 0 location :: "<<marks[0]<<endl<<endl;

    //2nd way to declare array
    int marksMath[4];
    marksMath[0] = 123;
    cout<<"Marks at 0 location :: "<<marksMath[0]<<endl<<endl;

    //looping over array
    for(int i=0; i<4; i++){
        cout<<"Value of marks "<<i<<" is "<<marks[i]<<endl<<endl;
    }

    //Array and pointer
    //Pointer arithmetic : 
    //      address(p+i) = address_current + i*sizeof(data_type) 
    int* p = marks;
    for(int i=0; i<4; i++){
        cout<<"Value of marks "<<i<<" is "<<*p++<<endl;
    }

    return 0;
}