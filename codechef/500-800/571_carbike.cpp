#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int x,y;
        cin>>x>>y;
        cout<<(x==y ? "SAME" : (x>y ? "CAR" : "BIKE"))<<endl;
	}
    return 0;
}
