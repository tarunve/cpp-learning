#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Mannu"] = 3783;
    marksMap["Vishu"] = 7834;
    marksMap["Tarun"] = 439983;
    //marksMap.insert("Deepak", 378);

    map<string, int> :: iterator itr;
    for(itr=marksMap.begin(); itr!=marksMap.end(); itr++){
        cout<<(*itr).first<<"->"<<(*itr).second<<endl;
    }

    cout<<"The size of marks map is : "<<marksMap.size()<<endl;

    return 0;
}