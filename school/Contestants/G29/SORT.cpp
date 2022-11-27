#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MN=1e5;
ll n, k, a[MN], b[MN], c[MN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--) {
        cin >> k;
        for(int i=0; i<k; i++) {
            cin >> a[i];
            c[i]=a[i];
        }
        for(int i=0; i<k; i++) {
            cin >> b[i];
        }
        sort(c,c+k);
        if(c[0]!=b[0]) {
            cout << "NO";
        }
        else cout << "YES";
        cout << '\n';
    }
}