#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll size;
        cin >> size;
        vi nums(size);
        ll sum = 0;
        for (ll i = 0; i < size; i++)
        {
            cin >> nums[i];
            sum += nums[i];
        }
        if (sum % 2 == 0)
            cout << 0 << endl;
        else
        {
            ll mini = INT_MAX;
            for (ll i = 0; i < size; i++)
            {
                ll tempSum = sum;
                ll b = nums[i];
                ll count = 0;
                while (tempSum % 2 != 0 && b != 0)
                {
                    tempSum -= b;
                    b = b / 2;
                    tempSum += b;
                    count++;
                }
                mini=min(count,mini);
            }
            cout<<mini<<endl;
        }
    }
    return 0;
}