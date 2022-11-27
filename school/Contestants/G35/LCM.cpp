#include<bits/stdc++.h>
using namespace std;
long long a[300000];
int main()
{
    long long i,j,SC=1,n=0,M=1,x,y,UCLN,BCNN;
	cin>>x>>y;
	for(i=x;i<=y;i++)
		M*=i;
	for(i=1;i<=M;i++)
	{
		if(M%i==0)
			{n++;
			a[n]=i;}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		    UCLN=__gcd(a[i],a[j]);
			BCNN=(a[i]*a[j])/UCLN;
			if(BCNN==M and a[i]!=a[j])
				SC++;
		}
	}
	cout<<SC;
}
