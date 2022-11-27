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

string s; 
map<string,ll> val; 
ll c;

void solve(string s,ll len){
  if(s.size() == len){
    val[s] = c++;
    return;
  }
  char last;
  if(s.empty()) last = 'a';
  else last = s[s.size() - 1] + 1; 

  for(char i = last;i <= 'z';++i)
    solve(s + i,len);

}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  freopen("A.inp","r",stdin);
  freopen("A.out","w",stdout);
  
  for(ll i = 0;i <= 5;++i){
    solve("",i);
  }
  while(cin>>s){
    cout<<val[s]<<endl;
  }
  return 0;
}

