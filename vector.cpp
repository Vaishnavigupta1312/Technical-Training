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
    v1[0]=21;
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
    // using range (map)
    for(int x : v1){                                //we are copying the value and not accessing the direct values
        cout<<x<<" ";
    }
    cout<<endl;

    for(int &x : v1){                                //we can use & for accessing the direct values
        x++;
        // cout<<x<<" ";
    }
    for(int &x : v1){   
                                
        cout<<x<<" ";
    }
    cout<<endl;

    // using iterators - begin(), end(), rbegin(), rend()
    vector<int> :: iterator it = v1.begin();
    cout<<*it<<" "<<&it<<endl;                      //4 0x570ddff8b8 - (*-dereference operator)*it returns value stored at location pointed by it, like a pointer and (address-of operator) &it shows the address of the iterator, iterators are similar to pointers.......alone it is not a printable datatype so if printed will return error.
    it++;  
    // it+=1;                                         //now it points the second location
    cout<<*it<<" "<<&it<<endl;

    // for(vector<int>:: iterator it= v1.begin(); it!=v1.end();it++){
    for(auto it= v1.begin();it!=v1.end();it++){      //auto defines the datatype of variable at run time by itself
        cout<<*it<<" ";
    }
    cout<<endl;



    // v1={4,22,33,44,10}
    cout<<v1.front()<<" "<<v1.back()<<endl;         //front points to the first element=4 and back=10 points to the last element

    cout<<v1.size()<<endl;                          //gives the size of vector, 5
    v1.pop_back();                                  //removes the last element , pops 10
    cout<<v1[4]<<endl;                              //size became 4 after popping last element
    
    cout<<v1.size()<<endl;
    for (int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";                           //for checking what happened on using the pop_back()
    }
    cout<<endl;

    v1.clear();                                     //clears all the data at once
    cout<<v1.size()<<endl;                          //size becomes 0
    for (int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";                           //prints nothing
    }
    cout<<endl;



    
}
