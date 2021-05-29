#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator iter;
    for(iter=lst.begin(); iter!=lst.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    //list<int> list1;  // empty list of 0 length
    list<int> list2(7); //empty list of length 7
    list2.push_back(2435);
    list2.push_back(32);
    list2.push_back(3);
    list2.push_back(47);
    list2.push_back(98434);
    list2.push_back(437);
    list2.push_back(24335);

    display(list2);

    return 0;
}