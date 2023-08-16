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
typedef long long ll;

#define MAXN 1000001
#define MOD 1000000007

int tab[MAXN], n;

int cmpt (int gauche) 
{
    if (tab[gauche] != 0) 
    {
        return tab[gauche];
    }
    for (int i = 1; i <= 6; i++) 
    {
        if (gauche - i >= 0) 
        {
            tab[gauche] += cmpt(gauche - i);
            tab[gauche] %= MOD;
        }
    }
    return tab[gauche];
}

int main() {
    cin >> n;
    tab[0] = 1;
    cout << cmpt(n) << endl;
}