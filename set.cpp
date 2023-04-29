#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    // set<int> s={3,4,3,5,6};
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(2);

    for(auto it=s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    // deleting 2 
    auto it1= s.begin();
    it1++;
    s.erase(it1);
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
}