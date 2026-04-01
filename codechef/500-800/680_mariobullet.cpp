// this again is a speed, distance, time equation question. basically to find is t(travel) = distance/speed. if t(travel) > T i.e 'Z', 
// then immediate fire i.e min relax time = 0, else T - t(travel) = min relax time
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<( y/x>z ?  0 : z-y/x )<<endl;
	}
    return 0;
}
