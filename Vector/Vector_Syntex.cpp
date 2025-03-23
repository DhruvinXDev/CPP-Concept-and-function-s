#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vec1;    
    vector<int> vect2 = {1,2,3}; 
    vector<int> vect3(3,0); 
    //vect3(3,0) mean 3 is a size of vector and o is the initial value of the all index

    // for each loop
    for(int i : vect3)
    {
        cout << i << endl; // print the all value of vect3
    }
    return 0;
}