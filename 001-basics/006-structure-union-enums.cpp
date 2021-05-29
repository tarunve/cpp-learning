#include<iostream>
#include "basics_006_structure_union_enums.h"
using namespace std;

int main(){
    //1st way to use structure
    struct employee emp;
    emp.eId = 12; 
    emp.favChar='A'; 
    emp.salary=13000.0f;
    cout<<"employee e1 :: "<<emp.eId<<", "<<emp.favChar<<", "<<emp.salary<<endl;

    //2nd way - using typedef
    st student1;
    student1.studentId = 123;
    cout<<"student student1 :: "<<student1.studentId<<endl;

    union money m1;
    m1.currency='I';
    cout<<"The currency in money :: "<<m1.currency<<endl;
    m1.dollars='I';
    cout<<"The dollars in money :: "<<m1.dollars<<endl;
    m1.pounds='I';
    cout<<"The pounds in money :: "<<m1.pounds<<endl;
    //garbage value
    cout<<"The currency in money again :: "<<m1.currency<<endl;
    cout<<"The dollars in money again :: "<<m1.dollars<<endl;

    //enum
    enum Meal{ breakfast, lunch, dinner };
    Meal m2 = breakfast;
    cout<<"Meal is :: "<<m2<<endl;

    return 0;
}
