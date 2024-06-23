#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> A(n);
    for (ll &x : A) cin >> x;
    ll ans {};
    for (ll i = 1; i < n; i++) {
        if (A[i] < A[i-1]) {
            ans += A[i-1] - A[i];
            A[i] = A[i-1];
        }
    }
    cout << ans;
}