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

ll t,n,m,dp[35][1<<16];
bool dd[1<<10][1<<10];

void cmask(ll x){
  mset(dd);
  ll lim = 1 << x;
  for(ll m1 = 0;m1 < lim;++m1){
    for(ll m2 = 0;m2 < lim;++m2){
      bool check = true; 
      for(ll i = 0;i < x - 1;++i){
        ll c = (bool)(m1&(1<<i)) + (bool)(m1&(1<<(i+1))) + (bool)(m2&(1<<(i+1))) + (bool)(m2&(1<<i));
        if(c == 0 || c == 4){
          check = false; 
          break;
        }
      }
      dd[m1][m2] = check; 
    }
  }
}

void solve(){
  mset(dp);
  ll lim = 1 << m,ans = 0;
  for(ll i = 0;i < lim;++i) dp[0][i] = 1; 
  cmask(m); 
  for(ll i = 1;i < n;++i){
    for(ll m1 = 0;m1 < lim;++m1){
      for(ll m2 = 0;m2 < lim;++m2){
        if(dd[m1][m2] == true) dp[i][m1] += dp[i - 1][m2];
      }   
    }
  }
  for(ll i = 0;i < lim;++i) ans += dp[n-1][i];
  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>t;
  while(t--){
    cin>>n>>m;
    if(m > n) swap(m,n);
    solve();
  }

  return 0;
}

