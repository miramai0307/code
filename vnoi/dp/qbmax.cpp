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
const int MAX_N_2 = 100;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll m,n,a[MAX_N_2][MAX_N_2],dp[MAX_N_2][MAX_N_2]; 

void solve(){
  dp[0][0] = a[0][0];
  forn(i,1,n,1)
    dp[i][0] = dp[i-1][0] +  a[i][0];
  
  forn(j,1,m,1)
    dp[0][j] = dp[0][j-1] +  a[0][j]; 

  forn(i,1,m,1){
    forn(j,0,n,1){
      dp[i][j] = max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j])) + a[i][j];
      cout<<dp[i][j]<<spc;
    }
    cout<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>m>>n;
  forn(i,0,m,1){
    forn(j,0,n,1)
      cin>>a[i][j];
  }

  solve();

  return 0;
}
