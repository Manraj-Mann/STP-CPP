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

    list<int> l1 = {1, 2, 3, 4, 5};
    list<int> l2;
    list<int> l3(10);

    // printing list

    print(l1);
    print(l2);
    print(l3);

    // Important functions

    // 1. front ()

    // 2. back ()

    // 3. push_front ()

    // 4. push_back ()

    // 5. pop_fornt ()

    // 6. pop_back ()

    // 7. empty ()

    // 8. insert ()

    // 9. erase ()

    // 10. sort ()

    // 11. reverse ()

    return 0;
}