// classic example of ternary operator use instead of if/elseif
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    cout << (s<=10 ? "Lower Double" : s<=15 ? "Lower Single" : s<=25 ? "Upper Double" : s<=30 ? "Upper Single" : "Invalid")<<endl;
	}
    return 0;
}
