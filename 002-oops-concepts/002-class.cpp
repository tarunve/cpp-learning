#include<iostream>
using namespace std;

/*  
 *  Structure limitations:
 *  =====================
 *  ->  Data hiding is not possible. 
 *  ->  Function can't be defined in the structure.
 * 
 *  Class:
 *  =====
 *  ->  Above limitations can be overcome by using classes. Extension of structures.
 *  ->  structure should be used when we have to play with some public fields only.
 *  ->  
 */
class Employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a, int b, int c);
        void getData(){
            cout<<"The value of a is :: "<<a<<endl;
            cout<<"The value of b is :: "<<b<<endl;
            cout<<"The value of c is :: "<<c<<endl;
            cout<<"The value of d is :: "<<d<<endl;
            cout<<"The value of e is :: "<<e<<endl;
        }
};

// Way to write the function outside the class using ::
void Employee::setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
};

//==========================================
// class can be created with object declaration.
class binary{
    // below string is private because by default ,class members are private.
    string s;
    
    public:
        void read(void);
        void chk_bin(void);
} b1;

void binary :: read(){
    cout<<"Enter a binary number :: "<<endl;
    cin>>s;
};

void binary :: chk_bin(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect binary number."<<endl;
            exit(0);
        }
    }
};
//===========================================
int main(){
    Employee e1;
    e1.setData(1, 2, 3);
    e1.d = 4; e1.e = 5;
    e1.getData();

    b1.read();
    b1.chk_bin();

    return 0;
}