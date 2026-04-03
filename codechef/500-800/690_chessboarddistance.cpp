// general cartesian distian formula = max of ( mod(x1-y1) or mod(x2-y2) )
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x1, x2, y1, y2;
	    cin>>x1>>x2>>y1>>y2;
	    cout<<(max(abs(x1-y1),abs(x2-y2)))<<endl;
	}
	return 0;	
}
