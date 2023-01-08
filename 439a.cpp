#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin>>n>>d;

    int jokes = 2 * (n - 1);
    int sing = 10 * (n - 1);
    int t;
    for(int i = 0; i <  n; i++) {
        cin>>t;
        sing += t;
    }
    if(d >= sing) {
        cout<<jokes + (d - sing)/5<<endl;
    }
    else {
        cout<<-1<<endl;
    }
}