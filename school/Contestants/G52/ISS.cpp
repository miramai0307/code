#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

long long a[N], n, L[N], Lmax;

int main(){
	cin >> n;
	vector< pair<int , int> > a(n);
	for(int i = 0; i < n; i++) cin >> a[i].first;
	for(int i = 0; i < n; i++) cin >> a[i].second;
	for(int i= 0; i < n; i++){
		Lmax = 0;
		for(int j = 0; j < i; j++){
			if(a[i].first > a[j].first){
				Lmax = max(Lmax, L[j]);
			}
		}
		L[i] = Lmax + a[i].second;
	}
	Lmax = 0;
	for(int i = 0; i < n; i++){
		Lmax = max(Lmax, L[i]);
	}
	cout << Lmax;
}