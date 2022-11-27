#include <bits/stdc++.h>
using namespace std;
pair<long long, long long>p[100005];
long long f[100005];
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    for (long long i=1; i<=n; i++) {
        cin >> p[i].first;
    }
    for (long long i=1; i<=n; i++) {
        cin >> p[i].second;
    }
    f[0]=0;
    f[1]=p[1].second;
    for (long long i=2; i<=n; i++) {
        for (long long j=1; j<i; j++) {
            if (p[j].first<p[i].first) {
                f[i]=max(f[i],f[j]+p[i].second);
            }
        }
    }
    sort(f,f+n+1);
    cout << f[n];
}
