/* At first I used (n*n)/(k*k) because it seemed like dividing areas, but that gave wrong answers. 
I realized we can only place full k×k squares in a grid, so we must count how many fit along one side (n/k) and square it. 
Final formula: (n/k)*(n/k). */

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k,n;
	    cin>>n>>k;
	    cout<<(n/k)*(n/k)<<endl;
	}
    return 0;
}
