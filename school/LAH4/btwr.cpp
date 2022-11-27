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

ll n; 

struct tow{
  ll w,b;
  bool operator <(const tow &x) const{
    return w < x.w && b < x.b;
  }
} a[MAX_N];

ll dfs(ll x){
  ll res = 0;
  for(ll i = 0;i < n;++i){
    if(a[i] < a[x]) res = max(res,dfs(i));
  }
  return res + 1;
}

void solve(){
  ll ans = 0; 
  for(ll i =0;i < n;++i){
    ans = max(ans,dfs(i));
  }
  cout<<ans;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>n;
  for(ll i = 0;i <n; ++i) cin>>a[i].w>>a[i].b;
  solve();

  return 0;
}

