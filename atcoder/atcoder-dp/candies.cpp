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
#define mset(a) memset(a, -1, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e6 + 5;
const int MAX_N_2 = 1e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,k,a[MAX_N],dp[105][100005];

//ll solve(int i,int c){
//  if(i == n - 1){
//    if(a[i]>=c) return 1;
//    else return 0;
//  }
//  if(dp[i][c] != -1) return dp[i][c];
//  ll t=0;
//  for(ll j = 0;j <= a[i];++j){
//    if(c >= j) t = (t + solve(i+1,c - j)) % MOD;
//    else break;
//  }
//  return dp[i][c] = (t%MOD);
//}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>n>>k;
  //memset(memo,-1,sizeof memo);
  for(ll i = 0;i < n;++i) cin>>a[i];
  for(ll i = 0;i < n;++i) dp[i][0] = 1; 
  for(ll i = 0;i < n;++i){
    for(ll j = 0;j <= a[i];++j){
      if(j >= a[i]) dp[i][j] = (dp[i][j] + dp[i-1][j- a[i]]) % MOD;
    }
  }
  cout<<dp[n-1][k];
  return 0;
}

