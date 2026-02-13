/*
Problem: Mahasena
Platform: CodeChef
Rating: 533

Concept:
Count even and odd values and compare their frequencies.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n, x, ce = 0, co = 0;
    cin >> n;
    while(n--) {
        cin >> x;
        (x % 2 == 0) ? ce++ : co++;
    }
    cout << (ce > co ? "READY FOR BATTLE\n" : "NOT READY\n");
}
