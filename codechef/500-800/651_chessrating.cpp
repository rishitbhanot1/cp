// Ceiling division trick:
// ceil(a / b) can be computed using integers as:
// (a + b - 1) / b
//
// Why it works (one-line intuition):
// Adding (b - 1) ensures any remainder pushes the result to the next integer.
// Why ceil((y - x) / 8) may NOT work:
// If y and x are integers, then (y - x) / 8 performs INTEGER DIVISION first.
// That means the fractional part is already lost before ceil() is applied.
// Example:
// y = 9, x = 2
// (y - x) / 8 = 7 / 8 = 0   // integer division
// ceil(0) = 0               // wrong (expected 1)
// Fix: force floating-point division
// ceil((y - x) / 8.0)
// OR use integer trick:
// ( (y - x) + 7 ) / 8
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    cout << ((y - x) + 7) / 8 << endl;
	}
    return 0;
}
