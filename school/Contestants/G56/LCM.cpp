#include <bits/stdc++.h>
#define ll long long
#define db double
#define forn(i,n) for (ll i = 0; i<n; i++)
#define BUG(x) cerr << #x << " = " << x << endl
using namespace std;
ll prime[1000006] = {}, m = 0;
void tsnt(ll a) {
	ll i = 1;
	while (a>1) {
		i++;
		while (a%i==0) {
			a/=i;
			prime[i]++;
		}
		m = max(i,m);
	}
}
int main() {
	ll a,b,c1=0,c2=0,cnt = 0, ans = 0;
	cin >> a >> b;
	for (ll i = a; i<=b; i++) {
		tsnt(i);
	}
	for (ll i = 1; i<=m; i++) {
		if (prime[i]!=0) {
			c1+=1;
			c2+=prime[i];
		}
	}
	ans+=c1*c2*2-1;
	ans+=pow(2,c1-1);
	for (ll i = 1; i<=m; i++) {
		if (prime[i]>1) {
			ans+=(prime[i]-1)*2;
		}
		for (ll j = 1; j<c1-1; j++) {
			ans+=(c1-j)*(prime[i]-1)*2;
		}
	}
	cout << ans;
	return 0;
}