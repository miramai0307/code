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

ll t,n; 
double k,x,y;

struct dsu{
  vector<ll> e;
  dsu(ll n) { e = vector<ll>(n+1,-1); }
  ll find(ll x){ return (e[x] < 0) ? x : e[x] = find(e[x]); }
  bool same(ll a,ll b) { return find(a) == find(b); }
  bool unite(ll a,ll b){
    a = find(a),b = find(b);
    if(a == b) return false;
    if(a > b) swap(a,b);
    e[a] += e[b],e[b] = a; return true;
  }
};

void solve(){
  cin>>n>>k; dsu d(n);
  vector<pair<double,double>> a(n); 
  for(ll i = 0;i < n;++i){
    cin>>x>>y; a.push_back({x,y});
  }
  for(ll i = 0;i < n;++i){
    for(ll j = 0;j < n;++j){
      if(i == j) continue; 
      if(sqrt((a[i].fi-a[j].fi)*(a[i].fi-a[j].fi)+(a[i].se-a[j].se)*(a[i].se-a[j].se)) <= k) d.unite(i,j);  
    }
  }
  for(ll i = 0;i < n;++i) cout<<d.find(i)<<spc;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>t;
  while(t--) solve();
  
  return 0;
}
