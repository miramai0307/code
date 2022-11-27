#include<bits/stdc++.h>
using namespace std;
bool kq[11];
void test(int q,bool xet[]){
	int n;
	cin>>n;
		int k=0;
		long long a[n+1],b[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]==b[i]){
			k++;
			xet[i]=1;
			}
		}
		if(k==n) {
			kq[q]=1;
		 	return;
		}
		k=0;
		for(int i=1;i<n;i++){
			if(b[i]>b[i+1]) k++;
		}
		if(k>=n-1){
			kq[q]=0;
		 	return;
		}
		k=0;
		for(int i=1;i<n;i++){
			if(xet[i]!=xet[i+1])
				k++;
		}
		if(k==2||k==1){
			kq[q]=1;
			return;
		}
		kq[q]=0;
}
int main(){
	int t,n;
	cin>>t;
	bool xet[n+1];
	for(int i=1;i<=n;i++){
		xet[i]=0;
	}
	for(int q=1;q<=t;q++){
		test(q,xet);
	}
	for(int q=1;q<=t;q++){
		if(kq[q]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}