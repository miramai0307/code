#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void quicksort(int a[], int l, int r) {
	int tg;
	int p=l, q=r;
	int pivot=a[p];
	while(p<=q) {
		while (a[p]<pivot) ++p;
		while (a[q]>pivot) --q;
		if (p<=q) {
			tg=a[p];
			a[p]=a[q];
			a[q]=tg;
			++p;
			--q;
		}
	}
	if (l<q) quicksort(a,l,q);
	if (p<r) quicksort(a,p,r);
}
int main() {
	int t;
	cin>>t;
	for (int x=1; x<=t; x++) {
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for (int i=0; i<n; i++) {
			cin>>a[i];
		}
		for (int i=0; i<n; i++) {
			cin>>b[i];
		}
		int i=0,j=n-1;
		while (i<j) {
			if (a[i]==b[i]&&a[j]==b[j]) {
				i++;
				j--;
			}
			else if (a[i]==b[i]&&a[j]!=b[j]) {
				i++;
			}
			else if (a[i]!=b[i]&&a[j]==b[j]) {
				j--;
			}
			else if (a[i]!=b[i]&&a[j]!=b[j]) {
				break;
			}
		}
		quicksort(a,i,j);
		int dem=0;
		for (int i=0; i<n; i++) {
			if (a[i]!=b[i]) {
				dem++;
			}
		}
		if (dem!=0) {
			cout<<"NO"<<endl;
		}
		else {
			cout<<"YES"<<endl;
		}
	}
}