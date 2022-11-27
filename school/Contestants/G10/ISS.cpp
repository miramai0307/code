#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n],b[n];
	for(int i = 1; i <= n ;i ++)
	{
		cin >> a[i];
	}
	for(int i = 1 ;i <= n ; i++)
	{
		cin >> b[i];
	}
	long long f[n+1];
	long long ans=-1e9;
	for(int i =1;i<=n;i++)
	{
		f[i]=b[i];
	}

	for(int i = 1 ;i <= n ;i ++)
	{
		for(int j=1;j<i;j++)
		{
			if(a[i]>a[j])
			{
				f[i]=max(f[i],f[j]+b[i]);
			}
		}
		ans=max(ans,f[i]);
	}
	
	cout << ans;
}