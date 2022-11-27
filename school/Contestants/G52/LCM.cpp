#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

long long a, b, tich = 1, U[N], ans;

long long bcnn(long long x, long long y){
	return x*y/__gcd(x,y);
}
int main(){
	cin >> a >> b;
	for(long long i = a; i <= b; i++) tich *= i;
	long long k = 0;
	for(long long i = 1; i <= sqrt(tich) + 1; i++){
		if(tich % i == 0){
			U[k] = i;
			k++;
		}
	}
	U[k] = tich;
	k++;
	for(long long i = 0; i < k; i++){
		if(U[i] == tich || U[i] == 1){
			ans += (k-1) * 2 + 1;
			continue;
		}
		for(int j = 1; j < k - 1; j++){
			if(U[i] == U[j] && bcnn(U[i], U[j]) == tich)ans++;
			else if(bcnn(U[i], U[j]) == tich) ans++;
		}
	}
	cout << ans - k;
	
}