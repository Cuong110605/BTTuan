#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n],b[n];
    for (int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    sort (a,a+n);
    sort (b,b+n);
    int dem=0;
    for (int i=0;i<n;i++) {
        if (a[i]>b[i]) dem++;
    }
    if (dem==n) cout <<"Yes";
    else cout <<"No";
}