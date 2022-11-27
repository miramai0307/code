#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fori(i, a, b) for(ll i = a; i <= b; i++)
const int MN = 1e6;
const ll INF = 0x3f3f3f3f;
ll n, a[MN], w[MN], dp[MN], f[MN], d[MN];

ll solve() {
    fori(i, 1, n)
        d[i] = INF;
    dp[1] = w[1];
    ll maxi = 0;
    a[0] = 0; w[0] = 0; d[0] = 0;
    fori(i, 1, n) {
        ll bot = 1, top = n;
        while(bot <= top) {
            ll mid = bot + (top - bot) / 2;
            if( d[mid] < a[i] )
                bot = mid + 1;
            else
                top = mid - 1;
        }
        f[i] = bot;
        d[bot] = a[i];
        ll B = 0, T = n;
        while(B <= T) {
            ll M = B + (T - B) / 2;
            if( d[M] < a[i] )
                B = M + 1;
            else
                T = M - 1;
        }
        if( !T )
            dp[i] = w[i];
        else
            dp[i] = dp[T] + w[i];
    }
    fori(i, 1, n)
        maxi = max(maxi, dp[i]);
    return maxi;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    fori(i, 1, n)
        cin >> a[i];
    fori(i, 1, n)
        cin >> w[i];
    cout << solve();
}