#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    string s[] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    cout << s[6 - max(y, w)];
}
