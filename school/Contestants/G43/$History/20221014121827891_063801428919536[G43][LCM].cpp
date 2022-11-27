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
	ll uc = 1;
	map <int, int> ::iterator it;
	for(it=m.begin(); it!=m.end(); it++) uc *= (it->second + 1);
	
	ll count2 = uc-2, count1 = uc;
	if(count2%2==0) cout << 2*count1+count2-1;
	else cout << 2*count1+count2-2;
}