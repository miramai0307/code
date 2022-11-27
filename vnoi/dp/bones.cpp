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
const int MAX_N_2 = 100;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll s[3],a[3],n = 3,ma,ans;
map<ll,ll> cnt;

void solve(ll i){
  if(i == n){
    ll t = cnt[a[0] + a[1] + a[2]]++;
    if(t > ma){
      ma = t; 
      :q


      ans = a[0] + a[1] + a[2];
    }
    return;
  }
  
  for(ll j = 1;j <= s[i];++j){
    a[i] = j; 
    solve(i+1);
  }
  
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>s[0]>>s[1]>>s[2];
  solve(0);
  cout<<ans;
  return 0;
}

