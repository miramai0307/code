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

ll n,k,x,y; 
char grid[MAX_N_2][MAX_N_2];
bool check[MAX_N_2][MAX_N_2];

queue<pair<ll,ll>> q;

void solve(){
  while(q.empty() == false){
    ll xn = q.front().fi,yn = q.front().se; 
    cout<<xn<<spc<<yn<<endl;
    q.pop();
    if(check[xn][yn]) continue;
    check[xn][yn]=true;
    if(grid[xn][yn] == 'Y'){
      cout<<"YES";
      return;
    }
    for(ll i=-k;i<=k;i++){
      if(xn + i >= 0 && xn + i < n) q.push({xn + i,yn});
      if(yn + i >= 0 && yn + i < n) q.push({xn,yn + i});
    }
  }
  cout<<"NO";
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>n>>k;
  forn(i,0,n,1){
    forn(j,0,n,1){
      cin>>grid[i][j];
      if(grid[i][j] == 'B') q.push({i,j});
    }
  }
  solve();
  return 0;
}

