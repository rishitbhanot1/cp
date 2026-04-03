// totally uncool way of solving this, is the most optimal, this is one of those questions where you start feeling simple is boring
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    cout << (w==x||w==y||w==z||w==x+y||w==y+z||w==x+z||w==x+y+z ? "YES":"NO") << endl;
	    }
    return 0;
}
