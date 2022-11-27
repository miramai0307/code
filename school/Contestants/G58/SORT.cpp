#include <bits/stdc++.h>
using namespace std;
int indexsearch(int num, int arr[], int n) {
	int start = -1, end = n - 1;
	while (end - start > 1) {
		int mid = start + (end - start) / 2;
		if (arr[mid] >= num) {
			end = mid;
		} else {
			start = mid;
		} 
	}
	return end;
}
void swapelement(int i, int j, int arr[]) {
	int value_i = arr[i];
	arr[i] = arr[j];
	arr[j] = value_i;
}
void reversearray(int arr[], int n) {
	int i = 0, j = n - 1;
	while (i < j) {
		swapelement(i, j, arr);
		i++;
		j--;
	}
}
int LIS(int arr[],int n) {
	int increasing[n], len_lis[n]; 
	int cnt = 1;
	increasing[0] = arr[0];
	len_lis[0] = 0;
	for(int i = 1; i < n; i++) {
		if (arr[i] < increasing[0]) {
			increasing[0] = arr[i];
			len_lis[i] = 0;
		} else if (arr[i] > increasing[cnt - 1]) {
			increasing[cnt++] = arr[i];
			len_lis[i] = cnt - 1;
		} else {
			int index = indexsearch(arr[i], increasing, cnt);
			increasing[index] = arr[i];
			len_lis[i] = index;
		}
		cnt=max(cnt,len_lis[i]);
	}
	return cnt;
}
int main() {
    int T, n, a[100001], b[100001];
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i=1; i<=n;i++) cin >> a[i];
        for (int i=1; i<=n;i++) cin >> b[i];
        if (LIS(a,n)<=LIS(b,n)) cout << "YES"; else cout << "NO";
    }
}