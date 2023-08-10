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

int binarySearch(vector<long long> &arr, int l, int r, int x)
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
    long long n;
    cin >> n;
    long long sol = (-1 +  sqrt(1 + 8 * n))/2;
    cout << sol << endl;
    
}