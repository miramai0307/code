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

ll n;

namespace sub1{
	ll a[N], w[N], ans=0, dp[N];
	void solve(){
		for(ll i=0; i<n; i++) cin>>a[i];
		for(ll i=0; i<n; i++) cin>>w[i];
		
		dp[0]=a[0];
		for(ll i=1; i<n; i++){
			for(ll j=i-1; j>=0; j--){
				if(a[i]>a[j]) dp[i]=max(dp[i], dp[j]+w[i]);
			}
			ans=max(dp[i], ans);
		}
		cout<<ans;
	}
}

namespace sub2{
	map<ll, ll> dp;
	ll a[N], w[N], ans=0;
	void solve(){
		for(ll i=0; i<n; i++) cin>>a[i];
		for(ll i=0; i<n; i++) cin>>w[i];
		dp[0]=0;
		for(ll i=0; i<n; i++){
			auto it=dp.lower_bound(a[i]); it--;
			dp[a[i]]=max(dp[a[i]], it->se+w[i]);
			ans=max(dp[a[i]], ans);
		}
		cout<<ans;
	}
}

signed main(){
	ios_base::sync_with_stdio(NULL); cin.tie(nullptr); cout.tie(nullptr);
//    freopen(".inp","r",stdin);
//    freopen(".out","w",stdout);
	cin>>n;
	
	if(n<=1000) sub1::solve();
	else sub2::solve();
    return 0;
}
