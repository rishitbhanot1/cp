/* here rather that simply doing x/2y we can use the gint function std::floor so that it gives the greatest int possible since x/2y may not be a whole number
 and for obvious practical reasons you can have a decimal amount of a person :) */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<floor(x/(2*y))<<endl; 
	}
	return 0;
}
