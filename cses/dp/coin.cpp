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
  const ll MOD = 1e9 + 7;
  const ll INF = 1e9;
  const ld EPS = 1e-9;

  ll n,s,dp[MAX_N],c[MAX_N];

  void solve(){
    for(ll i = 1;i <= s;++i){
      dp[i] = INF;
      for(ll j = 0;j < n;++j){
        if(i - c[j] >= 0)
          dp[i] = min(dp[i],dp[i-c[j]] + 1);
      }
    }
    if(dp[s] == INF) cout<<-1;
    else cout<<dp[s];
  }

  int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);  
    
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n>>s;
    forn(i,0,n,1) cin>>c[i];
    solve();

    return 0;
  }

