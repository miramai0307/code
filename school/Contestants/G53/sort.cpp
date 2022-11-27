#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int x[100001], y[100001];
void proc(){
	int n; cin>>n;
	int a[n],b[n];
	memset(x,0,100001*sizeof(int));
	memset(y,0,100001*sizeof(int));
	for(int i=0;i<n;i++){
		cin>>a[i];
		x[a[i]]++;
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		y[b[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(x[i]!=y[i]){
			cout<<"NO"; return;
		}
	}
	for(int i=0;i<n-1;i++){
		int acount=0,bcount=0;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]) acount++;
			if(b[j]<b[i]) bcount++;
		}
		if(acount!=bcount){
			cout<<"NO"; return; 
		}
	}
	cout<<"YES"; return;
}
int main(){
	int t; cin>>t;
	while (t--){
		proc();
		cout<<endl;
	}
}