#include <iostream>
#include <stdio.h> 
#include <vector>
#include <set>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

int ft(int nbr)
{
    for (size_t i = 2; i * i <= nbr; i++)
    {
        while (nbr % i == 0)
        {
            cout << " " << i;
            nbr /= i;
        }
    }
    return nbr;
}


int main()
{
    long long nbr;
    cin>>nbr;
    cout << nbr << ":";
    nbr = ft(nbr);
    if (nbr > 1)
        cout << " " << nbr;
    cout << endl;
}