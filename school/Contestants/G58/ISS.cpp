#include<bits/stdc++.h> 
using namespace std;
long long n,maxt=0, a[100001], w[100001], f[100001];
int main() {
    cin >> n; 
    memset(f,-1,sizeof f);
    for (int i=1; i<=n; i++) cin >> a[i]; 
    for (int i=1; i<=n; i++) cin >> w[i];
    f[0]=0; f[1]=w[1];
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=i; j++) {
            if(a[i]>a[j]) {
                f[i]=max(f[j]+w[i],f[i]);
                if(maxt < f[i]) maxt = f[i];
            }
        }
    }
    cout << maxt;
}