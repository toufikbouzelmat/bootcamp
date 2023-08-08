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
    set<int> tab;
    // int n;
    string str;
    string s2;
    int nbr;

    while (cin >> str >> nbr)
    {
        if (strcmp(str.c_str(), "insert") == 0)
        {
            tab.insert(nbr);
        }
        else if (strcmp(str.c_str(), "exists") == 0)
        {
            auto it = tab.find(nbr);
                if (it != tab.end())
                {
                    printf("true\n");
                }
                else
                {
                    printf("false\n");
                }
        }
        else if (strcmp(str.c_str(), "delete") == 0)
        {
            auto it = tab.find(nbr);
            if (it != tab.end())
                tab.erase(it);

        }
    }

    
    
}