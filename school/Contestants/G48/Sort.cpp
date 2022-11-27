#include <bits/stdc++.h>

using namespace std;

bool check(long n, const vector<long> &A, const vector<long> &B){
    vector<long> tempA = A;
    vector<long> tempB = B;
    map<long, long> position;
    long start = 0;
    for(long end = 1; end < n; end++){
        if(B[end] < B[end - 1]){
            position[start] = end - 1;
            start = end;
        }
    }
    for(int i = 0; i < n; i++){
        if(A[i] != B[i]){
            auto it = position.upper_bound(i);
            it--;
            if(i > it->second) return false;
            sort(tempA.begin() + it->first, tempA.begin() + it->second + 1);
            if(tempA != B) return false;
            i = it->second;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        vector<long> A(n);
        vector<long> B(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 0; i < n; i++){
            cin >> B[i];
        }
        string result = (check(n, A, B)) ? "YES" : "NO";
        cout << result << endl;
    }

    return 0;
}