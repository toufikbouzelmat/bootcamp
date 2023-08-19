#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>

using namespace std;

#define mod 1000000007

long long factorial(long long nbr)
{
    if (nbr == 0 || nbr == 1)
        return 1;
    return (nbr * factorial(nbr - 1)) % mod;
}

long long Pow(long long a, long long b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        long long y = Pow(a, b / 2);
        return ((y * y) % mod);
    }
    else
        return ((a * Pow(a, b - 1)) % mod);
}

int main()
{
    string str;
    cin >> str;
    map<char,int>tab;
    for (int i = 0; i < str.size(); i++)
        tab[str[i]]++;
    long long result = factorial(str.size());
    for (auto s:tab)
        result = (result * Pow(factorial(s.second),mod-2))% mod;
    cout << result;
}


