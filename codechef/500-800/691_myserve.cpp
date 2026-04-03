/*The total number of points played is P + Q, so that many serves have already happened.
Each player serves for 2 consecutive turns, so we divide (P + Q) by 2 to find the current serve block.
If the block number is even, it is Alice's serve; otherwise, it is Bob's serve.*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int p,q;
	    cin>>p>>q;
	    cout<<(((p+q)/2)%2==0 ? "Alice":"Bob")<<endl;
	}
	return 0;
}
