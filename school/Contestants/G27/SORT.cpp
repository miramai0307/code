#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool LCS(ll a[], ll b[], ll n)
{
	ll dp[n][n];
	memset(dp, 0, sizeof(dp));
	for (ll i = 0; i < n; ++i)
	{
		for (ll j = 0; j < n; ++j)
		{
			if (a[i - 1] == b[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	if (dp[n][n] > 1) return true;
	else return false;
}
int main()
{
	ll t, n;
	cin >> t;
	string ans[t + 1];
	for (ll i = 1; i <= t; ++i)
	{
		ll counter = 0;
		cin >> n;
		ll a[n + 1], b[n + 1];
		for (ll j = 0; j < n; ++j)
		{
			cin >> a[j];
		}
		for (ll j = 0; j < n; ++j)
		{
			cin >> b[j];
			if (b[j] == a[j]) ++counter;
		}
		if (b[0] > a[0]) ans[i] = "NO";
		else if (counter == n) ans[i] = "YES";
		else
		{
			sort(a, a + n);
			if (LCS(a, b, n) == true) ans[i] = "YES";
			else ans[i] = "NO";
		}
	}
	for (ll i = 1; i <= t; ++i) cout << ans[i] << endl;
}