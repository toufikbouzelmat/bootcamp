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
    long long precedent = 0;
    long long etape = 0;
    long long n,in;

    cin >> n;
    cin >> precedent;
    while (--n > 0)
    {
        cin >> in;
        if (precedent > in)
        {
            etape = etape + (precedent - in);
        }
        else
        {
            precedent = in;
        }
    }
    cout << etape << endl;
}