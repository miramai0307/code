#include <bits/stdc++.h>
using namespace std;
#define BUG(x) {cerr << #x << " = " << x << endl;}
#define PR(x, a, b) {cerr << #x << " = "; for (int i = a; i <= b; i++) cerr << x[i] << ' '; cerr << endl;}
#define ll unsigned long long
ll a, b;
void read() {
    cin >> a >> b;
    //BUG(a);
    //BUG(b);
}
#define MAXN 100007
#define NMAX 100001
ll spf[MAXN];
unordered_map<ll, ll> nFactor;
void sieve() {
    spf[1] = 1;
    for (int i = 2; i < NMAX; i++) spf[i] = i;
    for (int i = 4; i < NMAX; i += 2) spf[i] = 2;
    for (int i = 3; i * i < NMAX; i++) {
        if (spf[i] == i) {
            for (int j = i*i; j < NMAX; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

set<ll> s;
void factorize(ll x){
    //BUG(x);
    while (x > 1) {
        nFactor[spf[x]]++;
        s.insert(spf[x]);
        x = x / spf[x];
    }
}
ll ans;
ll cntF;
void init() {
    ans = cntF = 1;
    sieve();
    //PR(spf, 1, NMAX-1);
    for (ll i = a; i <= b; i++) {
        factorize(i);
    }
    //cerr << "here" << endl;
    //BUG(cntF);
    for (auto it = s.begin(); it != s.end(); it++) {
        ll add = 2L * nFactor[*it] + 1;
        //BUG(nFactor[*it]);
        //BUG(add);
        cntF *= add;
        //BUG(*it);
        //BUG(cntF);
    }
   // BUG(cntF);
}

void solve() {
    ans = cntF;
}
void write() {
    cout << ans << endl;
}

int main() {
	//freopen("LCM.INP", "r", stdin);
	//freopen("LCM.OUT", "w", stdout);
	read();
	init();
	solve();
	write();
	return 0;
}


