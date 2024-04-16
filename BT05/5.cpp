#include <bits/stdc++.h>
using namespace std;
bool ngto(int n) {
    int dem=0;
    if (n<2) return 0 ;
    else {
        for (int i=2;i<n;i++) {
            if (n%i==0) dem++;
        }
        if (dem!=0) return 0;
    }
    return 1;
}

int main () {
    int n ; cin >> n;
    for (int i=2;i<n;i++) {
        if (ngto(i)==1) cout << i << endl;
    }
}