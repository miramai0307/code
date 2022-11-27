#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
 
int main(){
	ll n,ip,ip1;
	cin>>n;
	pair<ll,ll> a[n];
	for (int i=0;i<n;i++){
		cin>>ip;
		a[i].first=ip;
	}
	for (int i=0;i<n;i++){
		cin>>ip;
		a[i].second=ip;
	}
	ll dp[n],ans=0,Max=0;
	for (int i =0;i<n;i++){
		dp[i]=a[i].second;
		Max=0;
		for (int j =i-1;j>=0;j--){
			if (a[i].first>a[j].first){
				Max=max(dp[j],Max);
			}
		}
		dp[i]+=Max;
		ans=max(dp[i],ans);
	}
	cout<<ans;
}