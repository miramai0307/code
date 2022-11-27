#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt, dem;
ll Boisochung(ll a, ll b)
{
	ll s=1;
	if (a < b)
	{
		for (ll i=a; i<=b; i++)
		{
			s=s*i;
		}
	}
	return s;
}
int main()
{
	ll a, b;
	cin >> a >> b;
	for (ll i=1; i<=Boisochung(a, b); i++)
	{
		if (Boisochung(a, b)%i==0)
			dem++;
	}
	ll x=1, y=Boisochung(a, b);
	while (x<=y)
	{
		if (Boisochung(a, b)%x==0 && Boisochung(a, b)%y==0)
			cnt++;
		x++;
	}
	while (y<Boisochung(a, b))
	{
		if (Boisochung(a, b)%x==0 && Boisochung(a, b)%y==0 && y>=x && x>1)
			dem++;
		x++;
		y--;
	}
	cout << 2*cnt + (dem - 2) - 1;
	return 0;
}	