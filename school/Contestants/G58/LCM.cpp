#include<bits/stdc++.h> 
using namespace std;
int a,b,x,y,M=1,cnt=0;
int ucln(int a, int b) {
    int r = a % b;         
    while (r!=0) {
        a = b;  
        b = r;
        r = a % b; 
    }
    return b;
}
int main () {
    cin >> a >> b;
    for (int i=a;i<=b;i++) M*=i;
    for (int i=1;i<=M;i++)
        for (int j=M;j>=1;j--)
            if (i*j==M*ucln(i,j)) cnt++;
    cout << cnt;
}