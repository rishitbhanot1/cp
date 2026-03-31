// instead of variable comparison use inbuilt std::max({list}) function
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<max({a,b,c})<<endl;
	}
    return 0;
}
