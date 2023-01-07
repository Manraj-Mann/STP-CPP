/*Author : Manraj Singh */
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// print type 1 vector function
void print(vector<int> v){

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
// print type 2 vector function 
void print2(vector<int> &v){
                                            // 1 2 3 4 5   size = 5
                                            // 0 1 2 3 4
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
// print type 3 vector function
void print3(vector<int> &v){
                                            //           |
                                            //          \|/
                                            // 1 2 3 4 5   size = 5
                                            // 0 1 2 3 4
    // vector<int>::iterator 
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;

}

// print type 4

void print4(vector<int> &v){

    for (auto i : v)
    {
        cout<<(i)<<" ";
    }
    cout<<endl;

}


int main(){


    // initialization 
    vector<int> vec ;

    // initialization 2
    vector<int > vec2 = {1,2,3,4,5};

    // initialization 3
    vector<int > vec3 (10);   // 0 0 0 0 0 0 0 0 .. 0

    // initialization 4
    vector<int > vec4 (10 , 4); // 4 4 4 4 4 ...... 4

    // getting size of vector

    // cout<<vec.size()<<"\n";
    // cout<<vec2.size()<<"\n";
    // cout<<vec3.size()<<"\n";
    // cout<<vec4.size()<<"\n";

    // printing vector 

    // print(vec);
    print2(vec2);
    // print3(vec3);
    // print4(vec4);

    
    // Important methods 

    // 1. resize ()

    // vec.resize(10);
    // cout<<vec.size()<<endl;
    // print2(vec);

    // 2. empty ()

    // cout<<vec3.empty();
    
    // 3. at()

    // cout<<vec2.at(3)<<endl;

    // 4. front()

    // cout<<vec2.front()<<endl;

    // 5. back()

    // cout<<vec2.back()<<endl;

    // 6. push_back()

    vec2.push_back(10);
    print2(vec2);

    // 7. pop_back()

    vec2.pop_back();
    print2(vec2);

    // 8 . erase()

    vec2.erase(vec2.begin()+1);
    print2(vec2);

    // 9. insert()

    vec2.insert(vec2.begin(), 2);
    print2(vec2);

    // 10. clear()

    vec2.clear();
    print2(vec2);
    cout<<vec2.size();
    
    return 0;
}


/*

    1 2 3 4 size = 4

    5 ? 

    1 2 3 4 _ _ _ _ size = 8
    1 2 3 4 5 _ _ _ size = 8  O(n + 1)
    
    6 ? 
    7 ? 
    8 ?        O (1)

*/