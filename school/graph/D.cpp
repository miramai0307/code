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

ll n,r,ans,x,y; 
struct node{
  ll size,sum,pa; 
  ld avr; 
} a[MAX_N_2];

int search(){
  int v = 0; double mavr = -1; 
  for(ll i = 1;i <= n;++i){
    if(i != r && mavr < a[i].avr){v = i;mavr = a[i].avr;}
  }
  return v;
}

void solve(){
  for(ll k = 1;k < n;++k){
    int v = search(),pa = a[v].pa; 
    ans += a[v].sum*a[pa].size;

    a[pa].sum += a[v].sum;
    a[pa].size += a[v].size;
    a[pa].avr = (double)a[pa].sum/a[pa].size;
    for(ll i = 1;i <= n;++i)
      if(a[i].pa == v) a[i].pa = pa;
    a[v].avr = -1;
  }
  cout<<ans<<endl;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  while(cin>>n>>r,(n||r)){
    ans = 0;
    for(ll i = 1;i <= n;++i){
      node &t = a[i];
      cin>>t.sum;
      t.size = 1; 
      t.avr = t.sum;
      ans+= t.sum;
    }

    for(ll i = 1;i < n;++i){ cin>>x>>y; a[y].pa = x; }
    solve();
  }
  return 0;
}

