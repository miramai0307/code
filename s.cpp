#include <bits/stdc++.h>
using namespace std;

int main(){
    long double a[100000],s,c; long long n;
    cin>>n;
    for(long long i = 0;i < n;++i) cin>>a[i];
    for(long long i = 0;i < n;i += 2){
        s += a[i];
        c++;
    }
    cout<<fixed<<setprecision(2)<<s/c;
}
