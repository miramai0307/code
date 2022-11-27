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

ll t,n,a[1000000],b[1000000];

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		ll l=0,r=n-1;
		while(a[l]==b[l] && l<n) l++;
		while(a[r]==b[r] && r>0) r--;
		if(l==n){
			cout<<"YES";
			continue;
		}
		ll tg[100000],temp=0;
		for(int i=l;i<=r;i++){
			tg[i]=a[i];
		}
		sort(tg+l,tg+r+1);
		ll flag=0;
		// cout<<l<<" "<<r<<endl;
		for(int i=l;i<=r;i++){
			// cout<<tg[i]<<endl;
			if(tg[i]!=b[i]){
				cout<<"NO"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)cout<<"YES"<<endl;
	}
}


