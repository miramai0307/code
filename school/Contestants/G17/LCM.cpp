#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fori(i, a, b) for(int i = a; i <= b; i++)
const int MN = 1e6;
ll a, b, cnt;
vector<ll> v;

ll factorise(ll n) {
    fori(i, 1, n) {
        if(n % i == 0) {
            v.push_back(i);
            cnt++;
        }
    }
}

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

ll solve() {
    ll ans = 0;
    ll mul = 1;
    fori(i, a, b)
        mul *= i;
    factorise(mul);
    fori(i, 0, cnt-1) {
        fori(j, i+1, cnt-1) {
            if(lcm(v[i], v[j]) == mul && !(v[i] == mul && v[j] == mul))
                ans += 2;
        }
    }
    return ans + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    cout << solve();
}