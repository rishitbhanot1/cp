#include <iostream>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<1;
        else if(n==2) cout<<"1 2";
        else if(n==3) cout<<"3 2 1";
        else if(n==4) cout<<"3 2 1 4";
        else{
            cout<<n<<' '<<n-2<<' ';
            for(int i=1;i<=n-4;i++) cout<<i<<' ';
            cout<<n-3<<' '<<n-1;
        }
        cout<<'\n';
    }
}
