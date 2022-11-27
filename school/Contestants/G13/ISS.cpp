#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll a[100005];
ll dp[100005];
ll w[100005];

int main(){
	ll n;
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i];
	for(ll i=1;i<=n;i++) cin>>w[i];
	
	for(ll i=1;i<=n;i++) {
		dp[i]=w[i];
		for(ll j=1;j<i;j++) {
			if(a[j]<a[i]){
			dp[i]=max(dp[i],dp[j]+w[i]);
		}
	}
}	
	sort(dp+1,dp+n+1);
	cout<<dp[n];
	
}