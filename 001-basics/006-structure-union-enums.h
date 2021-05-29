#include<iostream>
using namespace std;
//Structure is basically to user defuned data type to combine different data types.
struct employee
{
    int eId;
    char favChar;
    float salary;
};

//2nd way 
typedef struct student
{
    int studentId;
} st;

//union - used for better memory mnagement.
//suppose , I have 3 fields in a union , then memory will be shared between them.
//and we can get only one correct value at a time. 
union money{
    int dollars;
    float pounds;
    char currency;
};