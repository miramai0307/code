#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool uoc(ll x, ll n) {
	if (n%x==0) {
		return true;
	}
	return false;
} 
int max(ll a, ll b) {
	if (a>b) return a;
	else return b;
}
bool LCM(ll i, ll j, ll n) {
	ll x=max(i,j);
	if (n%i!=0||n%j!=0) {
		return false;
	}
	else if (x==n) {
		return true;
	}
	for (int k=x; k<n ; k++) {
		if (k%i==0&&k%j==0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a,b;
	cin>>a>>b;
	ll n=1;
	for (int i=a; i<=b; i++) {
		n=n*i;
	}
	ll dem=2;
	for (ll i=2; i<=n; i++) {
		if (uoc(i,n)==true) {
			for (ll j=i; j<=n; j++) {
				if (LCM(i,j,n)==true) {
					if (i!=j) {
						dem=dem+2;
					}
					else if (i==n&&j==n){
						dem++;
						break;
					}
				}
			}
		}
	}
	cout<<dem;
}