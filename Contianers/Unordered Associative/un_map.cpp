/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

/*
Internally unordered_map is implemented using Hash Table, the key provided to map is hashed into indices of a hash table which is why the performance of data structure depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1).
*/

void print(unordered_map<int, string> &umap)
{

    for (auto x : umap)
        cout << x.first << " : " << x.second << endl;
}
int main()
{

    unordered_map<int, string> mp;


    // Important funtions

    // 1. size()

    // 2. empty()

    // 3. count()

    // 4. find()

    // 5. erase()
    
    return 0;
}