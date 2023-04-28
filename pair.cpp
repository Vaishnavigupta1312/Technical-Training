#include<iostream>
#include<utility>
using namespace std;

// Methods of inserting values in a pair

int main(){
    // first method
    pair<string, int> p1;
    p1.first = "AB";
    p1.second= 266;

    cout<<p1.first<<" "<<p1.second<<endl;

    // second method
    pair<string,int> p2;
    p2=make_pair("CD",211);

    cout<<p2.first<<" "<<p2.second<<endl;

    // third method
    pair<string,int> p3;
    p3={"EF", 321};
    cout<<"Before swap value of P3: "<<p3.first<<" "<<p3.second<<endl;

    pair <string,int>p4={"GH",432};
    cout<<"Before swap value of P4: "<<p4.first<<" "<<p4.second<<endl;

    // swapping values of two pairs
    p3.swap(p4);
    cout<<"After swap value of P3: "<<p3.first<<" "<<p3.second<<endl;
    cout<<"After swap value of P4: "<<p4.first<<" "<<p4.second<<endl;



}




