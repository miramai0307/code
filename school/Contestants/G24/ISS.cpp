#include<bits/stdc++.h>
using namespace std;
const int NM = 1e5+5;
int n,a[NM],w[NM],k=0;
long long s=0;
int f[NM];
void lis(){
	f[0]=w[0];
	for(int i=0; i<n; i++){
		             
		for(int j=0; j<i; j++){
			if(a[i] > a[j] ){
				f[i]=max(f[i],f[j]+w[i]);
				if(s < f[i]){
					s=f[i];
				}
			}
		}
	}
	cout<<s;
}
int main(){
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		f[i]=0;
	}
	for(int i=0; i<n; i++) cin >> w[i];
	lis();
	return 0;
}