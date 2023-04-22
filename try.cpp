#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v1.begin();

    // increment using it++
    cout << "using it++: " << endl;
    cout << *it << " ";    // print the value of the element pointed to by it
        cout << &(it) << endl; 
    for(int i=0; i<4; i++){
        it++;
        cout << *it << " ";    // print the value of the element pointed to by it
        cout << &(it) << endl;   // print the memory location of it
       
    }

    // reset the iterator
    it = v1.begin();

    // increment using it+=1
    cout << "using it+=1: " << endl;
     cout << *it << " ";    // print the value of the element pointed to by it
    cout << &(it) << endl;
    for(int i=0; i<4; i++){
        it+=1;
        cout << *it << " ";    // print the value of the element pointed to by it
        cout << &(it) << endl;   // print the memory location of it
        
    }

    return 0;
}