#include <bits/stdc++.h>
using namespace std;

int main()
{   
	long long n;
	cin >> n;
	long long i,j,a[n+1],w[n+1],sum[n+1],ans;
	ans=0;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    	sum[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        cin >> w[i];
    }
    sum[1]=w[1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[i]>a[j])
            {
            	sum[i]=max(sum[i],sum[j]+w[i]);
                if(ans<sum[i])
                {
                    ans=sum[i];
                }
            }
        }
    }
    cout << ans;
}