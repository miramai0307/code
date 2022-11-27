#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool tang(ll a[],ll first,ll last) {
	for (ll i=first;i<last;i++) {
		if (a[i]>a[i+1]) return false;
	}
	return true;
}
bool giam(ll a[],ll first,ll last) {
	for (ll i=first;i<last;i++) {
		if (a[i]<a[i+1]) return false;
	}
	return true;
}
int main() {
	ll t;
	cin>>t;
	while (t--) {
		ll n;
		cin>>n;
		ll a[n+1],b[n+1];
		for (ll i=1;i<=n;i++) {
			cin>>a[i];
		}
		for (ll i=1;i<=n;i++) cin>>b[i];
		ll first=1,last=n;
		while (a[first]==b[first]) first++;
		while (a[last]==b[last]) last--;
		ll cnt=0;
		for (ll i=first;i<=last;i++) {
			if (a[i]!=b[i]) {
				cnt=1;
				break;
			}
		}
		if (cnt==0) cout<<"YES";
		else {
			if (tang(a,first,last)==true||giam(b,first,last)==true) cout<<"NO";
			else cout<<"YES";
		}
		cout<<endl;
	}
}