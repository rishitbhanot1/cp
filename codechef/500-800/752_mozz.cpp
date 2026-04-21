#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    cout<<ceil((ceil(r/30) + x) / y)<<endl;
	}
	return 0;
}
