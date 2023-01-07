#include <iostream>
#include <fstream>
#include <numeric> // for accumulate()
#include <iterator>

using namespace std;

int main()
{
    ifstream myInt("data");
    istream_iterator<int> iter(myInt);
    istream_iterator<int> eos; // end of stream iterator

    cout << "Sum of the data is "
         << accumulate(iter, eos, 0)
         << endl;
    
    
    return 0;
}
