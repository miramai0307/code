#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mu[1000009];
ll a,b;
void phantich(ll a, ll b) {
    for(int i=a;i<=b;i++) {
        ll so=i;
        ll prime=2;
        while(so>1) {
            if(so%prime == 0) {
                so = so/prime;
                mu[prime]++;
            }
            else {
                prime++;
            }
        }
    }
}
int main() {
    cin >> a >> b;
    phantich(a,b);
    ll pairs=1;
    for(int i=2;i<=b;i++) {
        if(mu[i]!=0)
        pairs = pairs*((mu[i]+1)*2-1);
    }
    cout << pairs;
}
