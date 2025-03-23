#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    vector<int> vect;//size 0

    vect.push_back(10); // add 10 in the last {10}
    vect.push_back(20); //add 20 in the last {10 ,20}
    vect.push_back(30); // add 30 in the last {10,20,30}
    cout <<"Size of vector is : "<<vect.size( )<<endl;

    //vect.size() to get size of vector

    //for each loop
    for( int i : vect ) // hear i is int because vect is int
    {
        cout << i <<endl; //print all the value of the vect
    }
    return 0;
}