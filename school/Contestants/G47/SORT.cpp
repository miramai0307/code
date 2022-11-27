#include <bits/stdc++.h>
using namespace std;

const int NM = 1e5;

int T, N, A[NM+5], B[NM+5];
int A0[NM+5], B0[NM+5], pos[NM+5];
bool used[NM+5];

void solve(){
	sort(A0+1, A0+1+N);
	sort(B0+1, B0+1+N);
	for (int i = 1; i <= N; i++)
		if (A0[i] != B0[i]){
			cout << "NO" << endl;
			return;
		}
	memset(used, 0, sizeof(used));
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++)
			if (A[i] == B[j] && !used[j]){
				pos[i] = j;
				used[j] = 1;
				break;
			}
	}
	for (int i = 1; i < N; i++)
		for (int j = i+1; j <= N; j++)
			if (A[i] < A[j] && pos[i] > pos[j]){
				cout << "NO" << endl;
				return;
			}
	cout << "YES" << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> T;
	while (T--){
		cin >> N;
		for (int i = 1; i <= N; i++){
			cin >> A[i];
			A0[i] = A[i];
		}
		for (int i = 1; i <= N; i++){
			cin >> B[i];
			B0[i] = B[i];
		}
		solve();
	}
	return 0;
}