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

const int MAX_N = 4e6 + 5;
const int MAX_N_2 = 1e3 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll a,b,d; 
vector<bool>sieve(MAX_N,true);

bool legit(ll n, ll d){
  string s = to_string(n);
  for(auto j : s){
    if(j - '0' == d) return true;
  }
  return false;
}

void solve(){
  ll ans = 0;
  sieve[0] = sieve[1] = false;
  for(ll i = 2;i*i <= b;++i){
    if(sieve[i]){
      for(ll j = i*i;j <= b;j += i){
        sieve[j] = false;
      }
    }
  }

  for(ll i = a; i <= b;++i){
    if(sieve[i] == true && legit(i,d) == true){
      //cout<<i<<endl;
      ++ans;
    }
  }
  cout<<ans;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);
  cin>>a>>b>>d;
  solve();

  return 0;
}


