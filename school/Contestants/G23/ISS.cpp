#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
	int n;
	cin >> n;
	ll arr[n], weight[n], liss[n], max_liss = 0;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++) {
		cin >> weight[i];
	}
	for(int i = 0; i < n; i++) {
		ll liss_i = 0;
		for(int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				liss_i = max(liss_i, liss[j]);	
			}
		}
		liss[i] = liss_i + weight[i];
		max_liss = max(liss[i], max_liss);
	}
	cout << max_liss;
}