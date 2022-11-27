#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MN=1e5;
ll n, a[MN], b[MN], Max, sum[MN];

ll Maxsum(ll a[],ll b[],ll n) {
    for(int i=0; i<n; i++) {
        sum[i]=b[i];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            if(a[i]>a[j] && sum[i]<sum[j]+b[i]) {
                sum[i]=sum[j]+b[i];
            }
        }
    }
    for(int i=0; i<n; i++) {
        if(Max<sum[i]) {
            Max=sum[i];
        }
    }
    return Max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }
    cout << Maxsum(a,b,n);
}