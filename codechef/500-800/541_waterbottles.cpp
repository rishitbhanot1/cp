#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int b1,b2,b3,empty;
        cin>>b1>>b2>>b3;
        empty = (b1 == 0) + (b2 == 0) + (b3 == 0);
        cout<<(empty>=2 ? "Water filling time\n":"Not now\n");
    }
    return 0;
}
