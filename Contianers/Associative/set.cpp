/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

/*
Insertion of Elements – O(log N)
Deletion of Elements – O(log N)
*/


void print(set<int> &s){

    for (auto i : s){

        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){


    // Note : sets have values :  immutable , unique , sorted ,unindexed
    // initialization

    set<int> s = {1 ,2,4 , 3, 3,3};

    set<int> s2 = {5, 6};

    // printing

    print(s);

    // Set Sorted in Descending Order

    set<int, greater<int> > s3 = {10, 34, 32 , 344, 345};
    for (auto i : s3){

        cout<<i<<" ";
    }
    cout<<endl;

    // Important functions 


    // 1. insert()

    // 2. size()

    // 3. empty()

    // 4. begin() , end()

    // 5. erase()

    // 6. find()

    // 7. count()

    // 8. lower_bound()

    // 9. upper_bound()

    // 10. merge ()

    







    return 0;
}