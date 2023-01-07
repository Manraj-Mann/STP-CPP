/*

Queries on two set of sequeces : 

1) equal : If the length of the range [first1, last1) does not equal the length of the range [first2, last2), returns false
           If the elements in the two ranges are equal, returns true.
           Otherwise returns false.

    example : if we apply the operation on "radar" and its palindrome "radar" we will get true 
              if we apply the operation on "hello" and its palindrome "olleh" we will get false

2) is_permutation : if we are having two sequences with are not having same elemements  at corresponding      positions but permutated , then is_permutation willl return us true.

example : if we have these 3 sequences v1 = {1,2,3,4,5};
                                       v2 = {3,5,4,1,2};
                                       v3 = {3,5,4,1,1};

                  is_permutation on v1 na d v2 will give us : true                     
                  is_permutation on v2 na d v3 will give us : false

3)lexicographical_compare : Checks if the first range [first1, last1) is lexicographically less than the se                         second range [first2, last2).

     a) Elements are compared using operator<.
     b) Elements are compared using the given binary comparison function comp.                                    
     
     Lexicographical comparison is a operation with the following properties:
     
     Two ranges are compared element by element.
     ->The first mismatching element defines which range is lexicographically less or greater than the other.
     ->If one range is a prefix of another, the shorter range is lexicographically less than the other.
     ->If two ranges have equivalent elements and are of the same length, then the ranges are lexicographically      equal.
     ->An empty range is lexicographically less than any non-empty range.
     ->Two empty ranges are lexicographically equal.

example : the following code can help us to understand it well 

#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
 
int main()
{
    std::vector<char> v1 {'a', 'b', 'c', 'd'};
    std::vector<char> v2 {'a', 'b', 'c', 'd'};
 
    std::mt19937 g{std::random_device{}()};
    while (!std::lexicographical_compare(v1.begin(), v1.end(),
                                         v2.begin(), v2.end())) {
        for (auto c : v1) std::cout << c << ' ';
        std::cout << ">= ";
        for (auto c : v2) std::cout << c << ' ';
        std::cout << '\n';
 
        std::shuffle(v1.begin(), v1.end(), g);
        std::shuffle(v2.begin(), v2.end(), g);
    }
 
    for (auto c : v1) std::cout << c << ' ';
    std::cout << "< ";
    for (auto c : v2) std::cout << c << ' ';
    std::cout << '\n';
}
 
 output: 

        a b c d >= a b c d 
        d a b c >= c b d a 
        b d a c >= a d c b 
        a c d b < c d a b


4) mismatch : Returns the first mismatching pair of elements from two ranges: one defined by [first1, last1) and another defined by [first2,last2). If last2 is not provided (overloads (1-4)), it denotes first2 + (last1 - first1).

retutn: pair with iterators to the first two non-equal elements.

-> If no mismatches are found when the comparison reaches last1, the pair holds last1 and the corresponding iterator from the second range. The behavior is undefined if the second range is shorter than the first range.

-> If no mismatches are found when the comparison reaches last1 or last2, whichever happens first, the pair holds the end iterator and the corresponding iterator from the other range.

example : 

this code will try to compare the elements of string the same string from last with beginning 

#include <iostream>
#include <string>
#include <algorithm>
 
std::string mirror_ends(const std::string& in)
{
    return std::string(in.begin(),
                       std::mismatch(in.begin(), in.end(), in.rbegin()).first);
}
 
int main()
{
    std::cout << mirror_ends("abXYZba") << '\n'
              << mirror_ends("abca") << '\n'
              << mirror_ends("aba") << '\n';
}

output : ab        
         a        
         aba


*/