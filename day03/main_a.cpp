#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    long long t,n;
    cin >> n;
    long long x = 1;
    for (size_t i = 0; i < n; i++)
    {
        x = x * 2;
        x = x % MOD;
    }
    cout << x << endl;
    return (0);
}