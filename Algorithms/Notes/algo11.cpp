/*                                  SEARCHING THE ELEMENTS 


    UNSORTED : 

    1) find : Returns an iterator to the first element in the range [first, last) that satisfies specific criteria:

             find searches for an element equal to value

        example : if this is sequence :  1, 2, 3, 4 and we search 3 it will return iterator at index 2


         implementation :          result1 = std::find(begin(v), end(v), n1);

                                   (inputs : beginnig , ending , element to search )    
    
    2) adjacent_find : Searches the range [first, last) for two consecutive equal elements.
     Return value: 
     -> An iterator to the first of the first pair of identical elements, that is, the first iterator it such that *it == *(it+1) for the first version or p(*it, *(it + 1)) != false for the second version.

     -> If no such elements are found, last is returned

     example : if this is seq. 0, 1, 2, 3, 40, 40, 41, 41, 5 and we search for 40 it will return us 4 index as 40 occurs two adjacently at 4 and 5 index.

    
    SORTED :

    here we will not look for an element bcz binary search etc can be used fot the purpose 
    we will see some different operations here 

    1) equal_range : Returns a range containing all elements equivalent to value in the range [first, last).

                     The returned range is defined by two iterators, one pointing to the first element that is not less than value and another pointing to the first element greater than value. The first iterator may be alternatively obtained with std::lower_bound(), the second - with std::upper_bound().

                     example :

// C++ program to demonstrate the use of std::equal_range
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v = { 10, 10, 30, 30, 30, 100, 10,
					300, 300, 70, 70, 80 };

	// Declaring an iterator to store the
	// return value of std::equal_range
	std::pair<std::vector<int>::iterator,
			std::vector<int>::iterator> ip;

	// Sorting the vector v
	sort(v.begin(), v.end());
	// v becomes 10 10 10 30 30 30 70 70 80 100 300 300

	// Using std::equal_range and comparing the elements
	// with 30
	ip = std::equal_range(v.begin(), v.begin() + 12, 30);

	// Displaying the subrange bounds
	cout << "30 is present in the sorted vector from index "
		<< (ip.first - v.begin()) << " till "
		<< (ip.second - v.begin());

	return 0;
}

    output : 30 is present in the sorted vector from index 3 till 6


    2) Upper_bound or lower_bound : this is a kind of application of equal_range to give us upper bound of a sequecne which is already sorted . 

    example : v = { 1, 2, 3, 5,5,5,5, 5, 5, 6, 7 } if we have this sequecnce we will have 

             lower bound = 3rd index and upper bound = 9th index 


             code : 

 // C++ program to demonstrate the use of std::equal_range
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v = { 1, 2, 3, 5,5,5,5, 5, 5, 6, 7 };

	// Declaring an iterator to store the
	// return value of std::equal_range
	std::pair<std::vector<int>::iterator,
			std::vector<int>::iterator> ip;

	// Using std::equal_range and comparing the elements
	// with 5
	ip = std::equal_range(v.begin(), v.end(), 5);

	// Displaying the subrange bounds
	cout << "std::lower_bound should be equal to "
		<< (ip.first - v.begin()) << " and std::upper_bound "
		<< "should be equal to " << (ip.second - v.begin());

	vector<int>::iterator i1, i2;

	// Using std::lower_bound
	i1 = std::lower_bound(v.begin(), v.end(), 5);
	cout << "\nstd::lower_bound is = " << (i1 - v.begin());

	// Using std::upper_bound
	i2 = std::upper_bound(v.begin(), v.end(), 5);
	cout << "\nstd::upper_bound is = " << (i2 - v.begin());

	return 0;
}


    output : 
    
    std::lower_bound should be equal to 3 and std::upper_bound should be equal to 9
    std::lower_bound is = 3
    std::upper_bound is = 9


    3) binary_search : return a boolean after beaching element , tell weather its there ot not 






*/