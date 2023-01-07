/*Author : Manraj Singh */
#include <bits/stdc++.h>
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

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
// print type 3 vector function
void print3(vector<int> &v){

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
    vector<int > vec2 = {1 , 2,3 ,4 ,5};

    // initialization 3
    vector<int > vec3 (10);

    // initialization 4
    vector<int > vec4 (10 , 4);

    // getting size of vector

    cout<<vec.size()<<"\n";
    cout<<vec2.size()<<"\n";
    cout<<vec3.size()<<"\n";
    cout<<vec4.size()<<"\n";

    // printing vector 

    print(vec);
    print2(vec2);
    print3(vec3);
    print4(vec4);


    // Important methods 

    // 1. resize ()

    // 2. empty ()

    // 3. at()

    // 4. front()

    // 5. back()

    // 6. push_back()

    // 7. pop_back()

    // 8 . erase()

    // 9. insert()

    // 10. clear()

    
    return 0;
}