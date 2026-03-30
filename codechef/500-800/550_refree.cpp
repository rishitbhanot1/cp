#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    cout << ((r1 | r2 | r3 | r4) == 0 ? "IN\n" : "OUT\n");
	}
    return 0;
}
