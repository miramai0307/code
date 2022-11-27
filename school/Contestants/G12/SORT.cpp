#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,c=0,dem=0; 
		cin>>n;
		int a[n],b[n];
		for (int i=0;i<n;i++)
		cin>>a[i];
		for (int i=0;i<n;i++)
		cin>>b[i];
		for (int i=0;i<n;i++){
		if (a[i]!=b[i]) break;
		if (i==n-1) {cout<<"YES"<<endl;
		c=1;}}
		if (c==0) {for (int i=1;i<n;i++)
		if (b[i]<=b[i-1]) dem++;
		if (dem==n-1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;}}}