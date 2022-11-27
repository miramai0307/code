#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int max(ll a, ll b) {
	if (a>b) return a;
	else return b;
}
int ISS(int n, ll a[], ll b[]) {
	ll f[n];
	f[0]=b[0];
	ll res=0,maxsum=0;
	for (int i=1; i<n; i++) {
		f[i]=b[i];
		for (int j=0; j<i; j++) {
			if (a[j]<a[i]) {
				maxsum=max(maxsum,f[j]);
				f[i]=maxsum+b[i];
			}
		}
		res=max(res,f[i]);
	}
	return res;
}
int main() {
	int n;
	cin>>n;
	ll a[n], b[n];
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	for (int i=0; i<n; i++) {
		cin>>b[i];
	}
	cout<<ISS(n,a,b);
}