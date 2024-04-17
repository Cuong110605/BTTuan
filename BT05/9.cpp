#include <iostream>
#include <stdlib.h> 
#include <ctime>   
using namespace std;

int ranles (int n) {
    srand(time(0));
    int a=rand()%n;
    return a;
}

int main() {
    int n ; cin >> n ;
    cout << ranles(n);
}