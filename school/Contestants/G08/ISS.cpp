#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    ll a[n+5], x[n+5];
    ll dp[n+5];
    ll max1 = INT_MIN;
    for (ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (ll i=0; i<n; i++)
    {
        cin >> x[i];
        dp[i] = x[i];
    }
    for (ll i=0; i<n; i++)
    {
        for (ll j=0; j<i; j++)
        {
            if (a[i] > a[j])
            {
                dp[i] = max(dp[j] + x[i], dp[i]);
            }
        }
        max1 = max(max1, dp[i]);
    }
    cout << max1;
}

