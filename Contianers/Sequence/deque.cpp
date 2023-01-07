/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;

void print(deque<int> &d){

    for (int i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    
}

void print2(deque<int> &d){

    for (auto i = d.begin(); i != d.end(); i++)
    {
        cout<<(*i)<<" ";
    }

    cout<<endl;
    
}

void print3(deque<int> &d){

    for (auto i : d)
    {
        cout<<(i)<<" ";
    }

    cout<<endl;
    
}


int main(){

    // initialization 

    deque<int> d1 = { 1, 2, 3, 4};
    deque<int> d2;


    // print
    print(d1);
    print2(d1);
    print3(d1);

    // Important functions 

    // 1. insert()

    // 2. push_front()

    // 3. push_back()

    // 4. pop_front()

    // 5. pop_back()

    // 6. front()
    
    // 7. back()

    // 8. clear()

    // 9. size ()

    // 10. at
    

    return 0;
}