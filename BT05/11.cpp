#include <bits/stdc++.h>
using namespace std;
void doicoso(int n) {
    vector<long long> v;
    int dem=0;
    while (n!=0) {
        int k=n%2;
        v.push_back(abs(k));
        n/=2;
        dem++;
    }
    for (int i=dem-1;i>=0;i--) {
        cout << v[i];
    }
}
int main(){
	int n ; cin >> n;
	doicoso(n);
}