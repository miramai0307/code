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

ll t,to,m,he;
bool l = 0,r = 1;
string type;

void solve(){
  cin>>to>>m;
  to *= 100;
  vector<queue<ll>> bank (2);
  for(ll i = 0;i < m;++i){
    cin>>he>>type;
    if(type == "left") bank[l].push(he);
    else bank[r].push(he);
  }
  
  bool i = l;
  ll ans = 0;
  while(!bank[l].empty() || !bank[r].empty()){
    ll h = 0;
    while(!bank[i].empty() && h + bank[i].front() <= to){
      h += bank[i].front(); 
      bank[i].pop();
    }
    ++ans; 
    i ^= 1;
  }
  cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("I.inp","r",stdin);
  freopen("I.out","w",stdout);

  cin>>t;
  while(t--) solve(); 

  return 0;
}

