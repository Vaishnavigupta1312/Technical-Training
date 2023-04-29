#include<iostream>
#include<set>
using namespace std;

int main(){
    set<char>s;
    char ch;
    int n;
    cout<<"Enter no of elements in set : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ch;
        s.insert(ch);

    }
    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
}