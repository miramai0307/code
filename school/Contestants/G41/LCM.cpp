#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
int main()
{
	ll x,y;
	cin >> x >> y;
	ll kq = 1;
        for(ll i = x;i <= y;i++)
	{
		ll v = 2;
		ll p = i;
		while(p != 1)
		{
		    if(p % v == 0)
		    {
		    	a[v]++;
		    	p /= v;
			}
			else v++;
	         }
	}
	for(ll i = 2;i <= y;i++)
	{
		if(a[i] != 0)
		{
			kq *= (2*a[i]+1);
		}
	}
	cout << kq;
}


