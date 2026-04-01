// this problem asks you to use inbuilt functions to find square root of input rounded off to nearest integer
// thus use sqrt() to find square root and floor() to round of to nearest integer
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<floor(sqrt(n))<<endl;
	}
    return 0;
}
