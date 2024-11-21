#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    int *a = new int[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i=0; i<n; i++) {
        return a;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    
    int *x = sort_it(n);
    for(int i=0; i<n; i++) {
        cout << x[i] << " ";
    }

    return 0;
}