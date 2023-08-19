#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;



int main()
{
    size_t n;
    cin >> n;
    
    size_t line = n;
    size_t column = n;
    // vector<vector<int> > vec( n , vector<int> (column)); 
    set <int > st1, st2;
    for (size_t i = 0; i < line; i++)
    {
        int b = 0;
        for (size_t j = 0; j < column; j++)
        {
            int v;
            cin >> v;
            if(v)
            {
                b = 1;
                st2.insert(j);
            }
        }
        if (!b)
            st1.insert(i);
    }
    cout << n - st2.size();
    for (size_t i = 0; i < n; i++)
    {
        if (st2.find(i) == st2.end())
            cout << " " << i + 1;
    }
    cout << endl;
    cout << st1.size() ;
    for (auto i: st1)
    {
        cout << " " << i + 1;
    }
    cout << endl;
    
    

    // cout << "|||||||||||||||||||||||" << endl;
    
    // for(size_t i = 0; i < n; i++)
    // {
    //     for(size_t j = 0; j < column; j++)
    //     {
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
}