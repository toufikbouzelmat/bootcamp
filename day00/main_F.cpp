#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <map>
#include <stack>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    map<string, int> tab;
    string str;
    string stop;
    int to_stop;
    // int count = 0;

    getline(cin, stop);
    to_stop = stoi(stop);
    int i = 0;
    while (i < to_stop)
    {
        getline(cin, str);
        tab[str]++;
        i++;
    }
    int max = 0;
    string s;
    for (auto it = tab.begin(); it != tab.end(); it++)
    {
        if(max <= it->second)
        {
            max = it->second;
            s = it->first;
        }
    }
    cout << s << ' ' << max;
}