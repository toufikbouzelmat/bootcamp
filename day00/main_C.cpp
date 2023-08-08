#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <stack>

using namespace std;

int main()
{
    int n;
    int operation;
    int to_tab;

    scanf("%d", &n);
    stack<int> tab;
    while (n--)
    {
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            scanf("%d", &to_tab);
            tab.push(to_tab);
            break;
        case 2:
            if (tab.empty() != 1)
                tab.pop();
            break;
        case 3:
            if (tab.empty())
                printf("Empty!\n");
            else
                printf("%d\n", tab.top());
            break;
        }
    }
    

}
