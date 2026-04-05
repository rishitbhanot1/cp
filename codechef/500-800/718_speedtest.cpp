// classic speed = distance / time but only thing to note is since constraint is a,x,b,y<=1000 thus for large values
// integer division might give incorrect answer hence use double division

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>x>>b>>y;
	    cout << ((double)a/x > (double)b/y ? "ALICE" : (double)a/x < (double)b/y ? "BOB" : "EQUAL") << endl;
	}
    return 0;
}
