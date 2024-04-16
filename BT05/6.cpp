#include <bits/stdc++.h>
using namespace std;

int ucln (int a, int b) {
    int k;
    if (a>b) {
        for (int i=1;i<=b;i++) {
            if (a%i==0 && b%i==0) k=i;
        }
    }
    else {
        for (int i=1;i<=a;i++) {
            if (a%i==0 && b%i==0) k=i;
        }
    }
    return k;
}
bool ntcn (int a, int b) {
    return ucln(a, b)==1;
}

int main ()
{
    int a, b;
    cin >> a >> b;
    if (ntcn(a, b)) {
        cout << a << " va " << b << " la hai so nguyen to cung nhau" << endl;
    } 
    else {
        cout << a << " va " << b << " khong phai la hai so nguyen to cung nhau" << endl;
    }

}