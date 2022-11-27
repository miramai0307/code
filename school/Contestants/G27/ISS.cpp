#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
    cin >> n;
    ll a[n + 1], b[n + 1], c[n + 1], ans = -1e16;
    memset(c, 0, sizeof(c));
    for (ll i = 1; i <= n; ++i) cin >> a[i];
    for (ll i = 1; i <= n; ++i) cin >> b[i];
    c[1] = b[1];
    for (ll i = 1; i <= n; ++i)
    {
        for (ll j = 1; j <= i; ++j)
        {
            if (a[i] > a[j])
            {
                c[i] = max(c[i], b[i] + c[j]);
                ans = max(ans, c[i]);
            }
        }
    }
    cout << ans;
}