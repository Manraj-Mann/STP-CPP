/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


int main(){

    // initalization

    stack<int> s;

    // Important functions

    // 1. empty()

    cout<<s.empty()<<endl;

    // 2. push()

    s.push(2);
    s.push(3);
    s.push(5);

    // 3. pop()


    cout<<s.top()<<endl;

    s.pop();

    // 5. top()
    cout<<s.top()<<endl;

    // 4. size()
    cout<<s.size()<<endl;


    return 0;
}