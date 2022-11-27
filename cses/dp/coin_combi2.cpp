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
const int MAX_N_2 = 100;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,x,c[MAX_N],dp[MAX_N]; 

void solve(){
  dp[0] = 1; 
  forn(i,0,n,1){
    forn(j,1,x+1,1){
      if(j >= c[i]) dp [j] = (dp[j] + dp[j - c[i]]) % MOD;
    }
  }
  cout<<dp[x];
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
 
  cin>>n>>x;
  forn(i,0,n,1) cin>>c[i];
  solve();
  return 0;
}

