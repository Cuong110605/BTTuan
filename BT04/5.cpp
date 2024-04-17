#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ; cin >> n ;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
        a[i]=abs(a[i]);
    }
    sort(a,a+n);
    int x=0,y=0;
    for (int i=0;i<n;i++) {
        if (a[i]==a[i+1]) {
            x+=a[i];
            y-=a[i];
            break;
        }
    }
    cout << x << " " << y;

}