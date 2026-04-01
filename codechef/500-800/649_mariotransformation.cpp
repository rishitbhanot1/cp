#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<(x%3==0 ? "NORMAL" : x%3==1 ? "HUGE" : "SMALL")<<endl;
    }
    return 0;
}
