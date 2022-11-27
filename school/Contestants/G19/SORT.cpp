#include<bits/stdc++.h>
using namespace std;
long long n,a[100001],b[100001],c[100001],lefty,righty,x,t;
bool check[100001];
int main ()
{
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
		cin >> n;
	    for(int j = 1; j<=n; j++)
	    {
	        cin >> a[j];
	    }
	    for(int j = 1; j<=n; j++)
	    {
	        cin >> b[j];
	    }
	    for(int j = 1; j<=n; j++)
	    {
	        if(a[j]!=b[j])
	        {
	            if(lefty==0)
	            {
	                lefty = j;
	            }
	            if(righty < j)
	            {
	                righty = j;
	            }
	        }
	    }
	    x = 0;
	    for(int j = lefty; j<= righty; j++)
	    {
	        c[x]=a[j];
	        x++;
	    }
	    sort(c,c+x);
	    x=0;
	    for(int j = lefty; j<= righty; j++)
	    {
	      a[i]=c[x];
	      x++;
	    }
	    for(int j = 1; j<=n; j++)
	    {
	        if(a[j]!=b[j])
	        {
	            check[i]=false;
	            continue;
	        }
	        check[i]=true;
	    }
	    for(int j = 1; j<=n; j++)
	    {
	        a[j]=0;
	        b[j]=0;
	        c[j]=0;
	        lefty = 0;
	        righty = 0;
	    }
    }
    for(int i = 1; i<=t; i++)
    {
        if(check[i])
        {
            cout<< "YES" << endl;
        }
        else 
		{
			cout << "NO" << endl;
		}
    }
}