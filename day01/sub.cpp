#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>

using namespace std;
const int max_n = 2e5;

int main()
{
    int nbr,q;
    cin >> nbr >> q;
    long long x[max_n + 1];
    long long res = 0;
    map<long long, int>m;
    long long total = 0;
    m[0]++;
    for (int i = 1; i <= nbr; i++)
    {
        cin >> x[i];
        x[i] += x[i-1];
    }
    for (int i = 1; i <= nbr; i++)
    {
        total = x[i];
        res += m[total - q];
        m[total]++;
    }
    cout << res << endl;
}