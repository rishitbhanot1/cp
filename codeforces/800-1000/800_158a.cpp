#include <iostream>
using namespace std;
 
int main() {
    int n, k, x, kth=0,c=0, i;
    cin>>n>>k;
 
    for (i=1; i<=n; i++) {
        cin>>x;
        kth=(i == k ? x : kth);
        c += (x >= kth && x > 0 ? 1 : 0);
    }
    cout<<c;
}
