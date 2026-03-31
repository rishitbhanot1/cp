#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y%x==0 && y<=n*x)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	}
    return 0;
}
