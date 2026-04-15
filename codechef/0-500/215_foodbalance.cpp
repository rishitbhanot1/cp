#include <bits/stdc++.h>
using namespace std;

int main() {
	int f1, p1, f2, p2;
	cin>>f1>>p1>>f2>>p2;
	cout<<(abs(f1-p1)>abs(f2-p2) ? "Second" : abs(f1-p1)<abs(f2-p2) ? "First" : "Both")<<endl;
	return 0;
}
