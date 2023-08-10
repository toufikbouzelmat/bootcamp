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
    int nbr_of_test;
    int nbr_of_array;
    char nbr;
 

    cin >> nbr_of_test;
    while (nbr_of_test--)
    {
        cin >> nbr_of_array;
        cin >> nbr;
        string tab;
        cin >> tab;
        int i = 0;
        while (i < nbr_of_array)
        {
            if (tab[i] < nbr)
            {
                cout << nbr;
                nbr = '\0';
            }
            cout << tab[i];
            i++;
        }
        if (nbr)
            cout << nbr;
        cout << "\n";
    }
    
}