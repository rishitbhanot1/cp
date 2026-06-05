#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, a=0, c=1,i;
	    string s;
	    cin>>n>>s;
	    for (i=1; i<n;i++){
	        if (s[i] == s[i - 1]){
	            c++;
	        }
	        else{
	            a+=c/3;
	            c=1;
	        }
	    }
	    a+=c/3;
	    cout<<a<<endl;
	}
}
