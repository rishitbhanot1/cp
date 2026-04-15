#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	cout<<(n>=2*max(x,y) ? "YES" : "NO")<<endl;
	return 0;
}
