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

ll n,k,sum,p[MAX_N],a[MAX_N],temp;
map<ll,ll> ex;

void pt(){
  bool flag = 0;
  ll x = n;
  for(ll i = 2;i <= x;++i){
    while(x % i == 0){
      flag = 1;
      p[temp] = i;
      ex[i]++;
      x /= i;
    }
    temp += flag;
    flag = 0;
  }
  for(ll i =0; i < temp;++i){
    sum += ex[p[i]];
  }
}

void solve(){
  pt();
  if(sum < k){
      cout<<"Sadge";
      return;
  }
  cout<<"Happyge"<<endl;
  ll cnt = 0,i = 1; a[0] = n/p[0]; ex[p[0]]--;
  while(i < k - 1){
    if(ex[p[cnt]] > 0){
      a[i] = a[i-1]/p[cnt];
      //cout<<p[cnt]<<spc<<ex[p[cnt]]<<endl;
      //cout<<a[i-1]<<spc<<a[i]<<endl;
      --ex[p[cnt]];
      ++i;
    }else cnt++;  
  }
  if(k == 1) cout<<n - 1;
  else{
    a[k-1] = a[k-2] - 1; 
    for(ll i = 0;i < k;++i) cout<<a[i]<<spc;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen(".inp","r",stdin);
  //freopen(".out","w",stdout);

  cin>>n>>k;
  solve();

  return 0;
}

