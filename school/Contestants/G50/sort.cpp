#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[100001];
ll b[100001];
ll bot, top;
ll temp[100001];
bool ans[11];
void _sort()
{
    ll x = 0;
    for(int i = bot; i<= top; i++)
    {
        temp[x]=a[i];
        x++;
    }
    sort(temp,temp+x);
    x=0;
    for(int i = bot; i<= top; i++)
    {
      a[i]=temp[x];
      x++;
    }
}

void _check()
{
    for(int i = 1; i<=n; i++)
    {
        if(a[i]!=b[i])
        {
            if(bot==0)
            {
                bot = i;
            }
            if(top < i)
            {
                top = i;
            }
        }
    }
}
void _cin()
{
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++)
    {
        cin >> b[i];
    }

}
int main ()
{
    ll t;
    cin >> t;
    for(int i = 1; i<=t; i++)
    {
    _cin();
    _check();
    _sort();
    for(int j = 1; j<=n; j++)
    {
        if(a[j]!=b[j])
        {
            ans[i]=false;
            continue;

        }
        ans[i]=true;
    }
        bot = 0;
        top = 0;
    for(int i = 1; i<=n; i++)
    {
        a[i]=0;
        b[i]=0;
        temp[i]=0;
    }

    }
    for(int i = 1; i<=t; i++)
    {
        if(ans[i]==true)
        {
            cout<< "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
