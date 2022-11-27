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
const int MAX_N_2 = 100;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

char c;
string s;
ll n;

bool up(char a){
  return (a >= 65 && a <= 90);
}

bool down(char a){
  return (a >= 97 && a <= 122);
}

void solve(){
  for(auto c : s){
    if(down(c)){
      if(n < 0) n = (n % 26) + 26;
      int temp = int(c) - 'a' + 1;
      if((temp + n) % 26 == 0) cout<<'z'; 
      else cout<<char((temp + n) % 26 + 'a' - 1);
    }else if(up(c)){
      if(n < 0) n = (n % 26) + 26;
      int temp = int(c) - 'A' + 1;
      if((temp + n) % 26 == 0) cout<<'Z'; 
      else cout<<char((temp + n) % 26 + 'A' - 1);
    }else{
      cout<<c;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  getline(cin,s);
  cin>>n;
  n = -n;
  solve();

  return 0;
}

