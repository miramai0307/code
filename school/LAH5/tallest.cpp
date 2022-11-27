#include <iostream> 
#include <algorithm>
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

ll n,i,h,q,a[MAX_N],l,r;

void process(ll l,ll r){
  if(l > r) a[l] = a[r]; 
  ll ma = 0,po = min(a[l],a[r]) - 1; 
  forn(i,l+1,r,1) ma = max(ma,a[i]);
  po = max(0LL,ma - po);
  forn(i,l+1,r,1) a[i] -= po; 
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>n>>i>>h>>q;
  for(ll i = 1;i <= n;++i) a[i] = h;
  while(q--){
    cin>>l>>r;
    if(l > r) swap(l,r);
    process(l,r);
  }
  for(ll i = 1;i <= n;++i) cout<<a[i]<<endl; 

  return 0;
}

