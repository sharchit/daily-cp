#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    bool last = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i % 2 == 0) cout<<'#';
            else {
                if(last) {
                    if(j != m - 1) cout<<'.';
                    else cout<<'#';
                }
                else {
                    if(j == 0) cout<<'#';
                    else cout<<'.';
                }
            }
        }
        if(i % 2) last = !last;
        cout<<endl;
    }
}