#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ll a, b, mAx = -1e17;
	cin >> a >> b;
	ll count[b+1];
	memset(count, 0, sizeof count);
	for(ll i = a; i <= b; i++){
		ll x = i;
		for(ll j = 2; j <= sqrt(i); j++){
			while(x % j == 0){
				count[j]++;
				x /= j;
				if(j > mAx){ mAx = j;
				}
			}
		}
		if(x != 1){
			count[x]++;
			if(x > mAx){
				mAx = x;
			}
		}
	}
	ll k = 1, sum = 1, x1 = 0;
	for(ll m = 2; m <= mAx; m++){
		if(count[m] > 0){
			sum=sum*(count[m]+1);
			if(count[m] > 1){
				k*=(count[m]-1);
				x1++;
			}
		}
	}
	if(x1 >= 2){
		sum= sum*3- 1 -2*k+2*x1;
	} else {
		sum= sum*3- 1 - k*2;
	}
	cout << sum;
}