/*Author : Manraj Singh */
#include <bits/stdc++.h>
#include <list>
using namespace std;

void print(list<int> &l)
{

    for (auto i = l.begin(); i != l.end(); i++)
    {
        cout << (*i) << " ";
    }
    cout << endl;
}

int main()
{

    // Note : [] isnt valid

    // Initialization

    list<int> l1 = {1, 2, 4,3, 5};
    list<int> l2;
    list<int> l3(10 , 1);

    // printing list

    print(l1);
    // print(l2);
    // print(l3);

    // Important functions

    // 1. front ()

    cout<<l1.front()<<endl;

    // 2. back ()

    cout<<l1.back()<<endl;

    // 3. push_front ()

    l1.push_front(10);
    print(l1);

    // 4. push_back ()

    l1.push_back(10);
    print(l1);

    // 5. pop_fornt ()

    l1.pop_front();
    print(l1);

    // 6. pop_back ()

    l1.pop_back();
    print(l1);

    // 7. empty ()

    if (l1.empty()){

        cout<<"list is empty\n";
    }
    else{

        cout<<"list is not empty\n";
        
    }
    // 8. insert ()

    l1.insert(l1.begin() , 100);
    print(l1);

    // 9. erase ()

    l1.erase(l1.begin());
    print(l1);

    // 10. sort ()

    l1.sort();
    print(l1);

    // 11. reverse ()

    l1.reverse();
    print(l1);


    return 0;
}