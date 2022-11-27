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
const ll MOD = 14062008;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,k,x,dp[MAX_N];
bool a[MAX_N]; 

void solve(){
  dp[0] = 0,dp[1] = 1;

  forn(i,2,n + 1,1){
    if(a[i] != true) dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    else dp[i] = 0;
  }
  cout<<dp[n];

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>n>>k;
  forn(i,0,k,1) {
    cin>>x;
    a[x] = true;
  }
  solve();

  return 0;
}
