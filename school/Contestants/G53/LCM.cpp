#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int f[100001], a, b;
void init(){
	for(int i=a;i<=b;i++){
		int temp=i;
		int div=2;
		while(temp!=1){
			if(temp%div==0){
				temp/=div;
				f[div]++;
			}else div++;
		}
	}
}
int main(){
	cin>>a>>b;
	memset(f,0,100001*sizeof(int));
	init();
	ll ans=1;
	for(int i=2;i<=b;i++){
		if(f[i]!=0){
			ans*=((f[i]+1)*2-1);
		}
	}
	cout<<ans;
}