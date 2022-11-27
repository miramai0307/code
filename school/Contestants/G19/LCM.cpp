#include<bits/stdc++.h>
using namespace std;
long long c,b,s=1,i,j,k,a[10001],t=1,l=0;
int main()
{
	cin>>c>>b;
	for(i=c;i<=b;i++)
	{
		s*=i;
	}
	for(i=1;i<=s;i++)
	{
		if(s%i==0)
		{
			l++;
			a[l]=i;
		}
	}
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l;j++)
		{
			k=a[i]*a[j]/__gcd(a[i],a[j]);
			if(a[i]!=a[j]&&k==s)
			{
				t++;
			}
		}
	}
	cout<<t;
}