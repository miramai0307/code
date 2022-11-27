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

ll n,ty,val; 

void solve(){
  stack<ll> st;queue<ll> qu;priority_queue<ll> prior;
  bool is_st = true,is_qu = true,is_prior = true;
  forn(i,0,n,1){
    cin>>ty>>val;
    if(ty == 1){
      if(is_st) st.push(val); 
      if(is_qu) qu.push(val);
      if(is_prior) prior.push(val);
    }
    else{
      //stack
      if(!st.empty() && st.top() == val) st.pop();
      else is_st = false; 
      
      //queue 
      if(!qu.empty() && qu.front() == val)qu.pop();
      else is_qu = false; 

      //priority queue
      if(!prior.empty() && prior.top() == val)prior.pop();
      else is_prior = false;
    }
    //cout<<is_st<<spc<<is_qu<<spc<<is_prior<<endl;
  }
  if(is_st == true && is_qu == false && is_prior == false) cout<<"stack";
  else if(is_st == false && is_qu == true && is_prior == false) cout<<"queue";
  else if(is_st == false && is_qu == false && is_prior == true) cout<<"priority queue";
  else if(is_st == false && is_qu == false && is_prior == false) cout<<"impossible";
  else cout<<"not sure";
  cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("L.inp","r",stdin);
  freopen("L.out","w",stdout);

  while(cin>>n) solve();

  return 0;
}

