#include<iostream>
#include<vector>
//using namespace std;

/**
 *  Templates
 *  =========
 *  ->  Also called as parameterized classes. Similar to generic classes in Java.
 *  ->  Syntax :
 *          template <class T>
 *      where T can be any data type like int, float etc.
 */
template <class T>
class vector{
    public:
        T* arr;
        int size;
        vector(int m){
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for(int i=0; i<size; i++){
                d+= this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 2;

    vector<int>v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;

    int a = v1.dotProduct(v2);
    std::cout<<"The dot product of v1 and v2 is : "<<a<<std::endl;
    std::cout<<"=========================="<<std::endl;

    vector<double>v3(3);
    v3.arr[0] = 4.03;
    v3.arr[1] = 3.34;
    v3.arr[2] = 2.54;

    vector<double>v4(3);
    v4.arr[0] = 1.34;
    v4.arr[1] = 3.45;
    v4.arr[2] = 1.47;

    double a1 = v3.dotProduct(v4);
    std::cout<<"The dot product of v3 and v4 is : "<<a1<<std::endl;

    return 0;
}