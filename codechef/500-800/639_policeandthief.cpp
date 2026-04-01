#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<abs(x-y)<<endl;
	}
    return 0;
}

// here the main logic is time = distance / speed
// since police has speed 2 units & theif has one unit, minimmum time will take place only when they are moving in
// each others direction, thus relative speed is 2-1=1
// and distance is abs(x-y)
// thus time = abs(x-y)/1 = abs(x-y)
