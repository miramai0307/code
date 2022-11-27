#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
//#define isvowel(a) (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
const int N=200050,M=1000000007;
const ll INF=1e18+7;

ll n, a[N], b[N];

bool check(ll l, ll r){
	map<int, int> dem;
	for(ll i=l; i<=r; i++) dem[b[i]]++;
	for(ll i=l; i<=r; i++){
		if(dem[a[i]]==0) return 0;
		dem[a[i]]--;
	}
	return 1;
}

bool solve(){
	cin>>n;
	for(ll i=0; i<n; i++) cin>>a[i];
	for(ll i=0; i<n; i++) cin>>b[i];
	ll l=0;
	for(ll r=0; r<n; r++){
		if(b[r]>b[r+1]){
			if(!check(l, r)) return 0;
			l=r+1;
		}
	}
	return 1;
}

signed main(){
	ios_base::sync_with_stdio(NULL); cin.tie(nullptr); cout.tie(nullptr);
//    freopen(".inp","r",stdin);
//    freopen(".out","w",stdout);
	int t; cin>>t;
	while(t--){ 
		if(solve()) cout<<"YES\n";
		else cout<<"NO\n";
	}
    return 0;
}
