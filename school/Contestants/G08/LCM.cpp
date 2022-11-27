#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool checkprime(ll x)
{
    if (x<2)
    {
        return false;
    }
    for (ll i=2; i<=sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll tich = 1;
    for (ll i=a; i<=b; i++)
    {
        tich = tich * i;
    }
    ll dem = 1;
    for (ll i=2; i<=tich; i++)
    {
        ll mu = 0;
        if (checkprime(i) == true)
        {
            while(tich % i == 0)
            {
                mu++;
                tich=tich/i;
            }
            dem = dem*(2*mu + 1);
        }
    }
    cout << dem;

}
