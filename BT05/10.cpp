#include <iostream>
#include <stdlib.h> 
#include <ctime>   
#include <math.h>
using namespace std;
int main() {
    srand(time(0));
    int n=rand(); cout << n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    for (int i=0;i<n-2;i++) {
        for (int j=i+1;j<n-1;j++) {
            for (int k=j+1;k<n;k++) {
                if ((a[i]+a[j]+a[k])%25==0) cout << a[i] <<" "<< a[j]<<" "<<a[k]<< endl;
            }
        }

    }

}