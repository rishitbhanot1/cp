// First, check if the current free space is enough to install the new app.
// If yes, answer is 0.
// Otherwise, check if deleting just one of the installed apps creates enough space.
// If yes, answer is 1.
// If even that is not enough, Chef must delete both apps, so answer is 2.

If even that is not enough, Chef must delete both apps, so answer is 2.
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    cout << (s - x - y >= z ? 0 : (s - min(x, y) >= z ? 1 : 2)) << endl;
	}
    return 0;
}
