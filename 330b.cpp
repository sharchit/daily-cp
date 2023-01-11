#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin>>n>>m;

    map<int, bool> check;

    for(int i = 0; i < m; i++) {
        cin>>x>>y;
        check[x] = true;
        check[y] = true;
    }

    int mid = 0;
    for(int i = 1; i <= n; i++) {
        if (!(check[i])) {
            mid = i;
            break;
        }
    }

    cout<<n - 1<<endl;
    for(int i = 1; i <= n; i++) {
        if(i != mid) {
            cout<<mid<<" "<<i<<endl;
        }
    }
}