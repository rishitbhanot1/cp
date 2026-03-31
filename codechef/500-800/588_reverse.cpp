#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int rem=0, rev=0;
	    while(n != 0) {
            rem = n % 10;
            rev = rev*10 + rem;
            n /= 10;
      }
      cout<<rev<<endl;
	}
  return 0;
}
