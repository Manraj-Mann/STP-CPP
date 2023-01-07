/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


int main(){

    // initialization

    priority_queue<int> pq;

    // Important Methods

    // 1. empty()

    // 2. push()

    // 3. pop()

    // 4. size()

    // 5. top()

    // how to make a min heap

    vector<int> v = {1 ,2 ,3,4,5};
    
    priority_queue<int, vector<int>, greater<int> > pq2(v.begin() , v.end());


    

    return 0;
}