#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <map>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int n_of_array;
    int somme;
    int n;
    vector<int>tab;

    cin >> n_of_array;
    cin >> somme;
    int i = 1;
    while (i <= n_of_array)
    {
        cin >> n;
        tab.push_back(n);
        i++;
    }

    // int res = 0;
    // // for (int i = 1; i < n_of_array; i++)
    // // {
        
    // //     for (int j = 2; j < n_of_array; j++)
    // //     {
    // //         res = tab[i] + tab[j];
    // //         if (res == somme)
    // //         {
    // //             cout << i << ' ' << j << endl;
    // //             return 0;
    // //         }
    // //     }
        
    // // }
    
    
    
}