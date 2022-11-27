#include<bits/stdc++.h>

using namespace std;

bool check(int a[], int b[], int n){
	for(int i = 0; i<n; i++){
		if(a[i] == b[i]){
			return true;
		}
		else return false;	
	}
}
bool siu(int a[], int b[], int n){
	sort(a, a+n);
	for(int i = 0; i<n; i++){
		if(a[i] == b[i]){
			return true;
		}
		else return false;
	}
}
bool tpa(int a[], int b[], int n, int x, int z){
	int index;
	for(int i = 0; i<n; i++){
		if(a[i] == x){
			index = i;
			break;
		}
	}
	sort(a, a + index);
	if(a[z] == x){
		return true;
	}else {
		return false;
	}
}
int main(){
	int n, x, t, z;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n], b[n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			cin>>b[i];
		}
		if(a[0] < b[0]){
			cout<<"NO"<<endl;
			continue;
		}
		if(check(a, b, n) || siu(a, b, n)){
			cout<<"YES"<<endl;
			continue;
		}else{
			cout<<"NO"<<endl;
		}
		for(int i = 0; i<n; i++){
			if(a[i] > b[i]){
				x = b[i];
				z = i;
				if(tpa(a, b, n, x, z)){
					cout<<"YES"<<endl;
					break;
				}else{
					cout<<"NO"<<endl;
					break;
				}
			}
		}
	}
}