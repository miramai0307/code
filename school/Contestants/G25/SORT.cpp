#include<bits/stdc++.h>
#define fou(i,a,b) for(i = a; i <=b; i++)
#define fod(i,a,b) for(i = a; i >=b; i--)

using namespace std;
long long n, i, a[1000000],b[1000000],m,j;
void check(long long a[1000000], long long b[1000000])
{
	long long index = 0,ind = 0,p = 0;
	fou(i,1,m)
	{
		if(a[i] != b[i])
		{
			index = i;
			break;
		}
	}
	
	fod(i,m,1)
	{
		if(a[i] != b[i])
		{
			ind = i;
			break;
		}
	}
	if(ind == 0 || index == 0)
		cout<<"YES"<<'\n';
	
	else
	{
	
	sort(a + index, a + ind + 1);
	fou(i,1,m)
	{
		
		if(a[i]!=b[i])
		{
		 p = 1;
		 break;
	    }
    }
	if(p==0)
	cout<<"YES"<<'\n';
	else
	cout<<"NO"<<'\n';
}
}
int main()
{
   cin >> n;
    fou(j,1,n)
   {
   	cin >> m;
   	fou(i,1,m)
   	cin >> a[i];
   	fou(i,1,m)
   	cin >> b[i];
   	check(a,b);
   }

}

