#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int n ; cin >> n;
    int mang[n];
    int dem[10]={};
    for (int i=0;i<n;i++) {
        cin >> mang[i];
        for (int j=0;j<10;j++) 
        {
            if (mang[i]==a[j]) dem[a[j]]++;
        }
    }
    for (int i=0;i<10;i++) {
        cout <<"so "<< i <<" :" << dem[i] << endl;
    }

}