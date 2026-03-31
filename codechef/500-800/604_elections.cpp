#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x,age,count=0;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> age;
            if (age >= x) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
