#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

long long mod = 1e9+ 7;
int pow_2(long long x,long long n)
{

    if (n == 0)
        return (1);
    long long y = pow_2(x, n/2) % mod;;
    y = (y*y)%mod;
    if (n % 2 == 0)
    {
        return y;
    }
    else
        return (x * y)%mod;
}

int main()
{
    long long nbr_of_calculation;
    cin >> nbr_of_calculation;
    long long i = 0;
    long long res = 0;
    long long x,n = 0;
    while (i < nbr_of_calculation)
    {
        cin >> x >> n;
        res = pow_2(x,n);
        cout << res << endl;
        i++;
    }
    
}