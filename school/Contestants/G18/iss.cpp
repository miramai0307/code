#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], w[n];
    int dp[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> w[i];
        dp[i] = w[i];
    }
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[i] > a[j]){
                dp[i] = max(dp[i], dp[j] + w[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans, dp[i]);
    }
    cout << ans;
}