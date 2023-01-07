/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

/*  
Insertion of Elements- O(log N)
Accessing Elements – O(log N)
Deleting Elements- O(log N)
*/
void print( multiset<int > &v){

    for (auto i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    
}

int main(){

    // Note : xception that multiple elements can have the same values

    // intialization

    multiset<int > ms = {1,2,5,3,4,5,5,5,5};

    // printing

    print(ms);

    // decreasing order

    multiset<int, greater<int> > ms2 = {1,2,5,3,4,5,5,5,5};

    for (auto i : ms2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

   // Important Functions 

    // 1. size()

    // 2. empty()

    // 3. insert()

    // 4. clear()

    // 5. erase()

    // 6. find()







    

    return 0;
}