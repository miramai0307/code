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

ll n,k,a[MAX_N],sum[MAX_N],ans[MAX_N],m; 

void show(){
  for(ll i = 1;i <= k;++i){
    for(ll j = 0;j < n;++j){
      if(ans[j] == i){
        cout<<ans[j]<<" ";
      }
    }
    cout<<endl;
  }
}

bool check(){
  for(ll i = 1;i <= k;++i){
    if(sum[i] != m){
      return false; 
    }
  }

  return true; 
}

void solve(ll i){
  if(i == n){
    if(check() == true){
      show();
      exit(0);
    }
    return;
  }
    
  for(ll j = 1;j <= k;++j){
    sum[ans[j]] -= a[i];
    ans[i] = j; 
    sum[j] += a[i]; 
    solve(i+1);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n>>k;
  for(ll i = 0;i < n;++i){
    cin>>a[i];
    m += a[i];
  }
  if(m % k != 0){
    cout<<-1;
    return 0;
  }
  m /= k;
  solve(0);

  return 0;
else{
    m /= k;
    solve(0);
  }}

