#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	sort(s.begin(), s.end()), cout << (s == "act" ? "YES\n" : "NO\n")<<endl;
	return 0;
}
