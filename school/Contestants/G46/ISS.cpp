#include <iostream> 
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
typedef long long int ll;

ll n,m,a[1000000],f[100000],w[100000];	

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	} 
	for(int i=0;i<n;i++){
		cin>>w[i];
		f[i]=w[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				f[i]=max(f[i],f[j]+w[i]);
			}
		}
	}
	ll ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,f[i]);
	}
	cout<<ans;
}