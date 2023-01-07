#include <iostream>
#include <iterator>
#include <vector>

/* for ptrdiff_t */
#include <cstddef>

using namespace std;

template <typename Random>
Random getRandomElement(Random first, Random last)
{
    ptrdiff_t d = last - first;
    return first + rand() % d;
}

int main()
{
    vector<int> v(10);
    for (int i = 0; i < v.size(); i++)
        v[i] = i;

    for (int i = 0; i < 20; i++)
        cout << *getRandomElement(v.begin(), v.end()) << " ";
    cout << endl;

    return 0;
}
