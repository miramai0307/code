#include <bits/stdc++.h>
using namespace std;

#define int long long

const int NM = 1e6;

int a, b;
string ans = "1";
int f[NM+5];

void factor(int n, int k){
	for (int i = k; i*i <= n; i++)
		if (n%i == 0){
			f[i]++;
			factor(n/i, i);
			return;
		}
	f[n]++;
}

string mul(string a, int b){
	string c = "";
	int carry = 0;
	for (int i = a.length()-1; i >= 0; i--){
		int s = (a[i]-48)*b+carry;
		carry = s/10;
		c = char(s%10+48)+c;
	}
	while (carry > 0){
		c = char(carry%10+48)+c;
		carry /= 10;
	}
	return c;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> b;
	memset(f, 0, sizeof(f));
	for (int i = a; i <= b; i++)
		factor(i, 2);
	for (int i = 2; i <= NM; i++)
		if (f[i] > 0) ans = mul(ans, 2*f[i]+1);
	cout << ans;
	return 0;
}