// my first 1000 attempt, fairly simpler to understand, took a while to get the if counter right
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n; 
        string s; 
        cin>>n>>s;
        int c = 0;
        for(char x : s)
            if((c = (x=='a'||x=='e'||x=='i'||x=='o'||x=='u') ? 0 : c+1) >= 4)
                break;
        cout << (c >= 4 ? "NO\n" : "YES\n");
    }
    return 0;
}
