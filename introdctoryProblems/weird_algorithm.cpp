#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) n /= 2;
        else {
            n *= 3;
            n++;
        }
    }
    cout << n;
}