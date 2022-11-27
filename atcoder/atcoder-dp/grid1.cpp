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

int h,w,dp[MAX_N_2][MAX_N_2];
char grid[MAX_N_2][MAX_N_2];


void solve(){
  dp[0][0] = 1;
  for(int i = 0;i < h;++i){
    for(int j = 0;j < w;++j){
      if(grid[i][j] == '#') dp[i][j] = 0;
      else{
        dp[i][j] = (dp[i][j] + dp[i-1][j] + dp[i][j-1]) % MOD; 
      }
    }
  }
  cout<<dp[h - 1][w - 1] % MOD;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  
  cin>>h>>w;
  for(int i = 0;i < h;++i){
    for(int j = 0;j < w;++j)
      cin>>grid[i][j];
  }
  solve(); 

  return 0;
}

