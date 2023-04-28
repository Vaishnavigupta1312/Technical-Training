#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(11);                    //{11}
    d.push_back(22);                    //{11,22}
    d.push_front(33);                   //{33,11,22}
    d.push_front(44);                   //{44,33,11,22}
    cout<<"Size = "<<d.size()<<endl;

    cout<<d.empty()<<endl;                    //returns 1 if deque is empty

    // cout<<d[0]<<endl;
    cout<<d.at(0)<<endl;               //can access values using index randomly

    // pop_back() and pop_front()
    d.pop_back();                       // deleted 22
    d.pop_front();                      // deleted 44

    cout<<"Size = "<<d.size()<<endl;

 //erase and clear function
    deque<int> d1={1,2,3,4,5};
    // to erase an element 
    // auto it = d1.begin();
    // d1.erase(it+2);   

    auto it =d1.begin()+2;
    d1.erase(it);
    
    for(int i:d1){
        cout<<i<<" ";
    }
    cout<<endl;

    // delete 3-7 included
    deque<int> d2= {1,2,3,4,5,6,7,8,9,10};

    auto it1 = d2.begin()+2;
    auto it2 = d2.begin()+7;

    cout<<*it1<<" "<<*it2<<endl;
    d2.erase(it1,it2);
    
    for(int j:d2){
        cout<<j<<" ";
    }
    cout<<endl;
}