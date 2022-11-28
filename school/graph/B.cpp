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

ll n,m,u,v,a;

vector<ll> dfs(vector<ll> adj[],ll u){
  stack<ll> st; vector<bool>visited(n+1,false);
  vector<ll> ans;
  st.push(u); visited.clear();
  while(!st.empty()){
    ll t = st.top(); st.pop();
    for(auto i : adj[t]){
      if(!visited[i]){
        visited[i] = true; 
        st.push(i);
      }
    }
  }
  for(ll i = 1;i <= n;++i)
    if(!visited[i]) ans.push_back(i);
  return ans;
}

void solve(){
  vector<ll> adj[MAX_N_2];
  while(cin>>u,u != 0)
    while(cin>>v,v != 0)
      adj[u].push_back(v);
  cin>>m;
  while(m--){
    cin>>a; vector<ll> arr = dfs(adj,a);
    cout<<arr.size();
    for(auto i : arr) cout<<spc<<i;
    cout<<endl;
  }
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);

  while(cin>>n,n != 0) solve();
  return 0;
}

