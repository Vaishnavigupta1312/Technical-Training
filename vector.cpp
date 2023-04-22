#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> v1;
    vector <int> v1 ={11,22,33,44};
    vector<int> v2(5,6);            //initialises a vector of size 5 and initialises it with 6

    // to insert
    v1.push_back(10);
    cout<<v1[4]<<" "<<v1[0]<<endl;


    // to access values in vector #1
    v1[0]=5;
    cout<<v1[0]<<endl;

    // to access values in vector #2
    v1.at(0)=4;
    cout<<v1[0]<<endl;

    // to access values in a vector using for loop #3
    // (i)using vector size
    for (int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    // using range


    // using iterators

    // v1={4,22,33,44,10}
    cout<<v1.front()<<" "<<v1.back()<<endl;         //front points to the first element=4 and back=10 points to the last element

    cout<<v1.size()<<endl;
    v1.pop_back();
    cout<<v1[4]<<endl;
    cout<<v1.size()<<endl;
    
}
