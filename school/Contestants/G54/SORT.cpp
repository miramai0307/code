#include <bits/stdc++.h>
using namespace std;
#define BUG(x) {cerr << #x << " = " << x << endl;}
#define PR(x, a, b) {cerr << #x << " = "; for (int i = a; i <= b; i++) cerr << x[i] << ' '; cerr << endl;}
#define NMAX 300007
#define oo 1000000007
#define F first
#define S second
vector<int> id[NMAX];
map<int, int> mp;
int n;
int a[NMAX], b[NMAX];
void read() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        id[a[i]].push_back(i);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}

void init() {

}
int lastIndex(int key) {
    auto it = mp.upper_bound(key);
    if (it != mp.begin()) {
        it--;
        return it->S;
    }
    return oo;
}
void InsertPos(int key, int val) {
    auto it = mp.upper_bound(key);
    if (it != mp.begin()) {
        it--;
        if (it->S <= val) return;
    }
    it = mp.lower_bound(key);
    while (it != mp.end() && val <= it->S) mp.erase(it++);
    mp[key] = val;
}
bool solve() {
    for (int i = n - 1; i >= 0; i--) {
        //BUG(b[i]);
        if (id[b[i]].empty()) return false;
        else {
            int index = id[b[i]].back();
            //BUG(index);
            id[b[i]].pop_back();
            //BUG(lastIndex(b[i]));
            if (lastIndex(b[i]) < index) return false;
            InsertPos(b[i], index);
        }
    }
    return true;
}

void write() {
    if (solve()) cout << "YES" << endl;
    else cout << "NO" << endl;
    for (int i = 0; i < n; i++) {
        id[a[i]].clear();
    }
    mp.clear();
}

int main() {
	//freopen("SORT.INP", "r", stdin);
	//freopen("*.OUT", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
        read();
        init();
        write();

	}
	return 0;
}
