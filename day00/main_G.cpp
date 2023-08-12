#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <map>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int ft(int m,int nbr)
{
    map<int, int>tab;
    for (size_t i = 0; i < nbr; i++)
    {
        int j;
        cin>> j;
        if (tab[m - j])
        {
            cout << tab[m - j] << " " << i + 1 << endl;
            return 0;
        }
        tab[j] = i+1;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

int main()
{
    int nbr, m;
    cin >> nbr;
    cin >> m;
    ft(m,nbr);
}