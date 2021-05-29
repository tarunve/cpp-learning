#include<iostream>

using namespace std;

int main(){

    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;

    // 1. Selection control structure: If else-if else ladder
    if((age<18) && (age>0)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    cout<<endl;
    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
        case 18: 
            cout<<"You are 18"<<endl;
            break;
        case 22: 
            cout<<"You are 22"<<endl;
            break;
        case 2: 
            cout<<"You are 2"<<endl;
            break;

        default:
            cout<<"No special cases"<<endl;
            break;
    }
    cout<<"Done with switch case"<<endl;
    cout<<endl;

    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    for (int i = 1; i <= 4; i++)
    {
        cout<<i<<endl;
    }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    int i=1;
    while(i<=4){
        cout<<i<<endl;
        i++;
    }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
        // Syntax:
        // do
        // {
        //     C++ statements;
        // }while(condition);
        
    //  Printing 1 to 40 using while loop
    i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);
    cout<<endl<<endl;

    //  break and continue
    //break is to stop the current loop
    for (int i = 0; i < 5; i++)
    {
        if(i==2){
            break;
        }
        cout<<i<<endl;
    }

    //continue is to stop the current iteration in loop
    for (int i = 0; i < 5; i++)
    {
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
