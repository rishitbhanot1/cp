#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << (s.length() > 10 ? s.front() + to_string(s.length() - 2) + s.back() : s) << '\n';
    }
}
