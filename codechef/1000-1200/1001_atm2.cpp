#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,i;
        long long k;
        cin>>n>>k;
        for (i=0; i<n; i++) {
            long long x;
            cin>>x;
            cout<<(k>=x ? (k-=x,1) : 0);
        }
        cout<<"\n";
    }
    return 0;
}
