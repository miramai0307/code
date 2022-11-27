#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> b;
int ans2=0,ct;
int l(vector <int> a,int g)
{
   int ans=0;
   vector <int> x(100001,0);
   x[0]=b[0];
   for(int i=0;i<g;i++)
    {for(int j=0;j<i;j++)
        if(a[i]>a[j])
    {
        x[i]=max(x[j]+b[i],x[i]);
        ans=max(ans,x[i]);
    }
    }
  cout<<ans;
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
        {cin>>m;
        a.push_back(m);}
    for(int i=0;i<n;i++)
    {
        cin>>m;
        b.push_back(m);
    }
    l(a,n);

}
