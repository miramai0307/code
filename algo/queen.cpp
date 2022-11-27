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

const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll N;
bool board[3000][3000],check[3000][3000];

void show(){
  forn(i,0,N,1){
    forn(j,0,N,1){
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}

bool safe(ll row,ll col){
  ll i,j;
  
  for(i = 0;i < col;++i){
    if(board[row][i]){
      return false;
    }
  }
  
  for(i = row,j = col; i >= 0 && j >= 0;--i,--j){
    if(board[i][j]) 
      return false;
  }
  
  for(i = row,j = col;i < N && j >= 0;++i,--j){
    if(board[i][j])
      return false;
  }

  return true;
}

void solve(ll y){
 if(y >= N){
    show();
    return;
  }
 for(ll i = 0;i < N;++i){
    if(!safe(i,y)) continue;
    board[i][y] = 1;
    solve(y+1);
    board[i][y] = 0;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  
  cin>>N;
  solve(0);

  return 0;
}

