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
    int q; cin >> q;
    vector<vector<int>> vec(n);
    for (size_t i = 0; i < q; i++)
    {
        int k; cin >> k;
        if (k == 1)
        {
            int a,b;cin >> a>> b;
            vec[a - 1].push_back(b - 1);
            vec[b - 1].push_back(a - 1);
        }
        else
        {
            int a;cin >> a;
            // if (vec[a - 1].size())
            {
                for (auto w: vec[a - 1])
                {
                    cout << w + 1 << " ";
                }
                cout << endl;
            }
        }
    }
}