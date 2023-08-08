#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    long long nbr_of_array;
    long long nbr_test;
    long long n;
    long long i;
    long long a,b;
    long long res = 0;
    // int pos;

    cin >> nbr_of_array;
    cin >> nbr_test;
    i = 1;
    vector<long long>tab(nbr_of_array +1);
    tab[0] = 0;
    while (i <= nbr_of_array)
    {
        cin >> n;
        res = tab[i-1] + n;
        tab[i] = (res);
        i++;
    }
    
    // printf("nbr_of_arr = %d\n", nbr_of_array);
    // for (int j = 0; j <= nbr_of_array ; j++)
    // {
    //     printf("[%d] = %d || ", j, tab[j]);
    // }
    while (nbr_test--)
    {
        cin >> a;
        cin >> b;
        cout << tab[b] - tab[a - 1] << endl;
    }
    
    
    
}