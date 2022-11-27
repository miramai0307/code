#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, t = -1, x = -1, y = -1, max1 = INT_MIN;
        cin >> n;
        ll a[n], b[n], c[n], d[n];
        for (ll i=0; i<n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
            max1 = max(max1, a[i]);
        }
        for (ll i=0; i<n; i++)
        {
            cin >> b[i];
            d[i] = b[i];
        }
        if (b[0] == max1 && a[0] != max1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(a, a+n);
        sort(b, b+n);
        for (ll i=0; i<n; i++)
        {
            if (a[i] != c[i])
            {
                x = 1;
            }
        }
        for (ll i=0; i<n; i++)
        {
            if (b[i] != d[i])
            {
                y = 1;
            }
        }
        if (x == -1 && y == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (ll i=0; i<n; i++)
        {
            if (a[i] != b[i])
            {
                t = 1;
            }
        }
        if (t == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
