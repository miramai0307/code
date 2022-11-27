#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long maxx=0;
	cin>>n;
	long long a[n+1];
	long long w[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	long long f[n+1];
	f[0]=0;
	a[0]=0;
	for(int i=1;i<=n;i++){
		f[i]=w[i];
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				f[i]=max(f[j]+w[i],f[i]);
			}
		}
	}
	sort(f+1,f+n+1);
	cout<<f[n];
}