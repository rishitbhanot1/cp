#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
        int d = 0;
        if (x > 5000) d = 500;
        else if (x > 1000) d = 100;
        else if (x > 100) d = 25;
        cout << x - d << '\n';
	}
    return 0;
}
