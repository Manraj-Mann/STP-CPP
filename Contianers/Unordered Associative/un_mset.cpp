/*Author : Manraj Singh */
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void print(unordered_multiset<int > &ms){

    for (auto i : ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}
int main(){


    // initialization

    unordered_multiset<int> ms = {2, 7, 2, 5, 0, 3, 7, 5};

    print(ms);
    
    // Important functions 

    // 1. insert()

    // 2. begin()

    // 3. end()
    
    // 4. count()
    
    // 5. find()
    
    // 6. clear()

    return 0;
}