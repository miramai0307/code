#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000001], w[1000001], dp[1000001];
int main(){
	memset(dp,0,sizeof dp);
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	for(ll i = 0; i < n; i++){
		cin >> w[i];
	}
	dp[0] = w[0];
	for(ll i = 1; i < n; i++){
		for(ll j = 0; j < i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i], dp[j] + w[i]);
			}
		}
	}
	sort(dp,dp+n);
	cout << dp[n-1];
}
