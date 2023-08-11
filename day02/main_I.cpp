#include <stdio.h> 
#include <vector>
#include <set>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;



int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}

int main()
{
    size_t nbr;
    cin >> nbr;
    long long result;
    cin >> result;
    for (size_t i = 1; i < nbr; i++)
    {
        long long t;
        cin >> t;
        result = gcd(result, t);
    }
    
    cout << result;
    return 0;
}