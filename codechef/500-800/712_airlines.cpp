#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        cout<< (x >= (n + 99)/100 ? 0 : abs(x - (n + 99)/100)) <<endl;
    }
    return 0;
}
