#include <bits/stdc++.h>
using namespace std;
long long a[300000];
long long b[300000];
long long c[300000];
int main()
{
    long long n,i,j,SLN=0,m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=0;
    }
    for(i=1;i<=n;i++)
        cin>>b[i];
    c[1]=b[1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a[i]>a[j])
            {
                m=b[i]+c[j];
                c[i]=max(c[i],m);
                SLN=max(SLN,c[i]);
            }
        }
    }
    cout<<SLN;
}