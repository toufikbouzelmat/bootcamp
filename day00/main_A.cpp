#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h> 
#include <vector>


using namespace std;

int main()
{
    int nbr_tab;
    // int to_plus = 2;
    
    cin >> nbr_tab;
    
    vector<int> tab;
    int to_tab;

    for (int i = 1; i <= nbr_tab; i++)
    {
        cin >> to_tab;
        if (to_tab >= 0)
            to_tab += 2;
        tab.push_back(to_tab);
    }

    for (auto index = tab.begin(); index != tab.end(); ++index)
    {
        cout << *index << ' ';
    }
    printf("\n");
    // cout << nbr_tab << endl;
}