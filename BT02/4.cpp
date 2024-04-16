#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5 ;
    for (int i=n; i>=1 ;i--) {
        for (int j=1;j<=n-i;j++) {
            cout << " ";
        }
        for (int m=1;m<=i*2-1;m++) {
            cout << "*";
        }
        cout << endl;
    }
}