#include <bits/stdc++.h>
using namespace std;

#define int long long

const int NM = 1e5;

int n, a[NM+5], w[NM+5], f[NM+5], ans = 0;
int st[4*NM+50];

void build(){
	memset(st, sizeof(st), 0);
}

void update(int id, int l, int r, int i, int val){
	if (i < l || i > r) return;
	if (l == r){
		st[id] = max(st[id], val);
		return;
	}
	int mid = (l+r)/2;
	update(2*id, l, mid, i, val);
	update(2*id+1, mid+1, r, i, val);
	st[id] = max(st[2*id], st[2*id+1]);
}

int get(int id, int l, int r, int u, int v){
	if (v < l || u > r) return 0;
	if (l >= u && r <= v) return st[id];
	int mid = (l+r)/2;
	return max(get(2*id, l, mid, u, v), get(2*id+1, mid+1, r, u, v));
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		cin >> w[i];
	build();
	for (int i = 1; i <= n; i++){
		f[i] = get(1, 0, NM, 0, a[i]-1)+w[i];
		ans = max(ans, f[i]);
		update(1, 0, NM, a[i], f[i]);
	}
	cout << ans;
	return 0;
}