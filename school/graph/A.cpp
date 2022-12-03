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

ll w,h,rx,ry;
string dir = "NESW",mov;
char odir;
int mx[4] = {0,1,0,-1},my[4] = {1,0,-1,0};
int ind;
bool pre[MAX_N_2][MAX_N_2];
//North -> East -> South -> West

bool check(){
  return (rx >= 0) && (ry >= 0) && (rx <= w) && (ry <= h);
}

void move(){
  for(ll i = 0;i < 4;++i){
    if(odir == dir[i]){ 
      if(pre[rx + mx[i]][ry + my[i]] == false) rx += mx[i],ry += my[i]; 
      else return;
    } 
  }
}

void change(){
 if(odir == 'N') ry--; 
 else if(odir == 'E') rx--;
 else if(odir == 'S') ry++;
 else rx++;
 pre[rx][ry] = true; 
}

void solve(){
  geti();
  for(auto i : mov){
    if(!check()){ 
      change();
      cout<<rx<<spc<<ry<<spc<<odir<<spc<<"LOST"<<endl;
      cout<<endl;
      return;
    }
    if(i == 'F') move();
    else if(i == 'R'){ ++ind; odir = dir[ind % 4];}
    else{ind += 3; odir = dir[ind % 4]; }
    cout<<rx<<spc<<ry<<spc<<odir<<endl;
  }
  //cout<<rx<<spc<<ry<<spc<<odir<<endl;
  cout<<endl;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);

  cin>>w>>h;
  while(cin>>rx>>ry>>odir>>mov) solve();
  return 0;
}

