#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%4==0)
	        cout<<n/4<<endl;
	    else if (n%4 != 0 && n>4)
	        cout<<(n-n%4)/4 + 1<<endl;
	    else
	        cout<<"1"<<endl;
	}
    return 0;
}
