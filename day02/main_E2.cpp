#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ft(double hi, double low, int a, int b, int c, double mid)
{
      while (hi-low > 0.0000001)
        {
            mid = (low + hi) / 2;
            if ((a * mid) + (b * sin(mid)) - c > 0)
                hi = mid ;
            else
                low = mid;
        }
    return (mid);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a; 
        int b;
        int c;
        cin >> a;
        cin >> b;
        cin >> c;

        double low = 0;
        double hi = 1e5;
        double mid = 0;
        mid = ft(hi,low,a,b,c, mid);
        cout << fixed;
        cout << mid <<endl;
    }
}