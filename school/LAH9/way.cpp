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
const int MAX_N_2 = 30;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

//ll n,a,b,res;
//bool grid[MAX_N_2][MAX_N_2];
//
//void init(){
//  for(int x = 0;x < 32;++x){
//    for(int y = 0;y < 32;++y)
//      grid[x][y] = bool(x > 0 && y > 0);
//  }
//}
//
//#define cal(n,k,x,y) if(grid[x][y]){ grid[x][y] = false; ans += solve(n,k,x,y); grid[x][y] = true;}
//
//ll solve(int n, int k,int x,int y){
//  if(k + 1 == n)
//    return grid[x-1][y] + grid[x][y-1] + grid[x+1][y] + grid[x][y+1];
//  
//  ll ans = 0;
//  ++x;cal(n,k+1,x,y);
//  x -= 2; cal(n,k + 1,x,y);
//  ++x; 
//  ++y; cal(n,k + 1,x,y); 
//  y -= 2; cal(n,k + 1,x,y);
//  
//  return ans;
//}
//
//ll calc(ll a){
//  init();
//  grid[1][1] = false,grid[2][1] = false; 
//  return solve(a,1,2,1); 
//}
ll ans = 0,a,b;
ll table[] = {1,2,5,12,30,73,183,456,1151,2900,7361,18684,47652,121584,311259,797311,2047384,5260692,13542718,34884239,89991344,232282110,600281932,1552096361,4017128206,10401997092,26957667445,69892976538,181340757857,470680630478,1222433229262,3175981845982};

int main(){
  cin.tie(0) -> sync_with_stdio(0);
  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);
  cin>>a>>b; 
  for(ll i = a;i <= b;++i)
    ans += table[i - 1];
  cout<<ans;
  return 0;
}

