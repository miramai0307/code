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

ll a,b,c,x,y,z;
char t;

void solve(){
  //a:b:c,x:y:z
  if(z < c){
    z += 60;
    y--;
  }
  if(y < b){
    y += 60;
    x--;
  }
  if(x<a) x+=24;

  if(x-a<10) cout<<0<<x-a<<":";
  else cout<<x-a<<":";

  if(y - b<10) cout<<0<<y - b<<":";
  else cout<<y - b<<":";

  if(z-c<10) cout<<0<<z-c;
  else cout<<z-c;

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>a>>t>>b>>t>>c;
  cin>>x>>t>>y>>t>>z;
  solve();

  return 0;
}

