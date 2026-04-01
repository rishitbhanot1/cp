// The total number of bottles that can be filled given the water supply K and capacity X is ⌊K/X⌋.
// Since you are constrained by the number of available bottles N, you simply need to take the 
// minimum of your potential capacity and your available stock: min(N,⌊K/X⌋).
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>x>>k;
        cout<<min(n,k/x)<<endl;
    }    
    return 0;
}
