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

ll t,f;
string a,b;
map<string,ll> ha;

struct dsu{
  vector<ll> e; 
  dsu(ll n){ e = vector<ll>(n+1,-1); }
  ll find(ll x){ return (e[x] < 0) ? x : e[x] = find(e[x]); }
  bool same(ll a,ll b) { return find(a) == find(b); }
  ll unite(ll a,ll b){
    a = find(a),b = find(b); 
    if(a == b) return e[b]; 
    if(a > b) swap(a,b);
    e[a] += e[b],e[b] = a; 
    return e[a];
  }
};
dsu d(MAX_N);

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>t;
  while(t--){
   cin>>f; ll i = 0;
    while(f--){
      cin>>a>>b;
      if(ha[a] == 0){ ++i; ha[a] = i; }
      if(ha[b] == 0){ ++i; ha[b] = i; }
      cout<<abs(d.unite(ha[a],ha[b]))<<endl;
    }
    d = dsu(MAX_N); ha.clear();
  }

  return 0;
}
