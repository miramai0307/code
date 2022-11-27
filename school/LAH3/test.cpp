#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
const int N=200050,M=1000000007;

ll n, fac[N];

tuple<ll, ll, ll> gcd(ll a, ll b){
    if(b==0) return {1, 0, a};
      ll x, y, g;
        tie(x, y, g)=gcd(b, a%b);
          return {y, x-(a/b)*y, g};
}

void faccal(){
    fac[1]=1;
      for(ll i=2; i<=200000; i++) fac[i]=(i*fac[i-1])%M;
}

int main(){
    ios_base::sync_with_stdio(NULL); 
      cin.tie(nullptr); cout.tie(nullptr);
      //    freopen(".inp","r",stdin);
      //    //    freopen(".out","w",stdout);
      cin>>n;
      faccal();
      ll inmod1=(get<1>(gcd(M, fac[n]))+M)%M;
      ll inmod2=(get<1>(gcd(M, fac[n+1]))+M)%M;
      cout<<fac[2*n]*inmod1%M*inmod2%M;
     return 0;
}   
