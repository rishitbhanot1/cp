#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<((tolower(s[0])=='y' && tolower(s[1])=='e' && tolower(s[2])=='s') ? "YES\n" : "NO\n");
    }
}
