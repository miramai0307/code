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

ll n,u,v,t;
string s; char c; 
struct dsu{
  vector<ll> e;
  dsu(ll n){ e = vector<ll>(n + 1,-1); } 
  ll get(ll x) {return e[x] < 0 ? x : e[x] = get(e[x]); }
  bool same(ll a,ll b) {return (get(a) == get(b));}
  bool unite(ll a,ll b){
    a = get(a),b = get(b);
    if(a == b) return false; 
    if(a > b) swap(a,b);
    e[a] += e[b]; e[b] = a; return true;
  }
};


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("dsu.inp","r",stdin);
  freopen("dsu.out","w",stdout);
  cin>>t;
  while(t--){
    cin>>c;
    cin.ignore();
    n = int(c) - 'A' + 1; 
    dsu d(n + 1);
    set<ll> ans,a;
    while(getline(cin,s) && s != ""){
      u = s[0] - 'A' + 1,v = s[1] - 'A' + 1; 
      ans.ins(u); ans.ins(v);
      d.unite(u,v);
    }
    ll cnt = 0;
    for(ll i = 1;i <= n;++i){
      //cout<<i<<spc<<d.get(i)<<endl;
      if(i != d.get(i)) ++cnt;
    }
    cout<<n - cnt<<endl;
    if(t) cout<<endl;
  }
  return 0;
}

