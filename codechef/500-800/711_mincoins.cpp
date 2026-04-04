#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    cout << (x % 5 != 0 ? -1 : (x % 10 == 0 ? x / 10 : x / 10 + 1)) << endl;
	}
    return 0;
}
