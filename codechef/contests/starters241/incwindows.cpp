#include <bits/stdc++.h>
using namespace std;

const long long m=998244353;
const int N=200000;

long long f[N+1],inv[N+1];

long long p(long long a,long long b){
    int r=1;
    while(b){
        if(b&1){
            r=r*a%m;
        }
        a=a*a%m;
        b/=2;
    }
    return r;
}

int main() {

    f[0]=1;
    for(int i=1;i<=N;i++){
        f[i]=f[i-1]*i%m;
    }

    inv[N]=p(f[N],m-2);
    
    for(int i=N;i;i--){
        inv[i-1]=inv[i]*i%m;
    }

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;
        long long ans=0,c;

        for(int i=1;i<=n;i++){
            c=(n-k-1<0||n-k-1>n-i) ? 0 : f[n-i]*inv[n-k-1]%m*inv[k+1-i]%m;
            ans=(ans+p(i-1,k)*c)%m;
        }
        cout<<ans<<endl;
    }
}
