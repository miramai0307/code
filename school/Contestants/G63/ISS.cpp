#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll a[100009],w[100009],F[100009];
int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++) {
        cin >> w[i];
    }
    F[1]=w[1];
    for(int i=2;i<=n;i++) {
        F[i]=w[i];
        for(int j=1;j<i;j++) {
            if(a[i]>a[j]) {
                F[i]=max(F[i],F[j]+w[i]);
            }
        }
    }
    sort(F+1,F+n+1);
    ll ans=F[n];
    cout << F[n];
}
