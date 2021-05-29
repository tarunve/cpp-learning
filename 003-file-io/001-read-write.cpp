#include<iostream>
#include<fstream>

using namespace std;

/**
 *  ->  The useful classes for working with files in C++ are:
 *      1.  fstreambase
 *      2.  ifstream -> derived from fstreambase
 *      3.  ofstream -> derived from fstreambase
 *  ->  In order to work with files in C++, you will have to open it.
 *      Primarily, there are 2 ways to open a file:
 *      1.  Using the constructor
 *      2.  Using the member function open() of the class.
 */ 

int main(){
    //writing to a file using constructor.
    string s = "I'm writing to a file";
    ofstream out("sample_file_write.txt");
    out<<s;
    out.close();

    //reading from a file using constructor.
    string str;
    ifstream in("sample_file_read.txt");
    getline(in, str);
    cout<<str<<endl;
    in.close();
    cout<<"======================"<<endl;

    //writing to a file using member function open().
    string s1 = "I'm writing to a file";
    ofstream out1;
    out1.open("sample_file_write_open.txt");
    out1<<s<<"\n"<<"This is the second line.";
    out1.close();

    //reading from a file using constructor.
    string str1;
    ifstream in1;
    in1.open("sample_file_write_open.txt");
    while(in1.eof() == 0){
        getline(in1, str1);
        cout<<str1<<endl;
    }
    in1.close();



    return 0; 
}