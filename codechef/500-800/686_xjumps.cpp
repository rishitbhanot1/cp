// simple yet effective use of divison remainder pair, since y no of steps can either be max factor i.e y*i=x or can give a remainder r.
// now that remainder can be added in an alpha increment, here it is one step therefore alpha =1
// hence net i : floor of x/y giving max perfect pair steps + 1*(x%y) as the incremental remainder

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout<<(floor(x/y) + x%y)<<endl;
	}
    return 0;
}
