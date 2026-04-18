#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int best = a[0], worst = a[0], ans = 0;
    for (int i = 1; i < n; i++) {
        ans+=(a[i] > best) ? 1 : (a[i] < worst ? 1 : 0);
        best=(a[i] > best) ? a[i] : best;
        worst=(a[i] < worst) ? a[i] : worst;
    }
    cout << ans;
}
