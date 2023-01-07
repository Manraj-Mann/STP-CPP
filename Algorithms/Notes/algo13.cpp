/*                            SEARCHING A RELATIVE VALUE 

1) max_element : Finds the greatest element in the range [first, last).

       example : // C++ program to demonstrate the use of std::max_element

       #include <iostream>
       #include <algorithm>
       using namespace std;
       int main()
       {
       	int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' };
       
       	// Finding the maximum value between the first and the
       	// fourth element
       
       	int* i1;
       	i1 = std::max_element(v, v + 4);
       
       	cout << char(*i1) << "\n";
       	return 0;
       }
       output : k


2) min_element : Finds the smallest element in the range [first, last).

  example : 
             #include <algorithm>
             #include <iostream>
             #include <vector>
             
             int main(){
             
                std::vector<int> v{3, 1, 4, 1, 5, 9};
             
                std::vector<int>::iterator result = std::min_element(v.begin(), v.end());
                std::cout << "min element at: " << std::distance(v.begin(), result);
             }
            
            output : 1


3) minmax_element : Finds the smallest and greatest element in the range [first, last).

                 A pair consisting of an iterator to the smallest element as the first element and
                an iterator to the greatest element as the second. Returns std::make_pair(first, first)
                if the range is empty. If several elements are equivalent to the smallest element,
                the iterator to the first such element is returned. If several elements are equivalent 
                to the largest element, the iterator to the last such element is returned.


                example : 

                #include <algorithm>
                #include <iostream>
                 
                int main() {
                    const auto v = { 3, 9, 1, 4, 2, 5, 9 , 10 };
                    const auto [min, max] = std::minmax_element(begin(v), end(v));
                 
                    std::cout << "min = " << *min << ", max = " << *max << '\n';
                }

                output : min = 1, max = 10

*/