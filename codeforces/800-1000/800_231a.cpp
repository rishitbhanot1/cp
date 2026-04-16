#include <iostream>
using namespace std;

int main() {
    int n, i = 0;
    cin>>n;
    while (n--) {
        int p, v, t;
        cin>>p>>v>>t;
        i = (p+v+t >= 2 ? i + 1 : i);
    }
    cout<<i;
}
