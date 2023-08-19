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


void    dfs(int s, vector<vector<int> > &mat, vector<bool> &vis)
{
    if (vis[s])
        return;
    vis[s] = true;
    for(int i=0; i < mat[s].size(); i++)
    {
        if (mat[s][i] && !vis[i])
            dfs(i, mat, vis);
    }
    return ;
}

int main()
{
    size_t n,ret=0,v=0;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    vector<bool>vis(n, false);
    for (size_t i = 0; i < n; i++)
        for(size_t j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j])
                ret++;
        }
    dfs(0, mat, vis);
    for(size_t i = 0; i < n; i++)
        if (vis[i])
            v++;
    if ((ret+1)/2 == n-1 && v == n)
        cout << "YES\n";
    else
        cout << "NO\n";
}