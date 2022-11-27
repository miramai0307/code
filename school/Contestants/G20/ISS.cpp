#include <bits/stdc++.h>
using namespace std;

long long n;
long long a[100001], w[100001];

long long dp[100001];
int main(){
	cin >> n;
	long long sum = 0, max1 = 0, ans = 0;
	for (int i = 1; i<=n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i<=n; i++)
		cin >> w[i];
	memset(dp, 0, sizeof(dp));
	dp[0] = 0, dp[1] = w[1];
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=i; j++){
			if (a[i] > a[j]){
				dp[i] = max(dp[i], dp[j] + w[i]);
				if (ans < dp[i])
				ans = dp[i];
			}
		}
	}
	cout << ans;
	return 0;
}