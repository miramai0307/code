#include <bits/stdc++.h>
#define ll long long
#define db double
#define forn(i,n) for (ll i = 0; i<n; i++)
#define BUG(x) cerr << #x << " = " << x << endl
using namespace std;
int main() {
	ll n,cnt = 0;
	cin >> n;
	ll a[n],w[n];
	vector < pair < ll , ll > > v;
	forn(i,n) cin >> a[i];
	forn(i,n){
		cin >> w[i];
		v.push_back(make_pair(w[i],i));
	}
	sort(v.begin(), v.end());
	ll c = v[n-1].first, l2 = v[n-1].second, r2 = v[n-1].second, l1 = a[v[n-1].second], r1 = a[v[n-1].second];
	for (ll i = n-2; i>=0; i--) {
		if (v[i].second<l2 && a[v[i].second]<l1) {
			c += v[i].first;
			l2 = v[i].second;
			l1 = a[v[i].second];
		}
		else if (v[i].second>r2 && a[v[i].second]>r1) {
			c += v[i].first;
			r2 = v[i].second;
			r1 = a[v[i].second];
		}
	}
	ll f[n],tmp,m = 0,idx;
	f[0]=1;
	for (ll i = 1; i<n; i++) {
		f[i]=1;
		for (ll j = i-1; j>=0; j--) {
			if (a[i]>a[j]) f[i]=max(f[i],f[j]+1);
		}
		m = max(m,f[i]);
	}
	bool first = true;
	for (ll i = n-1; i>=0; i--) {
		if (f[i]==m && first) {
			cnt+=w[i];
			idx=i;
			first = false;
		}
		else if (f[i]==m-1 && a[i]<a[idx]) {
			idx=i;
			cnt+=w[i];
			m--;
		}
		else if (m==0) break;
	}
	cout << max(c,cnt);
	return 0;
}