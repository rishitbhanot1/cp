#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h[31], a[31], x=0;
    cin>>n;
    for (int i=0; i<n; i++) cin>>h[i]>>a[i];
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            x += h[i] == a[j];
    cout<<x;
}
