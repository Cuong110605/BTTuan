#include <bits/stdc++.h>
using namespace std;

int mang[10000];
int main() {
    int n;
    for (int i=0;i<10000;i++) {
        cin >> mang[i]; n++;
    }
    int k;
    int dem=0;
    vector<int> v;
    int i=0;
    while( i<n) {
        if (mang[i]!=mang[i+1]) {
            k=mang[i];
            v.push_back(k);
            dem++;
            if (mang[i]<0) {
            break;
        }
        }
        i++;
    }
    for (int j=0;j<dem;j++) {
        cout << v[j] <<" ";
    }  
    
}