#include <bits/stdc++.h>

using namespace std;

long solve(long n, const vector<long> &arr, const vector<long> &weights){
    vector<long> table(n);
    for(int i = 0; i < n; i++){
        table[i] = weights[i];
    }
    long maxWeight = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] > arr[j]){
                table[i] = max(table[j]+ weights[i], table[i]);
            }
        }
        maxWeight = max(maxWeight, table[i]);
    }
    return maxWeight;
}

int main(){
    long n;
    cin >> n;
    vector<long> arr(n);
    vector<long> weights(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> weights[i];
    }
    cout << solve(n, arr, weights) << endl;

    return 0;
}