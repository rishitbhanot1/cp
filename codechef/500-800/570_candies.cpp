#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout<<(n-x <= 0 ? 0 : (n - x + 3)/4)<<endl;
    }
    return 0;
}
