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
ll n, ans, f; 

ll fac(ll n){
  ll ans = 1;
  for(ll i = 1;i <= n;++i){
    ans = (ans * i) % MOD;
  }
  return ans;
}

ll solve(ll n){
	f=fac(n-4);
  ll cnt = 0;
  if(n < 4) return 0;
  for(ll d = 1;d <= n;++d){
    for(ll c = 1;c <= n;++c){
      if((c*(int)pow(10, (int)log10(d)+1) + d) % 4 != 0) continue;
      for(ll a = 1;a <= n;++a){
        for(ll b = 1;b <= n;++b){
          if(a != b && a != c && a != d && b != c  && b != d && c != d && 
		  ((a*(int)pow(10,(int)log10(b)+(int)log10(c)+(int)log10(d)+3) + 
		  b*(int)pow(10, (int)log10(c)+(int)log10(d)+2) + 
		  c*(int)pow(10, (int)log10(d)+1) + d) % 10000) %16== 0){
            ans=(ans+f)%MOD;
//            cout<<ans<<endl;
          }
        }
      }
    }
  }
  return ans;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>n;
  cout<<solve(n);

  return 0;
}

