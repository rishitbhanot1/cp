#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	cout<<(y*z<=x ? x-(y*z) : -1);
}
