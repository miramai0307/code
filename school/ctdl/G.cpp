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

ll n,k = 0; 

void solve(){
  unordered_map<int,queue<int>*> id;
  queue<queue<int>*> team;
  int si,x,num; string s;
  while(n--){
    cin>>si;
    queue<int>* t = new queue<int>();
    for(int i = 0;i < si;++i){
      cin>>x; id[x] = t;
    }
  }

  cout<<"Scenario #"<<++k<<endl;
  while(cin>>s,s != "STOP"){
    if(s == "ENQUEUE"){
      cin>>num;
      id[num]->push(num);
      if(id[num]->size() == 1) team.push(id[num]);
    }
    else{
      while(team.front()->empty() == true) team.pop();
      cout<<team.front()->front()<<endl;
      team.front()->pop();
    }
  }
  cout<<endl; 
  
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("G.inp","r",stdin);
  freopen("G.out","w",stdout);

  while(cin>>n,n != 0){
    solve();
  }

  return 0;
}

