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

ll n,dp[MAX_N_2][MAX_N_2],a[MAX_N],b[MAX_N],c[MAX_N]; 

// dp[i][j] is the maximum possible points with i is type of actvity and j is 
// dp[0][i] = max(dp[1][i-1],dp[2][i-1]) + a[i]
// dp[1][i] = max(dp[0][i-1],dp[2][i-1]) + b[i]
// dp[2][i] = max(dp[0][i-1],dp[1][i-1]) + c[i]

void solve(){
  dp[0][0] = a[0],dp[1][0] = b[0],dp[2][0] = c[0];
  for(ll i = 1;i < n;++i){
    dp[0][i] = max(dp[1][i-1],dp[2][i-1]) + a[i];
    dp[1][i] = max(dp[0][i-1],dp[2][i-1]) + b[i];
    dp[2][i] = max(dp[0][i-1],dp[1][i-1]) + c[i];
    //cout<<dp[0][i]<<spc<<dp[1][i]<<spc<<dp[2][i]<<endl;
  }
  cout<<max(dp[0][n-1],max(dp[1][n-1],dp[2][n-1]));

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>n;
  for(ll i = 0;i < n;++i) cin>>a[i]>>b[i]>>c[i];
  solve();

  return 0;
}

