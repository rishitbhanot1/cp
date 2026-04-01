/*Explanation
For each test case, we need to form `N` pairs of shoes, where each pair requires one left and one right shoe.
Chef already has `M` left shoes but no right shoes.
* We always need to buy `N` right shoes.
* If `M < N`, we also need to buy `(N - M)` additional left shoes.
So, the total number of shoes to buy is:
```
N + max(0, N - M)
```
This ensures we have enough left and right shoes to make `N` pairs.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    cout<< n + max(0,n-m) <<endl;
	}
    return 0;
}
