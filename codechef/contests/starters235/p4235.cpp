#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,x;
	    string s;
	    cin>>n>>s;
	    string b = "";
	    char last = 'a' - 1;
	    for (i=0; i<n; i++){
	        (s[i] >= last) ? (last = s[i]) : (b+= s[i], s[i] = '.');
	    }
	    sort(b.begin(), b.end());
	    x = 0;
	    for(i=0; i<n; i++){
	       (s[i] = (s[i] == '.') ?  b[x++] : s[i]);
	    }
	    cout<<s<<endl;
	}
    return 0;
}
