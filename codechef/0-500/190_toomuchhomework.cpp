// classic example of integer division anomaly , always consider for double division when executing ceil or floor
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	cout<<(ceil((100.0-x)/y) <= 10 ? "YES" : "NO")<<endl;
	return 0;
}
