// this is one of those questions which you can hit tle by overthinking or over-optimizing, keep it simple, basic string-traversal will do
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') cout << 'T';
            else if (s[i] == 'T') cout << 'A';
            else if (s[i] == 'C') cout << 'G';
            else if (s[i] == 'G') cout << 'C';
        }
        cout << endl;
    }
    return 0;
}
