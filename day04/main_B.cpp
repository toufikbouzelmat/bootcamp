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
    set <pair<int, int> > st;
    for (size_t i = 0; i < line; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            int v;
            cin >> v;
            if(v)
            {
                if (st.find(make_pair(i, j)) == st.end())
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    st.insert(make_pair(j, i));
                }
            }
        }
        
    }
    
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