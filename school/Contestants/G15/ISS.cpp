#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e5 + 5;
const int inf = 1e9  + 7;

int n ;
int a[maxn] , w[maxn];
ll f[maxn], dp[maxn], g[maxn];




int main(){
    cin >> n;
    for (int i = 1; i<= n; ++i)
        cin >>a[i];
    for (int i = 1; i <= n; ++i)    
        cin >> w[i];

    for (int i = 1; i <= n; ++ i){
        g[i] = inf;            
    }

    a[0] = 0;
    ll Max = -(inf);
    dp[1] = w[1];
    w[0] = 0;
    g[0] = 0;

    
    for (int i = 1; i <= n; ++i){
        int l = 1, r = n;
        while (l <= r){
            int mid = (l + r)/2;
            if (g[mid] < a[i]) l = mid + 1;
            else r = mid - 1;
        }
        f[i] = l;
        g[l] = a[i];

        
        int L = 0, R = n;
        while (L <= R)
        {
            int mid = (L + R) / 2;
            if (g[mid] < a[i]) L = mid + 1;
            else
                R = mid - 1;
        }
        dp[i] = dp[R] + w[i];
    }

   

    for (int i = 1; i<=n; ++i){
        Max = max (Max, dp[i]);
    }
    
    cout << Max;
}