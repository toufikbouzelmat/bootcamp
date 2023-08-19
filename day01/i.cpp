#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    long long nbr;
    cin >> nbr;
    long long i = 0, cp = 0;
    cp = (nbr*(nbr+1))/2;
    if (cp % 2 != 0)
        cout << "NO\n";
    else
    {
        cout << "YES ";
        set<long long>s;
        cp /=2;
        for (int i = nbr; i > 0; i--)
            if(cp >= i)
            {
                s.insert(i);
                cp -= i;
            }
        cout << s.size() << " ";
        for (auto k: s)
            cout << k << " ";
        cout << nbr - s.size()<< " ";
        for (size_t i = 1; i <= nbr; i++)
            if(s.find(i) == s.end())
                cout << i << " ";
        cout << endl;
        
    }
}