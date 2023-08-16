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

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> ans;
    int i = 1;
    while(next_permutation(str.begin(), str.end()))
    {
        ans.push_back(str);
        i++;
    }
    cout << i << endl;
}
