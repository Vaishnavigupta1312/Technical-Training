#include <iostream>
#include <array>
using namespace std;

int main(){
    // int arr1[3]= {11,22,33};
    array<int,3> arr1 ={11,22,33};      //can also initialise array using 'class <datatype, size> object or variable name'
    cout<< arr1.size()<<endl;                 //prints the size of the array

    // to access/display values in array #1
    arr1[0]= 44;
    cout<< arr1[0]<<endl;

    // to access/display values in array using a for loop #2
    for (int i=0; i<arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // to access/display values in array using 'at' #3
    cout<< arr1.at(0)<<endl; 

    // to access/display values in array using iterators #4


    // to check if array is empty 0-False,not empty  1-True,empty
    cout<<arr1.empty()<<endl;

    // to display or access the first element of array
    cout<<arr1.front()<<endl;

    // to display or access the last element of array
    cout<<arr1.back()<<endl;

    // to overwrite all the elements with a same value 
    arr1.fill(50);
    for(int j=0; j<arr1.size(); j++){
        cout<<arr1.at(j)<<" ";
    }
    cout<<endl;
}
