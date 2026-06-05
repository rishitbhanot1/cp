#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,m=0;
	    cin>>n;
	    bool check=1;
	    while (n--){
	        cin>>x;
	        if (m&x){
	           check=0; 
	        }
	        m|=x;
	    }
	   cout<<(check ? "YES" : "NO")<<endl;
	}
}
