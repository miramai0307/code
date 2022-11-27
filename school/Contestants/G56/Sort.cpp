#include <bits/stdc++.h>
#define ll long long
#define db double
#define forn(i,n) for (ll i = 0; i<n; i++)
#define BUG(x) cerr << #x << " = " << x << endl
using namespace std;
int main() {
	ll t,n;
	cin >> t;
	while (t--) {
		cin >> n;
		ll a[n],b[n],x=-1e9,y=-1e9,tmp = -1e9,z[n];
		bool diff = false;
		vector < pair < ll , ll > > v;
		forn(i,n) cin >> a[i];
		forn(i,n) cin >> b[i];
		forn(i,n) {
			if (a[i]!=b[i] && !diff) {
				x = i;
				diff = true;
			}
			else if (a[i]!=b[i]) {
				tmp = i;
			}
			else if (diff) {
				y = i;
				v.push_back(make_pair(x,y));
			}
		}
		
		bool tm = true;
		if (x==-1e9) cout << "YES\n";
		else {
		y = n;
		v.push_back(make_pair(x,y));
		forn(i,v.size()){
			forn(j,n) {
				z[j]=a[j];
			}
			sort(z+v[i].first,z+v[i].second+1);
			tm = true;
			forn(j,n) if (z[j]!=b[j]) {
				tm = false;
				break;
			}
			if (tm) {
				cout << "YES\n";
				break;
			}
		}
		if (!tm) cout << "NO\n";
		}
	}
	return 0;
}