#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vect ={1,2,3,4,5} ;
    cout <<"Size of vector is : "<<vect.size( )<<endl;
    cout <<"Capacity of vector is : "<< vect.capacity( )<<endl;
    //capacity >= size
    return 0;
}