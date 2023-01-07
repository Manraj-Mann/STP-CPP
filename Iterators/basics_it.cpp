#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar = { 1, 2, 3, 4, 5 }; 
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr; 
      
    // Displaying vector elements using begin() and end() 
    cout << "The vector elements are : "; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " "; 
    
    // Declaring iterator to a vector 
    ptr = ar.begin(); 
      
    // Using advance() to increment iterator position 
    // points to 4 
    advance(ptr, 3); 
      
    // Displaying iterator position 
    cout << "\nThe position of iterator after advancing is : "; 
    cout << *ptr << " "; 

    ptr = ar.begin(); 
    auto it = next(ptr, 3); 
    
    vector<int>::iterator ftr = ar.end(); 
      
    // Using prev() to return new iterator 
    // points to 3 
    auto it1 = prev(ftr, 3); 
      
    // Displaying iterator position 
    cout << "\nThe position of new iterator using next() is : "; 
    cout << *it << " "; 
    cout << endl; 
      
    // Displaying iterator position 
    cout << "The position of new iterator using prev()  is : "; 
    cout << *it1 << " "; 
    cout << endl; 
      

      
    return 0;     
}
