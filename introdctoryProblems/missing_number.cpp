#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> A(n);
    ll sum = n * (n+1) / 2;
    ll nn = n-1;
    while (nn--) {
        ll x;
        cin >> x;
        sum -= x;
    }
    cout << sum;
}