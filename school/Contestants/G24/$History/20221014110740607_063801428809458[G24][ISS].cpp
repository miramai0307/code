#include<bits/stdc++.h>
using namespace std;
const int NM = 1e5+5;
int n,a[NM],w[NM],v[NM],k;
int f[NM];
void lis(int b[],int sz){
	f[0]=1;
	for(int i=1; i<sz; i++){
		f[i]=1;               
		for(int j=0; j<i; j++){
			if(b[i] > b[j] && f[i] < f[j]+1){
				f[i]=f[j]+1;
				v[i]=j;
			}
		}
	}
}
int main(){
	cin >> n;
	k=n-1;
	long long s=0;
	a[n]=INT_MAX;
	a[0]=INT_MIN;
	for(int i=1; i<n; i++) cin >> a[i];
	for(int i=0; i<n; i++) cin >> w[i];
	lis(a,n+1);
	while(k>0){
		s+=w[k];
		k=v[k];
	}
	cout << s;
	return 0;
}