#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long maxT, maxN, sumN, k, r;
        cin>>maxT>>maxN>>sumN;
        k = min(maxT, sumN / maxN);
        r = sumN - k * maxN;
        cout << k * maxN * maxN + (k < maxT ? r * r : 0) << '\n';
    }
}
