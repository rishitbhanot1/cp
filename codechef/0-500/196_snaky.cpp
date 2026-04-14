#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	cout<<(s[0]=='s' || s[3]=='s' ? "YES" : "NO")<<endl;
	return 0;
}

// the main difference is "" means an actual string but '' refers to a character
// when we do s[0] == "s"
// s[0] → char
// "s" → string literal (const char)*
// You are comparing char with string, which is invalid. thus use ''
