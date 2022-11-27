#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <utility>
#include <sstream>

using namespace std;
typedef long long ll;

ll u[1000000],temp=0;

int main(){
	ll a,b;
	cin>>a>>b;
	ll ans=1;
	for(int i=a;i<=b;i++){
		ans*=i;
	}
	for(int i=1;i<=sqrt(ans);i++){
		if(ans%i==0){
			u[temp]=i;
			temp++;
			u[temp]=ans/i;
			temp++;
		}
	}
	ll m=0;
	for(int i=0;i<temp;i++){
		for(int j=i+1;j<temp;j++){
			ll s=u[i]*(u[j]/__gcd(u[i],u[j]));
			if(s==ans){
				m+=2;
			}
		}
	}
	cout<<m+1;
}


