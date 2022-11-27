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

ll n,a[MAX_N];
bool dp[MAX_N][4]; 

bool f(ll ind,ll val){
  ll k = 3; 
  dp[0][0] = true;
  for(ll i = 1;i <= MAX_N;++i) dp[i][0] =  false;  
  for(ll i = 0;i < n;++i){
      
  }
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  
  memset(memo,-1,sizeof memo);
  cin>>n; for(ll i = 0;i < n;++i) cin>>a[i];
  for(ll i = 1;i < n;++i){
    cout<<f(i,a[i],1)<<spc;
  }

  return 0;
}

