#include <bits/stdc++.h>
using namespace std;
void Merge(long long a[], long long left,long long mid, long long right)
{
    vector<long long>x(a+left,a+mid+1);
    vector<long long>y(a+mid+1,a+right+1);
    long long i=0,j=0;
    while (i<x.size() && j<y.size())
    {
        if (x[i]<y[j])
        {
            a[left++]=x[i++];
        }
        else
        {
            a[left++]=y[j++];
        }
    }
    while (i<x.size())
    {
        a[left++]=x[i++];
    }
    while (j<y.size())
    {
        a[left++]=y[j++];
    }
}
void Merge_Sort(long long a[], long long left, long long right)
{
    if (left>=right)
    {
        return;
    }
    long long mid=(left+right)/2;
    Merge_Sort(a,left,mid);
    Merge_Sort(a,mid+1,right);
    Merge(a,left,mid,right);
}
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m;
        long long k;
        long long dem=0;
        long long cnt=0;
        long long r=0;
        long long s=0;
        long long c[100005];
        vector<long long>v;
        vector<long long>p;
        vector<long long>q;
        vector<long long>vt;
        for (long long i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        for (long long j=0; j<n; j++)
        {
            long long y;
            cin >> y;
            p.push_back(y);
        }
        for (long long i=n-1; i>=0; i--)
        {
            if (v[i]!=p[i])
            {
                m=i;
                cnt++;
            }
        }
        for (long long i=0; i<n; i++)
        {
            if (v[i]!=p[i])
            {
                k=i;
                r++;
            }
        }
        if (cnt==0 && r==0) {
            cout << "YES" << endl;
        } else {
            for (long long i=m; i<=k; i++)
            {
                q.push_back(v[i]);
                vt.push_back(p[i]);
            }
            for (long long i=0; i<q.size(); i++)
            {
                c[i]=q[i];
            }
            Merge_Sort(c,0,q.size()-1);
            for (long long i=0; i<q.size(); i++)
            {
                if (c[i]==vt[i])
                {
                    dem++;
                }
            }
            if (dem==k-m+1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
