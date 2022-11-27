#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100000], w[100000], l[100000], Max;
int main()
{
    cin >> n;
    for(int i = 1;i <=n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <=n; i++)
    {
        cin >> w[i];
    }
    l[1]=w[1];
    for(int i = 1; i<= n; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            if(a[i]>a[j])
            {
                if(l[i]<l[j]+w[i]) l[i]=l[j]+w[i];
                if(Max < l[i])
                {
                    Max = l[i];
                }
            }
        }
    }
    cout << Max;
}