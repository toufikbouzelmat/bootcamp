
#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

void f()
{
    stack<char> tab;
        string s;
        getline(cin, s);
    for (size_t i = 0; i < s.length(); i++)
    {
     
        if (s[i] == '(' || s[i] == '[')
        {
            tab.push(s[i]);
        }
        else
        {
            if(tab.empty())
            {
                printf("No\n");
                return ;
            }
            if (tab.top() == '(' && s[i] == ')')
                tab.pop();
            else if (tab.top() == '[' && s[i] == ']')
                tab.pop();
            else
            {
                printf("No\n");
                return ;
            }
        }
    }
    if (tab.empty() == 1)
    {
        printf("Yes\n");
        return ;
    }
    else
    {
        printf("No\n");
        return ;
    }
}

int main()
{
    int nb_of_seq;
    string str;

    
    getline(cin, str);
    nb_of_seq = stoi(str);
    while (nb_of_seq--)
    {
        
        f();
    }
    

    // cout << tab.top() ;
}