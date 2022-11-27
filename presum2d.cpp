#include <bits/stdc++.h>
using namespace std;

#define arr array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(),(a).rend()

#define min_a(a,n) *min_element(a,a+n)
#define max_a(a,n) *max_element(a,a+n)
#define forn(i,a,n,c) for(ll i = a;i <= n;i += c)
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

ll m,n,a,b,c,d,ar[MAX_N_2][MAX_N_2],s[MAX_N_2][MAX_N_2]; 

void solve(){
  ll ans = -MAX_N,a1,b1,c1,d1;
  forn(i,1,m,1)
    forn(j,1,n,1)
      s[i][j] = s[i][j-1] + s[i-1][j] - s[i-1][j-1] + ar[i][j];
  
  //s[c][d] - s[c][b - 1] - s[a -1][d] + s[a-1][b-1]
  
  forn(a,1,m,1){
    forn(b,1,n,1){
      forn(c,1,m,1){
        forn(d,1,n,1){
          ll t = s[c][d] - s[c][b - 1] - s[a -1][d] + s[a-1][b-1];
          if(ans < t){
            ans = t; 
            a1 = a,b1= b,c1 = c,d1 = d;
          }
        }
      }
    }
  }
  cout<<ans<<spc<<a1<<spc<<b1<<spc<<c1<<spc<<d1;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>m>>n;
  forn(i,1,m,1)
    forn(j,1,n,1)
      cin>>ar[i][j];   
  solve();

  return 0;
}

