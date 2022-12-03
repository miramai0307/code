#include <bits/stdc++.h>
using namespace std;

#define mset(a) memset(a, -1, sizeof(a))
#define endl '\n'
#define spc " "

const int MAX_N = 1e6 + 5;
const int MAX_N_2 = 1e4 + 5;

int t,n,a[MAX_N],k, dp[10007][100]; 

int solve(int i,int m){
  if(i == n) return (m == 0);
  int &res = dp[i][m];
  if(res != -1) return res;
  res=solve(i+1,(((m+a[i])%k+k)%k));
  res|=solve(i+1,(((m-a[i])%k+k)%k));
  return res;
}

int main(){
  cin.tie(0) -> sync_with_stdio(0);

  freopen("i.inp","r",stdin);
  freopen("o.out","w",stdout);
  cin>>t;
  while(t--){
    cin>>n>>k;
    for(int i = 0;i < n;++i) cin>>a[i];
    mset(dp);
    int res = solve(1,(a[0]+k)%k);
    cout<<(res ? "Divisible" : "Not divisible")<<endl;
  }
  return 0;
}

