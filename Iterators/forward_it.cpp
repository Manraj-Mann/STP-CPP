#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

template <typename ForwardIterator>
void square(ForwardIterator first, ForwardIterator last)
{
    cout << "Squares:  ";
    for (; first != last; first++)
    {
        *first = (*first) * (*first);
        cout << *first << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));

    cout << "Elements: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    square(v.begin(), v.end());

    return 0;
}
