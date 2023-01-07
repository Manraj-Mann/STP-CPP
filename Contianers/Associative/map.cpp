/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

void print(map<int , string> &mp){

    for(auto i : mp){

        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<endl;
}
void print2(map<int , string> &mp){

    for (auto i = mp.begin(); i != mp.end(); i++)
    {

        cout<<i->first<<" : "<<i->second<<endl;
    }

    cout<<endl;
}
int main(){

    // Note : No two mapped values can have the same key values.

    // initialization     

    map<int , string> mp;

    mp[10] = "ten";
    mp[4] = "four";
    mp[1] = "one";

    // printing

    print(mp);

    print2(mp);

    // Important functions 

    // 1. size()

    // 2. insert()

    // 3. count()

    // 4. empty()

    // 5. Accessing []

    // 6. find()

    return 0;
}