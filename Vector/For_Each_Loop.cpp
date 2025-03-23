#include <iostream>
#include <vector>
using namespace std;

int main( )
{
    vector<int> vect ={1,2,3,4,5} ;
    //for each loop
    for( int i : vect ) // hear i is int because vect is int
    {
        cout << i <<endl; //print all the value of the vect
    }

    vector<string> vect_s ={"dhruvin" , "darshan" , "Shreeja"};

    for( string s : vect_s)
    {
        cout << s << endl;
    }

    cout <<"With using auto keyword"<<endl ;

    for(auto i : vect)
    {
        cout << i <<endl;
    }

    for(auto s : vect_s)
    {
        cout << s << endl;
    }
    return 0;
}