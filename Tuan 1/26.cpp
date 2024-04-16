#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++) 
    {
        cin >> a[i];
    }
    int mn=a[0]; 
    int mx=a[0];
    double tb=0;
    for (int i=0;i<n;i++) 
    {
        if (mx<a[i]) mx=a[i];
        if (mn>a[i]) mn=a[i];
        tb+=a[i];
    }
    cout << tb/n << endl;
    cout << mx << endl;
    cout << mn;
}