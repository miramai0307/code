#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100001];
ll w[100001];
int n;
ll BIT[100001];

void update(int x, ll temp) {
    for(; x <= 100000; x += x&(-x)) {
        BIT[x] = max(BIT[x], temp);
    }
}

ll get(int x) {
    ll res = 0;
    for (; x > 0; x -= x&(-x)) {
        res = max(res, BIT[x]);
    }
    return res;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    ll res = 0;
    for(int i = 1; i <= n; i++) {
        ll temp = get(a[i] - 1) + w[i];
        res = max(res, temp);
        update(a[i], temp);
    }
    cout << res;
    return 0;
}
