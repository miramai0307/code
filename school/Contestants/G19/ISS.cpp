#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,a[100001],c[100001],d[100001];	
void LIS(int n)
{
	for(i=2;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			if(a[i]>a[j])
			{
				c[i]=max(c[i],c[j]+d[i]);
			}
		}
	}
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]; 
	} 
	for(i=1;i<=n;i++)
	{
		cin>>d[i];
		c[i]=d[i];
	}
	LIS(n);
	sort(c+1,c+n+1);
	cout<<c[n];
}