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
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[10], i, j;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        j = (10 - n) * (9 - n) * 3;
        cout << j << std::endl;
    }
    return (0);
}

// https://blog.csdn.net/zhaoxinfan/article/details/130435177