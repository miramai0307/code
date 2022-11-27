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

string s; 

void solve(){
  bool flag = false;
  ll n = s.size();
  //check 1
  if(s[n - 2] == '6' && s[n - 1] == '8') flag = true;

  //check 2
  ll cnt = 0;
  for(ll i = 0;i < n/2;++i){
    if(s[i] == s[n - i - 1]) cnt++;
  }
  if(cnt == n/2) flag = true; 

  //check 3
  for(ll i = 0;i <= n - 4;++i){
    if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2] == s[i+3]) flag = true;
  }

  if(flag) cout<<"YES";
  else cout<<"NO";

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>s;
  solve();

  return 0;
}

