#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    set<char> srr(s.begin(), s.end());
    cout<<(srr.size()%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}
