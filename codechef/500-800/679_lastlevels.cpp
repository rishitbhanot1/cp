// this is one of my most favourite questions, it has a very basic thing about ceil functions and total no. of breaks, 
// if levels < 3 thus no break, 
// if levels is a multiple of 3, then breaks = factor - 1 because after the last triplet of levels, our work is complete hence no extra break at end
// otherwise find breaks as a ceil factor of 3
// very trivial yet extremely fun to execute with ternary operators rather than standard if else

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<(x<=3 ? x*y : x%3==0 ? x*y+z*(ceil(x/3)- 1) : x*y+z*ceil(x/3))<<endl;
	}
    return 0;
}
