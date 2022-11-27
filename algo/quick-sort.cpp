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
#define forn(a,n,c) for(ll i = a;i < n;i += c)
#define fornd(a,n,c) for(ll i = a;i >= n;--c)
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

ll n,a[MAX_N]; 

ll part(ll low,ll high){
  ll pivot = a[high],i = low - 1;

  for(ll j = low; j <= high - 1;++j){
    if(a[j] < pivot){
      ++i;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[high]);
  return i + 1;
}

void solve(ll low,ll high){
  if(low < high){
    ll piv = part(low,high);
    solve(low,piv - 1);
    solve(piv + 1,high);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n;
  forn(0,n,1) cin>>a[i];
  solve(0,n-1);
  forn(0,n,1) cout<<a[i]<<" ";
  return 0;
}

