#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    cout<<abs(2 - ((x == a) + (x == b) + (y == a) + (y == b)))<<endl;
	}
    return 0;
}
