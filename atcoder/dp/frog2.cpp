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
const int MAX_N_2 = 1e3 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,k,h[MAX_N]; 

//dp[i] = min(dp[i],dp[j - i] + abs(h[i] - h[j]))

void solve(){
  vector<ll> dp(MAX_N,INF);
  dp[0] = 0;
  for(ll i = 0;i < n;++i){
    for(ll j = i + 1;j <= i + k;++j){
      if(j < n) dp[j] = min(dp[j],dp[i] + abs(h[i] - h[j]));
    }
  }
  cout<<dp[n-1];
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>n>>k;
  forn(i,0,n,1) cin>>h[i];
  solve();

  return 0;
}

