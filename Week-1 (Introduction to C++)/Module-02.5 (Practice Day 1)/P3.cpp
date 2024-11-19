#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }   
    for(int i=0, j=n-1; i<n; i++, j--) {
        swap(a[i], a[j]);
    }   
    for(int j=n-1; j>=0; j--) {
        cout << a[j] << " ";
    }
    
    return 0;
}