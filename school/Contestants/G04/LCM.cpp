#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
int main(){
	ll a, b, max1 = -1e10;
	cin >> a >> b;
	ll count[b+1];
	memset(count, 0, sizeof count);
	for(ll i = a; i <= b; i++){
		ll x = i;
		for(ll j = 2; j <= sqrt(i); j++){
			while(x % j == 0){
				count[j]++;
				x /= j;
				if(j > max1){
					max1 = j;
				}
			}
		}
		if(x != 1){
			count[x]++;
			if(x > max1){
				max1 = x;
			}
		}
	}
	ll k = 1, S = 1, x1 = 0;
	for(ll m = 2; m <= max1; m++){
		if(count[m] > 0){
			S *= (count[m]+1);
			if(count[m] > 1){
				k*=(count[m]-1);
				x1++;
			}
		}
	}
	if(x1 >= 2){
		S = S*3- 1 - (k-x1)*2;
	} else {
		S = S*3- 1 - k*2;
	}
	cout << S;
}
