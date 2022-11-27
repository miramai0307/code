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
const int MAX_N_2 = 4000;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

string s;
ll n,dp[MAX_N_2][MAX_N_2];

ll solve(ll l,ll r){
  if(l >= r) return 0;

  if(s[l] != s[r] && r != n) return MAX_N;
  if(dp[l][r] != MAX_N) return dp[l][r];

  if(s[l] == s[r]) dp[l][r] = solve(l + 1,r-1);
  dp[l][r] = min(dp[l][r],solve(l + 1,r) + 1);
  return dp[l][r];

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>s; 
  n = s.size() - 1; 
  forn(i,0,n+1,1){
    forn(j,0,n+1,1)
      dp[i][j] = MAX_N;
  } 

  cout<<solve(0,n);

  return 0;
}

