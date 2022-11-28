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

ll n,m; 

//1:hasn't visisted all the child node,
//2:has visisted all the child node,
//0:hasn't visisted at all
struct graph{
  vector<vector<ll>> adj; vector<int> color; 
  vector<ll> timein,timeout,dis,parent;
  ll dfs_timer = 0;
  graph(ll n){ 
    adj=vector<vector<ll>>(n+1);color=vector<int>(n+1,0);
    timein=vector<ll>(n+1),timeout=vector<ll>(n+1);
    dis=vector<ll>(n+1),parent=vector<ll>(n+1);
  }
  void input(string type,ll m){
    while(m--){ 
      cin>>u>>v; 
      if(type == "undirected"){adj[u].push_back(v); adj[v].push_back(u); }
      else adj[u].push_back(v);
    }
  }
  void dfs(ll s){
    timein[s] = dfs_timer++; color[s] = 1;
    for(auto i : adj[s])
      if(color[i] == 0) dfs(i);
    color[s] = 2; timeout[s] = dfs_timer++;
  }
  void bfs(ll s){
    color[s] = 1; q.push(s),parent[s] = -1;
    while(!q.empty()){
      ll v = q.front(); q.pop();
      for(auto u : adj[v]){
        if(color[u] == 0){
          color[u] = 1; q.push(u);
          d[u] = d[v] + 1; p[u] = v;
        }
      }
    }
  }
};

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  //freopen("i.inp","r",stdin);
  //freopen("o.out","w",stdout);

  cin>>n>>m;

  return 0;
}

