/*
Quering properties : 


1) all_of : Checks if unary predicate p returns true for all elements in the range [first, last).

for empty : true 

2) any_of : Checks if unary predicate p returns true for at least one element in the range [first, last).

for emplty : false 

3) none_of : Checks if unary predicate p returns true for no elements in the range [first, last).

for empty : true 

         Here is an example with code : 

#include <vector> 
#include <numeric>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
 
int main()
{
    std::vector<int> v(10, 2);
    std::partial_sum(v.cbegin(), v.cend(), v.begin());
    std::cout << "Among the numbers: ";
    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
 
    if (std::all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; })) {
        std::cout << "All numbers are even\n";
    }
    if (std::none_of(v.cbegin(), v.cend(), std::bind(std::modulus<int>(), 
                                                     std::placeholders::_1, 2))) {
        std::cout << "None of them are odd\n";
    }
    struct DivisibleBy
    {
        const int d;
        DivisibleBy(int n) : d(n) {}
        bool operator()(int n) const { return n % d == 0; }
    };
 
    if (std::any_of(v.cbegin(), v.cend(), DivisibleBy(7))) {
        std::cout << "At least one number is divisible by 7\n";
    }
}

output :
                Among the numbers: 2 4 6 8 10 12 14 16 18 20 
                All numbers are even
                None of them are odd
                At least one number is divisible by 7











*/