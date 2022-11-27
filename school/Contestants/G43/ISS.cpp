#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++) cin >> a[i];
	int w[n+1], s[n+1];
	for(int i=1; i<=n; i++){
		cin >> w[i];
		s[i] = w[i];
	}
	
	for(int i=2; i<=n; i++){
		for(int j=1; j<i; j++){
			if(a[i] > a[j]){
				s[i] = max(s[i], s[j] + w[i]);
			}
		}
	} 
	
	int ans = -1;
	for(int i=1; i<=n; i++) ans = max(ans, s[i]);
	cout << ans;
}
