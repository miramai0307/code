#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(),(a).rend()

const int MAX_N = 2e6 + 5;
const int MAX_N_2 = 1e3 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll n,fact[MAX_N]; 


// Calculate the euclid algorithm for inverse mod
tuple<ll, ll, ll> di(ll a, ll b){
    if(b==0) return {1, 0, a};
    ll x, y, g;
    tie(x, y, g)=di(b, a%b);
    return {y, x-(a/b)*y, g};
}

void fac(){
    fact[1] = 1;
    for(ll i = 2;i <= 200000;++i) fact[i] = (fact[i-1]*i) % MOD;
}

void solve(){
    fac();
    ll n1 = (get<1>(di(MOD,fact[n])) + MOD)%MOD;
    ll n2 = (get<1>(di(MOD,fact[n+1])) + MOD)%MOD;
    cout<<fact[2*n] * n1 % MOD * n2 % MOD;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);  
  
  cin>>n;
  solve();
}
           
   
