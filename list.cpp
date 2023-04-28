#include<iostream>
#include<list>
using namespace std;

// list uses doubly linked list

int main(){
    list<int> l1 ={11,22,33,44};
    list<int> l2 ={3,4,5,6};

    /* in list random access is not allowed
    l1[0] X
    l1.ar(0) X
    */

//    First type of for loop using iterator to access values 
   for(auto it1 : l1){
      cout<<it1<<" ";
   }
   cout<<endl;

//     Second type of for loop using iterator to access values
    auto it2=l1.begin();
    for(it2;it2!=l1.end();it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;

// if initially list is empty both functions work as list is implemented using doubly linked list
    list<int> l3;
    l3.push_back(1);
    l3.push_back(2);
    l3.push_back(3);
    l3.push_front(4);       //{4,1,2,3}

    l3.pop_back();          //{4,1,2}
    l3.pop_front();         //{1,2}

// removing any element from list 
    l1.remove(22);for(auto it1 : l1){
      cout<<it1<<" ";
   }
   cout<<endl;

}