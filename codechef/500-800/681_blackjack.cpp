// the existing pair has to sum up equal or greater than 11 since then the max possible is 10 to achieve 21
// if pair < 11 & as no card exists > 10 hence 21 will never be reached thus game lost i.e -1

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    cout<<(a+b<11 ? -1 : 21-a-b )<<endl;
	}
    return 0;
}
