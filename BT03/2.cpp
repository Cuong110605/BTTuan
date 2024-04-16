#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin >> n ;
    int a[n];
    for(int i=0;i<n;i++) 
    {
        cin >> a[i];
    }
    int chan=0; 
    int le=0;
    int mn=a[0];
    int mx=a[0];
    for (int i=0;i<n;i++)
    {
        if(mn>a[i]) mn=a[i];
        if(mx<a[i]) mx=a[i];
        if(a[i]%2==0) chan+=a[i];
        else le++;
    }
    cout << mn << endl;
    cout << mx << endl;
    cout << chan << endl;
    cout << le << endl;
}