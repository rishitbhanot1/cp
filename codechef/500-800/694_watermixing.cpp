/*The bathtub starts at temperature A.
Using hot water, the temperature can increase by at most X degrees.
Using cold water, the temperature can decrease by at most Y degrees.

So Chef can reach any temperature from (A - Y) to (A + X).
If B lies in this range, print YES; otherwise print NO.*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        cout << (b>=a-y && b<=a+x ? "YES":"NO") << endl;
    }
	return 0;
}
