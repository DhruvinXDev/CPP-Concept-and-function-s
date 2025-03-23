#include<iostream>
#include <vector>
using namespace std;

int main ( )
{
    //find the single number in the vector 
    vector<int> vect ={1,1,4,3,5,4,5} ;
    int ans =0;
    // n ^ n = 0
    // n ^ 0 = n
    
    for(auto i : vect)
    {
        ans ^= i;
    }
    cout << "Ans : "<<ans;
    return 0;
}