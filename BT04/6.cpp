
#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int a[n];
    for (int i=0;i<n;i++) {
    	cin >> a[i];
	}
	int x=0,y=0,z=0;
    for (int i=0;i<n-2;i++) {
    	bool check = false;
        for (int j=i+1;j<n-1;j++) {
        	bool check1 = false;
            for (int k=j+1;k<n;k++) {
                if (a[i]+a[j]+a[k]==0) {
                    x+=a[i];
                    y+=a[j];
                    z+=a[k];
                    check = true;
                    check1 = true;
                    break;
                    }
                
            }
            if(check1) break;
        }
        if (check) break;

    }
    cout << x <<" "<< y <<" "<< z;
    
}
