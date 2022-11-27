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
const int N=1000050,M=1000000007;
const ll INF=1e18+7;

ll a, b;

namespace sub1{
	ll m=1;
	set<pair<int, int>> ans;
	void solve(ll a, ll b){
		for(ll i=a; i<=b; i++) m*=i;
		for(ll i=1; i<=m; i++){
			for(ll j=1; j<=m; j++){
				if(i/gcd(i, j)*j==m){
					 ans.insert({i, j});
					 // cout<<i<<" "<<j<<endl;
				}
			}
		}
		cout<<ans.size();
	}
}

namespace sub2{
	ll snt[N], a, b, pr[N], dem, sl, ans=1;
	bool dd[N];
	
	void sieve(){
		dd[0]=dd[1]=0;
		for (int i=2; i*i<=10000; i++) {
		    if(!dd[i]){
	            pr[dem++]=i;
		        for (int j=i*i; j<=10000; j+=i){
		            dd[j]=0;
		        }
		    }
		}
	}
	
	 
	void pt(ll x){
		ll sq=sqrt(x);
		for(ll i=0; i<dem && pr[i]<=sq; i++){
			while(x%pr[i]==0){
				snt[pr[i]]++;
				x/=pr[i];
			}
		}
		if(x!=0) snt[x]++;
	}
	void solve(ll a, ll b){
		sieve();
		for(ll i=a; i<=b; i++) pt(i); 
		
		for(ll i=2; i<=1000000; i++){
			if(snt[i]!=0){
				ans*=(snt[i]+1);
				sl++;
			}
		}
		cout<<ans*pow(2, sl)/2;
	}
}

signed main(){
	ios_base::sync_with_stdio(NULL); cin.tie(nullptr); cout.tie(nullptr);
//    freopen(".inp","r",stdin);
//    freopen(".out","w",stdout);
	cin>>a>>b;
	if(b-a<=5)sub1::solve(a, b);
	else sub2::solve(a, b);
    return 0;
}
