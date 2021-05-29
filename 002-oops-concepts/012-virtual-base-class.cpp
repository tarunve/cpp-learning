#include<iostream>
using namespace std;

/**
 *  Virtual Base Class:
 *  ==================
 *  ->  we can make extended class as virtual so that the member of class are available to indirect child 
 *      as well without extending it in indirect child.
 */
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout<<"Your roll number is : "<<roll_no<<endl;
        }
};
class Test: virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }
        void print_marks(){
            cout<<"Marks obtained in maths are : "<<maths<<endl;
            cout<<"Marks obtained in physics are: "<<physics<<endl;
        }
};
class Sprots: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Marks obtained in PT are : "<<score<<endl;
        }
};
class Result: public Test, public Sprots{
    private:
        float total;
    public:
        void display(){
            total = maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl;
        }
};

int main(){
    Result tarun;
    tarun.set_number(4200);
    tarun.set_marks(78.9, 347.9);
    tarun.set_score(8);
    tarun.display();

    return 0;
}