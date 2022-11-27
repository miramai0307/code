#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int a,b,m=1,dem=3;
	cin>>a>>b;
	for (int i=a;i<=b;i++)
	m=m*i;
	vector<int> s;
	for (int i=2;i<=m/2;i++)
	if (m%i==0) s.push_back(i);
	dem+=s.size()*2;
	int k=s.size()/2;
	for (int i=k;i<2*k;i++)
	for (int j=i-1;j>=2*k-i-1;j--)
	if (s[i]*s[j]/__gcd(s[i],s[j])==m) dem+=2;
	cout<<dem;}