// here rather than doing double(a/x) and double(b/y) we do cross multiply and check a*yh and b*x 
// since double(a/x) first does integer division and then converts to double so no actual benefit 
// in cases of divisional comparison, try and do cross multiplicative comparison
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    cout<<(a*y < b*x ? "Chef" : a*y > b*x ? "Chefina" : "Both")<<endl;
	}
    return 0;
}
