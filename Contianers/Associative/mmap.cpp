/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

void print(multimap<int , string> &mp){

    for(auto i : mp){

        cout<<i.first<<" : "<<i.second<<endl;
    }

    cout<<endl;
}
void print2(multimap<int , string> &mp){

    for (auto i = mp.begin(); i != mp.end(); i++)
    {

        cout<<i->first<<" : "<<i->second<<endl;
    }

    cout<<endl;
}
int main(){

    // Note : it is NOT required that the key-value and mapped value pair have to be unique in this case.

    // initialization     

    multimap<int , string> mp;

    // printing

    print(mp);

    print2(mp);

    // Important functions 

    // 1. size()

    // 2. insert()

    // 3. count()

    // 4. empty()

    // 5. find()

    // 6. count ()



    return 0;
}