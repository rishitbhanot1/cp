#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,y,s;
	    cin>>a>>b>>c>>d;
	    y=max({a,b,c,d});
	    s=a+b+c+d;
	    cout<<(y>s-y ? "YES":"NO")<<endl;
	}
    return 0;
}
