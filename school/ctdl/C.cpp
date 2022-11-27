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

ll n,a[MAX_N]; 

void solve(){
  ll cur = 1,i = 0;
  stack<ll> st;
  while(cur <= n){
    st.push(cur);
    while(!st.empty() && st.top() == a[i]){
      st.pop();
      i++;
      if(i >= n) break;
    }
    ++cur;
  }
  if(st.empty()) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("C.inp","r",stdin);
  freopen("C.out","w",stdout);

  while(true){
    cin>>n;
    if(n == 0) break;
    while(true){
      cin>>a[0]; 
      if(a[0] == 0){
        cout<<endl;
        break;
      }
      for(ll i = 1;i < n;++i) cin>>a[i];
      solve();
    }
  }

  return 0;
}

