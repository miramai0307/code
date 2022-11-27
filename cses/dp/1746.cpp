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

ll n,m,a[MAX_N],dp[100005][105]; 

//dp[i][j] = the way to put val in i index with x[i] = j 
//when i = 0, x[i] = 0 -> dp[i][j] = 1 with j : 1 -> m 
//     i = 0, x[i] != 0 -> dp[i][x[i]] = 1
//     i != 0 -> dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i-1][j-1] + dp[i-1][j+1]) % M
//

void solve(){ 
  if(a[0] == 0)
    for(ll j = 1;j <= m;++j) 
      dp[0][j] = 1;
  else dp[0][a[0]] = 1; 

  for(ll i = 1;i < n;++i){
    if(a[i] == 0)
      for(ll j = 1;j <= m;++j)
        dp[i][j]=(dp[i][j]+dp[i-1][j+1]+dp[i-1][j]+dp[i-1][j-1])%MOD;  
    else 
      dp[i][a[i]] = (dp[i][a[i]] + dp[i-1][a[i]] + dp[i-1][a[i]-1] + dp[i-1][a[i] +1]) % MOD;
  }

  ll ans = 0;
  for(ll i = 1;i <= m;++i) ans = (ans + dp[n - 1][i]) % MOD;
  cout<<ans;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>n>>m;
  for(ll i = 0;i < n;++i) cin>>a[i];
  solve();

  return 0;
}

