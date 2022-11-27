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

string mul(string a, string b){
    string res="";
    int n=a.length();
    int m=b.length();
    int len=n+m-1;
    int carry=0;
    for(int i=len;i>=0;i--)
    {
        int tmp=0;
        for(int j=n-1;j>=0;j--)
            if(i-j<=m && i-j>=1)
            {
                int a1=a[j]-48;
                int b1=b[i-j-1]-48;
                tmp+=a1*b1;
            }
            tmp+=carry;
            carry=tmp/10;
            res=(char)(tmp%10 + 48)+res;
    }
    while(res.length()>1 && res[0]=='0') res.erase(0,1);
    return res;
}

string mod(string a,int b){
	int sum=0,i=0,n=a.size();
	string ans="";
	while(sum<b&&i<n){
		sum=sum*10+(a[i]-'0');
		++i;
	}
	sum%=b;
	for(;i<n;++i) sum=(sum*10+(a[i]-'0'))%b;
	ans = to_string(sum);
  return ans;
}

string change(string s){
  forn(i,0,s.size(),1){
    if(s[i] != '0') s[i] -= 1;
    else s[i] = '9';
  }
  if(s[0] == '0') s.erase(s.begin());
  return s;
}

ll n;
string a,b;

void solve(){
  string f1,f2,f3;
  f1 = a,f2 = b;
  forn(i,0,n-2,1){
    f3 = mul(f1,f2);
    f3 = change(f3);
    f3 = mod(f3,1000);
    f1 = f2;
    f2 = f3;
  }
  cout<<f3;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
  cin>>n>>a>>b;
  solve();
  return 0;
}

