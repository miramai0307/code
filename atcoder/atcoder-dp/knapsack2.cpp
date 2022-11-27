#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(),(a).rend()

#define min_a(a,n) *min_element(a,a+n)
#define max_a(a,n) *max_element(a,a+n)
#define forn(i,a,n,c) for(ll i = a;i < n;i += c)
#define fornd(i,a,n,c) for(ll i = a;i >= n;--c)
#define ins(n) insert(n)
#define pb(n) push_back(n)
#define mp(val,ind) make_pair(val,ind) 
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e6 + 5;
const int MAX_N_2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll N,W,w[MAX_N],v[MAX_N]; 

void solve(){
  vector<ll> dp(MAX_N,INF);
  dp[0] = 0;
  for(ll i = 0;i < N;++i){
    for(ll j = MAX_N - 1;j >= 0;--j)
      if(dp[j] + w[i] <= W) dp[j + v[i]] = min(dp[j + v[i]],dp[j] + w[i]);
  }
  for(ll i = MAX_N - 1;i >= 0;--i){
    if(dp[i] != INF){
      cout<<i<<endl;
      break;
    } 
  }
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>N>>W; 
  for(ll i = 0;i < N;++i) cin>>w[i]>>v[i];
  solve();

  return 0;
}

