#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1, tmp = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) tmp++;
        else {
            ans = max(ans, tmp);
            tmp = 1;
        }
    }
    cout << max(ans, tmp);
}