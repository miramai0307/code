#include<bits/stdc++.h>
using namespace std;
int prime(long long x){
	for(int l=2;l<=sqrt(x);l++){
		if(x%l==0) return 0;
	}
	return 1;
}
int main(){
	long long a,b;
	unsigned int t=1;
	cin>>a>>b;
	unsigned int f[b+1];
	for(long long i=1;i<=b;i++){
		f[i]=0;
	}
	for(long long j=a;j<=b;j++){
	long long p;
	for(long long i=2;i<=j;i++){
		if(j%i==0&&prime(i)==1){
			p=j;
			while(p%i==0){
				f[i]++;										
				p=p/i;
			}
		}
	}
}
	for(long long i=2;i<=b;i++){
	    if (f[i]>0){
	    	if(f[i]%2==1) t=t*((f[i]+1)*(f[i]+2))/2;
	    	else{
	    		t=t*((f[i]+1)*(f[i]+2))/2-1;
			}
		}
	}
	cout<<t;
}