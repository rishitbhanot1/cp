// one of the first questions wherein i used a ternary counter
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            count += (a>=10 && a<=60 ? 1 : 0);
        }
        cout<<count<<endl;
	}
	return 0;
}
