#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n;pair<ll,ll> a[10007];pair<ll,ll> b[10007];ll ip;

void core(){
	cin>>n;
	for (int i =0;i<n;i++){
		cin>>ip;
		a[i]={ip,i};
	}
	int st=0;
	for (int i =0;i<n;i++){
		cin>>ip;
		b[i]={ip,i};
	}
	sort (a,a+n);
	sort (b,b+n);
	for (int i =0;i<n;i++){
		for (int j =i+1;j<n;j++){
			if (a[i].second<a[j].second&&b[i].second>b[j].second){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
	
}

int main(){
	int t;
	cin>>t;
	while (t--){
		core();
	}
}
