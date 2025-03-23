#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vect ={1,2,3,4,5} ;
    
    cout << vect.front( )<<endl; //to get first value
    cout << vect.back( )<<endl; // to get last value
    cout << vect.at(2)  << endl; //to get 2 index value
    return 0;
}