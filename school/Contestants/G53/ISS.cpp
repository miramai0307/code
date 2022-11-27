#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f[100001], a[100001], w[100001];
int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		int count=0;
		for(int j=1;j<i;j++){
			if(a[j]<a[i]){
				f[i]=max(f[j]+w[i],f[i]);
				count++;
			}
		}
		if(count==0) f[i]=w[i];
	}
	ll ans=INT_MIN;
	for(int i=1;i<=n;i++){
		ans=max(ans,f[i]);
	}
	cout<<ans;
}
