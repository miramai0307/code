#include<bits/stdc++.h>
using namespace std;
long long boisochung (int n,int m){
	 long long x=__gcd(n,m)*(n/__gcd(n,m))*(m/__gcd(n,m));
	return x;
}
int main(){
	int a,b;
	cin >> a >> b;
	 long long n=boisochung(a,b);
	long long count=0,dem=0;
	int x=1;
	for(long long i = 2;i<n;i++)
	{ 
		if(n%i==0) dem++;
	}
	for(long long i =1 ;i <=n;i++)
	{
	 if(n%i==0) count ++;
	}
		
	if(dem%2==0) cout << 2*count+dem-1;
	else cout << 2*count+dem-2;
}