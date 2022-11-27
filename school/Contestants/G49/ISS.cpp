#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[1000000];long long w[10000000]; long long k[1000000];
    long long ans;
    long long n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        k[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> w[1];
    }
    k[1]=w[1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
                l[i]=max(k[i],k[j]+w[i]);
                if(ans<k[i])
                {
                    ans=k[i];
                }
            }
        }
    }
    cout << ans;
}