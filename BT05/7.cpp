#include <bits/stdc++.h>
 using namespace std;
 void tamgiaccan(int m, int n) {
     
         
         for (int j=1;j<=m;j++) {
             cout << " ";
         }
         
         for (int a=1;a<=n;a++) {
             cout << "*";
         }
         cout << endl;
     
 }
 int main() {
     int n; cin >> n;
     for (int i=0;i<n;i++) {
         tamgiaccan(n-i-1,2*i+1);
     }
 }