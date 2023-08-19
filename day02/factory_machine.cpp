#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() 
{
	int n;
	ll c;
	cin >> n >> c;
	vector<ll> k(n);
	for (int i = 0; i < n; i++) 
    { 
        cin >> k[i]; 
    }
	ll lo = 0;
	ll hi = 1e18;
	ll r = 0;
	while (lo <= hi) 
    {
		ll mid = (lo + hi) / 2;
		ll sum = 0;
		for (int i = 0; i < n; i++) 
        {
			sum += (mid / k[i]);
			if (sum >= c) 
            {
				break;
			}
		}
		if (sum >= c)
        {
			r = mid;
			hi = mid - 1;
		} 
        else 
        {
			lo = mid + 1;
		}
	}
	cout << r << "\n";
}