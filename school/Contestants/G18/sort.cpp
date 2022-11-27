#include <bits/stdc++.h>

using namespace std;

int test(int a[],int b[], int n){
    int c[n], d[n];
    for (int i = 0; i < n; i++){
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        d[i] = b[i];
    }
    sort(c, c+n);
    sort(d, d+n);
    for (int i = 0; i < n; i++){
        if (c[i] != d[i]){
            return 0;
        }
    }
    int mark[n];
    int m = 0;
    for (int i = 0; i < n; i++){
        if (a[i] != b[i]){
            mark[m] = i;
            m++;
        }
    }
    if (m == 0){
        return 1;
    }
    for (int i = mark[0] + 1; i <= mark[m-1]; i++){
        if (a[i+1] != b[i+1]){
            if (b[i-1] > b[i]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int tes;
    cin >> tes;
    for (int z = 1; z <= tes; z++){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        if (test(a, b, n) == 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}