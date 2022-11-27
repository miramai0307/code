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
const int MAX_N_2 = 3e4 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll t,n;
ld a[MAX_N],f[3005][3005]; 

void solve(){
  ll least = n/2  + 1; 
  for(ll i = 0;i <= n;++i) f[i][0] = 1; 
  for(ll i = 1;i <= n;++i){
    for(ll j = 1;j <= least;++j)
      f[i][j] = f[i-1][j-1]*a[i] + f[i-1][j]*(1-a[i]);
  }
  cout<<setpre(10)<<f[n][least];
}

int main(){
  cin.tie(0) -> sync_with_stdio(0); 
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>n;
  for(ll i = 1;i <= n;++i) cin>>a[i];
  solve();

  return 0;
}
