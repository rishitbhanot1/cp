#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	cout<<(floor(n/7)==0 ? n : floor(n/7)*7)<<endl;
	return 0;
}
