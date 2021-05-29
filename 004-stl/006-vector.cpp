#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0; i<v.size(); i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element;
    for(int i=0; i<4; i++){
        cout<<"Enter an element to add to this vector :: ";
        cin>>element;
        vec1.push_back(element);
        //vec1.pop_back();
    }
    display(vec1);
    cout<<"========================="<<endl;

    //insert in the vector
    vector<int> :: iterator itr = vec1.begin();
    vec1.insert(itr+1, 5, 467);
    display(vec1);

    cout<<"=========================="<<endl;
    //create the vector
    vector<char> vec2(4);
    vector<double> vec3(4);
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);
    cout<<"The size of vec4 : "<<vec4.size()<<endl;
    cout<<"=========================="<<endl;

    return 0;
}