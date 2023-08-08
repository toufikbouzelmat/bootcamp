#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>

using namespace std;

int main()
{
    int nbr_column;

    cin >> nbr_column;


    vector<int> tab;
    multiset<int> tab_s;
    int to_tab;
    for (int i = 1; i <= nbr_column; i++)
    {
        cin >> to_tab;
        tab_s.insert(to_tab);
    }
    
    for (auto index = tab_s.begin(); index != tab_s.end(); ++index)
    {
        cout << *index << ' ';
    }
    cout << '\n';
}