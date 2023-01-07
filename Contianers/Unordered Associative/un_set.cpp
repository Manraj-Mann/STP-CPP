/*Author : Manraj Singh */
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

/*

An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 

*/

void print(unordered_set<int> &s){

        for( auto i : s){

            cout<<(i)<<" ";
        }

        cout<<endl;


}
int main(){

    unordered_set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    print(s);


    // Important functions 

    // 1. insert()

    // 2. begin()

    // 3. end()
    
    // 4. count()
    
    // 5. find()
    
    // 6. clear()


    return 0;
}


/**
 * Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1). 
 * 
 */
