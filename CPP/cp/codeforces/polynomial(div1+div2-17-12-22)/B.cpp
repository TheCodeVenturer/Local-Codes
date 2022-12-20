#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[m];
        ll maxi = INT_MIN;
        int count = 0;
        for (ll i = 0; i < m; i++)
        {
            ll temp;
            cin >> temp;
            ll preMax = maxi;
            maxi = max(temp, maxi);
            if (preMax != maxi)
            {
                count = 0;
                count++;
            }
            else if (maxi == temp)
            {
                count++;
            }
        }
        cout << count << endl;
        if (k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        if (k > m)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((maxi - 1) * k + count <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

