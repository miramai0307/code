#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	ll a[n+1],b[n+1];
	for (ll i=1;i<=n;i++) cin>>a[i];
	for (ll i=1;i<=n;i++) cin>>b[i];
	vector<ll> f(n+1,0);
	f[1]=b[1];
	ll ans=b[1];
	for (ll i=2;i<=n;i++) {
		for (ll j=1;j<i;j++) {
			if (a[i]>a[j]) f[i]=max(f[j]+b[i],f[i]);
		}
		ans=max(f[i],ans);
	}
	cout<<ans;
}