#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b; cin >> a >> b;
	long long bcnn = a * b / __gcd(a,b);
	
	int count1 = 0, count2 = 0;
	for(long long i=2; i<bcnn; i++) if(bcnn%i==0) count2++;
	for(long long i=1; i<=bcnn; i++) if(bcnn%i==0) count1++;
	
	if(count2%2==0) cout << 2*count1+count2-1;
	else cout << 2*count1+count2-2;
}