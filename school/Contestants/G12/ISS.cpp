#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i=0;i<n;i++)
	cin>>a[i];
	for (int i=0;i<n;i++)
	cin>>b[i];
	int sum[n];
	for (int i=0;i<n;i++){
		sum[i]=b[i];
		int c=i;
	for (int j=c+1;j<n-1;j++)
	if (a[j]>a[c]&&b[j]>0){
		sum[i]+=b[j];
		c=j;}}
	sort (sum,sum+n);
	cout<<sum[n-1];}