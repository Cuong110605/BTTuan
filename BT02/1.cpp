#include <bits/stdc++.h>
using namespace std;
bool ngto(int n) {
    int dem=0;
    if (n<2) return false ;
    else {
        for (int i=2;i<n;i++) {
            if (n%i==0) dem++;
        }
        if (dem!=0) return false;
    }
    return true;
}

int main () {
    int n ; cin >> n;
    if (ngto(n)==true) cout <<"yes";
    else cout << "no";
}