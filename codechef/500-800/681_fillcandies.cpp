// this uses works on the principle that any p/q can be converted to the ceiling equivalent as (p+q-1)/q, as shown in alternative
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int n,k,m;
	     cin>>n>>k>>m;
	     cout<<(n%(k*m)>=1 ? ceil(n/(k*m)) + 1 : ceil(n/(k*m)))<<endl;
	 }
    return 0;
}

// alternative 

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int n,k,m;
	     cin>>n>>k>>m;
	     cout<<((n+(k*m)- 1)/(k*m))<<endl;
	 }
    return 0;
}
