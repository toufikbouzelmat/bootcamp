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
    long long n, r;
    cin >> n >> r;
    vector<int> tab(n);
    int maxtab = 0;
    for (size_t i = 0; i <n; i++)
    {
        cin >> tab[i];
        maxtab = max(maxtab, tab[i]);
    }
    long long low = maxtab;
    long long high = 1e18;
    long long maximumSum = 1e18;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        int tr = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + tab[i] > mid)
            {
                sum = 0;
                tr++;
            }
            sum += tab[i];
        }
        if (tr > r)
            low = mid + 1;
        else
        {
            if (mid < maximumSum)
                maximumSum = mid;
            high = mid - 1;
        }
    }
    cout << maximumSum;
}