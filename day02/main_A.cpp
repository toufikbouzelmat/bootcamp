#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (arr[m] == x)
            return m;
 
        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 
    return -1;
}
 

int main()
{
    int nbr_of_array;
    cin >> nbr_of_array;
    int tab[nbr_of_array];
    int i = 0;
    while (i < nbr_of_array)
    {
        cin >> tab[i];
        i++;
    }

    // int j = 0;
    // while (j < nbr_of_array)
    // {
    //     printf("index[%d] = %d, ", j, tab[j]);
    //     j++;
    // }

    int nbr_of_serach;
    cin >> nbr_of_serach;
    int tab_element_searching[nbr_of_serach];
    int s = 0;
    int n = sizeof(tab) / sizeof(tab[0]);
    int result = 0;
    while (s < nbr_of_serach)
    {
        cin >> tab_element_searching[s];
        result = binarySearch(tab,0, n - 1, tab_element_searching[s]);
        if (result == -1)
            cout << "NO\n";
        else
            cout << "YES\n";
        s++;
    }
    
    // int atrouve = 0;
    // while (atrouve < nbr_of_serach)
    // {
    //     binarySearch();
    // }
    
    // int t = 0;
    // while (t < nbr_of_serach)
    // {
    //     printf("index_tab_search[%d] = %d, ", t, tab_element_searching[t]);
    //     t++;
    // }
    
}