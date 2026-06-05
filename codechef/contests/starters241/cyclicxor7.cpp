#include <bits/stdc++.h>
using namespace std;
const long long m = 998244353;
long long p(long long a, long long b){
    int r =1;
    while(b){
        if (b&1){
            r=r*a%m;
        }
        a=a*a%m;
        b/=2;
    }
    return r;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,g;
        cin>>n>>k;
        g=gcd(n,1LL<<k);
        cout<<(n/g%3 ? 1 : p(2,2LL*k*g))<<endl;
    }
}
