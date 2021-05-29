#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

/**
 *  Function Objects (Functor): Function wrapped in a class so that it is 
 *  available like an object.
 */ 
int main(){
    int arr[] = {1,33,4,12,54,77,34};
    sort(arr, arr+5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}