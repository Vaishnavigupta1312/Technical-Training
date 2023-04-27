#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    // vecror{10,20,30,40}
    // cout<<v1.begin()<<" "<<v1.end();

    auto it= v1.begin();
    v1.insert(it+3,35);   //inserting 35 at third pos ition
    for(int i: v1){      //auto defines the datatype of variable at run time by itself

        cout<<i<<" ";
    }
    cout<<endl;

}