#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, g, b, total, maxim;
    cin>>r>>g>>b;

    total = (r + g + b);
    maxim = max(r, max(g, b));

    if( 2 * (total - maxim) <= maxim)
        cout<<total - maxim<<endl;
    else
        cout<<total / 3;
}