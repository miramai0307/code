#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(){
	int a, b; cin >> a >> b;
	
	map <int, int> m;
	for(int j=a; j<=b; j++){
		int n = j;
		for(int i=2; i<=n; i++){
			while(n%i==0){
				m[i]++;
				n/=i;
			}
		}
	}
	ll res = 1;
	map <int, int> ::iterator it;
	for(it=m.begin(); it!=m.end(); it++) res *= (2 * it->second + 1);
	cout << res;
}