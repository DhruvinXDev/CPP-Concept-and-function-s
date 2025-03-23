#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vect ={1,2,3,4,5} ;
    cout <<"Size of vector is : "<<vect.size( )<<endl; //vect.size() to get size of vector

    //for each loop
    for( int i : vect ) // hear i is int because vect is int
    {
        cout << i <<endl; //print all the value of the vect
    }
    return 0;
}