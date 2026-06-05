#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,s=0,e=0,i;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>x;
	        s+=x;
	        e+=!(x&1);
	    }
	    cout<<(s & 1 ? "YES" : e ? "YES" : "NO")<<endl;
	}
}
