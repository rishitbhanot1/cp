#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int c = 1;
	    for(int i = 0; i < n/2; i++)
	        c = (s[i]=='?' && s[n-1-i]=='?') ? 0 : c;
	    c = (n%2 && s[n/2]=='?') ? 0 : c;
	    cout << (c ? "YES\n" : "NO\n");
	}
    return 0;
}
