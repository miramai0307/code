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

ll n,s,a[MAX_N];
bool dp[MAX_N_2][MAX_N_2]; 

// dp[i][j] = dp[i - 1][j] || dp[i-1][j - a[i]] 

void solve(){
  forn(i,0,s,1)
    dp[i][0] = true;

  forn(i,0,n,1)
    dp[0][i] = true;

  forn(i,1,n + 1,1){
    forn(j,1,s + 1,1){
      if(j >= a[i]) dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i]];
      else dp[i][j] = dp[i-1][j];
    }
  }
  if(dp[n][s] == true) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}

  int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
    cin>>n;
    forn(i,0,n,1){
      cin>>a[i];
      s += a[i];
    }
    if(s % 2 != 0) cout<<"NO";
    else{
      s /= 2;
      solve();
    }

  return 0;
}

