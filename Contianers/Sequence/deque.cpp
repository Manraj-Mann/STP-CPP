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
    print2(d2);
    // print3(d1);

    // Important functions 

    // 1. insert()

    d1.insert(d1.begin()+1 , 10 , 2);
    print2(d1);

    // 2. push_front()

    d1.push_front(10);
    print2(d1);

    // 3. push_back()

    d1.push_back(100);
    print2(d1);

    // 4. pop_front()

    d1.pop_front();
    print2(d1);

    // 5. pop_back()

    d1.pop_back();
    print2(d1);

    // 6. front()
    
    cout<<d1.front()<<endl;
    
    // 7. back()

    cout<<d1.back()<<endl;

    // 8. clear()

    // d1.clear();

    // 9. size ()

    cout<<d1.size()<<endl;

    // 10. at
    
    cout<<d1.at(3);

    return 0;
}