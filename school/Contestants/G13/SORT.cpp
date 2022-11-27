#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ll x,y,n;
	cin>>n;
	for(int i=1;i<=n;i++) {
	cin>>x;
	ll a[x+5];
ll b[x+5];
	ll c[x+5];
	for(int i=1;i<=x;i++) cin>>a[i];
	for(int j=1;j<=x;j++) cin>>b[j];
	for(int i=1;i<=x;i++) c[i]=a[i];
	sort(c+1,c+n+1);
	
	int dp[x+5][x+5];
	for(int i=0;i<=x;i++){
		for(int j=0;j<=x;j++){
			if(i==0||j==0) dp[i][j]=0;
			else{
			if(a[i-1]==c[j-1]) dp[i][j]=dp[i-1][j-1]+1;
			if(a[i-1]!=c[j-1]) dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
}
	ll x1=dp[n][n];
	int dp1[x+5][x+5];
	for(int i=0;i<=x;i++){
		for(int j=0;j<=x;j++){
			if(i==0||j==0) dp1[i][j]=0;
			else{
			if(b[i-1]==c[j-1]) dp1[i][j]=dp1[i-1][j-1]+1;
			if(b[i-1]!=c[j-1]) dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1]);
		}
	}
}
ll y1=dp1[n][n];
if(x1==y1) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

}
