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
const int MAX_N_2 = 5005;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,dp[MAX_N_2][MAX_N_2];
string x;
//map<vector<ll>,ll> dp;

// dp[i][j] = max(Vi + min(f(l+2,r),f(l+1,r-1)),Vj + min(f(l,r - 2),f(l+1,r-1)))
// base case:
// if(l == r) dp[l][r] = Vl
// if(r == l + 1) dp[l][r] = max(Vl,Vr)

//ll f(ll l,ll r){
//  // Base case
//  if((l > r) || (l >= n) || (r < 0)) return 0;
//  
//  vector<ll> k{l,r};
//  if(dp[k] != 0) return dp[k];
//
//  ll op1 = x[l] + min(f(l + 2,r),f(l + 1,r-1));
//  ll op2 = x[r] + min(f(l,r - 2),f(l+1,r-1));
//  
//  dp[k] = max(op1,op2);
//  return dp[k];
//
//}

void solve(){
  ll n = x.size();
  for(ll gap = 0;gap < n;++gap){
    for(ll l = 0,r = gap;r < n;++l,++r){
      ll op1 = ((l+2) <= r) ? dp[l+2][r] : 0;
      ll op2 = ((l+1) <= r-1) ? dp[l+1][r-1] : 0;
      ll op3 = (l <= (r-2)) ? dp[l][r-2] :  0;
      dp[l][r] = max(int(x[l] - 'a') + min(op1,op2),int(x[r] - 'a') + min(op2,op3));
    }
  }
  cout<<dp[0][n-1];
}

signed main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>x;
  //cout<<f(0,n-1);
  solve();
  return 0;
}

