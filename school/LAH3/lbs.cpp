#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define lli long long int
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
const int MAX_N_2 = 1e3 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


int n, a[MAX_N], dp[MAX_N], dem=0, li[MAX_N], x, ld[MAX_N];

ll find(ll r, ll vt){
  ll l=-1, mid;
          while(r-l>1){
                    mid=(r+l)/2;
                            
                            if(a[vt]>dp[mid]) l=mid;
                                    if(a[vt]<=dp[mid]) r=mid;
                                        }
              return r;
}

void lis(){
      memset(dp, 0, sizeof dp);
          dp[dem++]=a[0];
              li[0]=dem;
                  
                  for(ll i=1; i<n; i++){
                            if(a[i]>dp[dem-1]){ 
                                        dp[dem++]=a[i];
                                                  li[i]=dem;
                                                          }
                                    else if(a[i]<dp[0]){ 
                                                dp[0]=a[i];
                                                          li[i]=1;
                                                                  }
                                            else{
                                                        x=find(dem, i);
                                                                  dp[x++]=a[i];
                                                                            li[i]=x;
                                                                                    }
                                                }
}

void lds(){
    dem=0, x=0;
      memset(dp, 0, sizeof dp);
          dp[dem++]=a[n-1];
              ld[n-1]=dem;
                  
                  for(ll i=n-2; i>=0; i--){
                            if(a[i]>dp[dem-1]){ 
                                        dp[dem++]=a[i];
                                                  ld[i]=dem;
                                                          }
                                    else if(a[i]<dp[0]){ 
                                                dp[0]=a[i];
                                                          ld[i]=1;
                                                                  }
                                            else{
                                                        x=find(dem, i);
                                                                  dp[x++]=a[i];
                                                                            ld[i]=x;
                                                                                    }
                                                }
}

int solve(){
    int ans=0;
      for(ll i=0; i<n; i++){
            ans=max(li[i]+ld[i]-1, ans);
              }
        return ans;
}

int main(){
      ios_base::sync_with_stdio(NULL); cin.tie(nullptr); cout.tie(nullptr);
             cin>>n;
                 for(ll i=0; i<n; i++) cin>>a[i];
                     
                         lis();
                             lds();
                                 cout<<solve();  
                                     return 0;
                                     }
      
