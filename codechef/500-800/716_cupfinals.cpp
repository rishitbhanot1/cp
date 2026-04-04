#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,d;
	    cin>>x>>y>>d;
	    cout<<(abs(x-y)<=d ? "YES" : "NO")<<endl;
	}
    return 0;
}
