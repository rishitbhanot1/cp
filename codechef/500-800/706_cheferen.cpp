// this code uses double division and not integer division
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,a,b,i,even,odd,sum;
	   cin>>n>>a>>b;
	   cout<<(n != 1 ? floor(n/2.0)*a + ceil(n/2.0)*b : b)<<endl;
	}
	return 0;
}

// now rather than using floor or ceil we can directly use their integer equivalent versions i.e (n/2) and (n+1)/2 to truncate for floor or ceil without accounting for 
// double division

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   int n,a,b,i,even,odd,sum;
	   cin>>n>>a>>b;
	   cout<<(n != 1 ? (n/2)*a + ((n+1)/2)*b : b)<<endl;
	}
	return 0;
}
