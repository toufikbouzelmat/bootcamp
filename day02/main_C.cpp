#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

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
    long long n;
    cin >> n;
    long long sol = (-1 +  sqrt(1 + 8 * n))/2;
    cout << sol << endl;
    
}