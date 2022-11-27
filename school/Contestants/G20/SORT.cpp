#include <bits/stdc++.h>
using namespace std;

long long t, n, a[100001], b[100001];

int main(){
	cin >> t;
	while (t--){
		cin >> n;
		for (int i = 0; i<n; i++)
			cin >> a[i];
		for (int i = 0; i<n; i++) cin >> b[i];
					
		int q = 0, p = 0, max = 0, min = 0, c = 0;
		int z = n;
		int j = 0, d = n-1;
		while (z > 0){
			while (j < n){
				if (a[j] != b[j])
				{
					min = j;
					break;
				}
				j++;
			}
			while (d > 0){
				if (a[d] != b[d])
				{
					max = d;
					break;
				}
				d--;
			}
			if (q == min && p == max && a[min] == b[min])
			{
				cout << "YES" << endl;
				c++;
				break;
			}
			else{
				q = min; p = max;
			}
			sort (a+min, a+max+1);
			z--;
		}
		while (c == 0){
			for (int i = 0; i<n; i++)
			{
				if (a[i] != b[i])
				{
				cout << "NO" << endl;
				c++;
				break;
				}
			}
		}			
		if (c == 0) cout << "YES" << endl;
	}
}