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

string a,b;
ll dp[MAX_N_2][MAX_N_2];

void solve(){
  ll n = a.size(),m = b.size();
  for(ll i = 0;i <= n;++i){
    for(ll j = 0;j <= m;++j){
      if(i == 0 || j == 0) dp[i][j] = 0;
      else if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1; 
      else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    }
  }
  ll i = n,j = m,index = dp[n][m];
  char ans[index];
  while(i >= 0 && j >= 0){
    if(a[i] == b[j]){
      ans[index] = a[i];
      --i;--j;--index;
    }
    else if(dp[i][j+1] > dp[i+1][j]) --i;
    else --j;
  }
  cout<<ans;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>a>>b;
  solve();

  return 0;
}

