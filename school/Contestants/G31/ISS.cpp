#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll dp[1000000], w[1000000];
int main(){
	ll n, rose;
    cin>>n;
    ll* a = new ll[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
        dp[i] = 0;
    }
    for(int i=1; i<=n; i++){
        cin>>w[i];
    }
    dp[1] = w[1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            if(a[i] > a[j]){
                dp[i] = max(dp[j]+w[i] ,dp[i]);
                if(rose < dp[i]){
                    rose = dp[i];
                }
            }
        }
    }
    cout<<rose;
    delete[]a;
}