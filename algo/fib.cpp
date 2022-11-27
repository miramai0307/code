#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define min_a(a,n) *min_element(a,a+n)
#define max_a(a,n) *max_element(a,a+n)
#define forn(a,n) for(ll i = a;i < n;++i)
#define fornd(a,n) for(ll i = a;i >= 0;--i)
#define ins(n) insert(n)
#define pb(n) push_back(n)
#define mp make_pair
#define fi first
#define se second
#define gcd __gcd
#define getl(s) getline(cin, s);
#define setpre(x) fixed << setprecision(x)
#define mset(a) memset(a, 0, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,f[MAX_N]; 

void solve(){
  f[0] = 2,f[1] = 3;
  cout<<f[0]<<" "<<f[1]<<" ";
  forn(2,n){
    f[i] = f[i-1] + f[i-2];
  }
  cout<<f[n-1];
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n;
  solve();

  return 0;
}

