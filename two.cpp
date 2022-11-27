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

const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,m,a[MAX_N],b[MAX_N]; 
vector<ll> res;

void solve(){
  ll i = 0,j = 0;
  while(i < n || j < m){
    if(j >= m || (i < n && a[i] <= b[j])){
      res.pb(a[i]); ++i;
    }
    else{
      res.pb(b[j]);
      ++j;
    }
  }
  for(auto k : res) cout<<k<<" ";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n>>m;
  forn(i,0,n,1) cin>>a[i];
  forn(i,0,m,1) cin>>b[i];
  solve();

  return 0;
}

