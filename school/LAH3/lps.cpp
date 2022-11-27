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
const int MAX_N_2 = 3000;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

string a,b;

void solve(){
  ll dp[MAX_N_2][MAX_N_2];
  for(ll i = 0;i < a.size();++i){
    for(ll j = 0;j < b.size();++j){
        if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1; 
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
      }
  }
  cout<<dp[a.size() - 1][b.size() - 1];
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>a; 
  string b = a;
  reverse(all(b));
  solve();

  return 0;
}

