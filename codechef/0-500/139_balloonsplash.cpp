#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	cout<<(x<y ? "BOB" : (x==y ? "DRAW" : "ALICE"))<<endl;
	return 0;
}
