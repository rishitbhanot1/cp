#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i,k;
	    cin>>n;
	    int a[n];
	    int c[n + 1];
	    int m[n + 1];
	    for(i=0; i<=n; i++){
	        c[i]=0;
	    }
	    for(i=0; i<n; i++){
	        cin>>a[i];
	        c[a[i]]++;
	    }
	    m[0]=0;
	    for(i=1; i<=n; i++){
	        m[i] = (c[i - 1] == 0) ? m[i - 1] + 1 : m[i - 1];
	    }
	    for(k=0; k<=n; k++){
	        cout<<max(m[k], c[k])<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
