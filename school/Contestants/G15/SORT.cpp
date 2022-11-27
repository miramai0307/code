#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;



bool check(int a[], int b[], int n){
    sort (a + 1, a + n + 1);
    sort (b + 1, b + n + 1);
    for (int i = 1; i <= n ; ++i){
        if (a[i] != b[i])
            return false;
    }
    return true;

}



void Sort(int a[], int l, int k){
    int temp[maxn];
    for (int i = l ; i <= k; ++i){
        temp[i - l + 1] = a[i];
    }
    sort(temp + 1, temp + k - l + 2);
    for (int i = l; i <=k; ++i){
        a[i] = temp[i - l + 1];
    }
}


int main(){
    int n ;
    int a[maxn], b[maxn], test1[maxn], test2[maxn];
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        int Max1 = 0, Max2 = 0;
        int l,k;
        for (int i = 1; i<=n; ++i){
            cin >> a[i];
            test1[i] = a[i];
            Max1 = max (Max1, a[i]);
            if (Max1 == a[i]){
                l = i;
            }

        }
        for (int i = 1; i<=n; ++i){
            cin >> b[i];
            test2[i] = b[i];
            Max2 = max(Max2, b[i]);
            if (Max2 == b[i]){
                k = i;
            }
        }


        if (!check(test1,test2,n)){
            cout << "NO"<<'\n'; continue;
        }
        else {
            if (k < l)
                cout << "NO"<<'\n';
            else{
                Sort(a,l,k);
    
                int j = k + 1;
                for (int i = 1; i<=k; ++i){
                    while (j < n){
                        if (a[i] == b[j]){
                            cout << "NO"<<'\n';
                            break;
                        }
                        j++;
                    }
                }
                cout << "YES"<<'\n';
            }
        }

    }
}