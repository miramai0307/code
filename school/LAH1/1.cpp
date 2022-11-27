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

string s;
char m; 


bool vowel(char a){
  return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'Y');
}

void encode(){
  forn(i,0,s.size(),1){
    if(vowel(s[i])) cout<<s[i]<<'f'<<s[i];
    else cout<<s[i];
  }
}

void decode(){
  for(ll i = 0;i < s.size();){
    cout<<s[i];
    if(vowel(s[i]) && s[i+1] == 'f' && s[i+2] == s[i]) i += 3; 
    else ++i;
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  getline(cin,s);
  cin>>m;
  if(m == 'c') encode();
  else if(m == 'd') decode();
  

  return 0;
}

